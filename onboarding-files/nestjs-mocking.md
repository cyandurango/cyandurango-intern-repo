# Milestone 9 | Writing Meaningful Automated Tests

## 9.7 Mocking Dependencies & Database Interactions in NestJS

Goal: Learn how to mock dependencies and database interactions in NestJS tests.

### **_Why is mocking important in unit tests?_**

We've established previously that mocking improves testing time, but the main reason for mocking is to isolate problems from the units of the system before implementing them together. This ensures that the components function logically, and accordingly to its purpose. It also controls the testing environment, ensuring that the component for testing is the only component tested.

This entails utilizing `jest.fn()` or `jest.spyOn()` in setting up the unit tests. `jest.fn` forces a new mock function, replacing the original function from the mocked provider. `jest.spyOn` utilizes the existing method of the original provider.

I tried to perform a test using `jest.spyOn` in my create function in the UserService, and the logic should be that the user should still be created even if the `email-queue` is down. The test failed because I didn't have any error handling in place (see [original `UserService` code](assets/mocking-1-orig.png) and [Test Results](assets/mocking-2-orig-results.png) here). I now modified the create function to include a `try-catch` block to still create the user:

- [updated `UserService` code block](assets/mocking-3-updated-code.png)
- [Updated Test Results](assets/mocking-4-updated-results.png)

### **_How do you mock a NestJS provider (e.g., a service in a controller test)?_**

By firstly providing a JS object with the same methods as the real service and utilizing the `useValue` approach inside the providers array in the `createTestModule`. The test module will allow it to function like the real service, but the values used are the values instantiated in the JS object. For dynamic mocking, `useFactory` is utilized because it provides a fresh instance of the mock every test case. This ensures that the testing is not dependent on the previous tests.

This is only possible due to the `provide` key, that allows the controller to recognize what service is needed and what type of mock is injected. See the controller setup and the results of the testing here, wherein it utilizes useValue and useFactory respectively:

- [Controller Setup](assets/unit-tests-3-controller-spec-code.png)
- [Testing Results](assets/unit-tests-4-controller-test-results.png)

### **_What are the benefits of mocking the database instead of using a real one?_**

Speed is the primary benefit, as real database operations (I/O) are significantly slower than in-memory mocks. Relying on a real database introduces external dependencies like connectivity issues or out-of-sync data, which can cause tests to fail even if the provider logic is correct. Mocking makes tests deterministic by allowing us to define the exact response of the database, and it ensures there are no side effects or manual cleanup required after the tests finish.

### **_How do you decide what to mock vs. what to test directly?_**

Identifying the unit under testing is the first step. From this, I test the logic in its code to ensure that it works according to its purpose. I mock the external dependencies, making the testing process independent, fast, and isolated.
