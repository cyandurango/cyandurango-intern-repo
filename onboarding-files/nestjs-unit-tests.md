# Milestone 9 | Writing Meaningful Automated Tests

## 9.6 Writing Unit Tests for Services & Controllers in NestJS

Goal: Learn how to write unit tests for NestJS services and controllers using Jest.

### **_Why is it important to test services separately from controllers?_**

As mentioned before, services handle the business logic and controllers handle the routing logic. Testing them separately would help identify errors before integration, allowing developers to pinpoint where the errors are and fix them, ensuring minimal code changes upon integration testing.

### **_How does mocking dependencies improve unit testing?_**

Mocking dependencies would allow the testing time to reduce, as real dependencies such as databases and queues would take time to respond. Replacing these dependencies with a fake version would allow the developer to create deterministic results and isolates errors inherent to the services but not the controllers, and vice-versa.

### **_What are common pitfalls when writing unit tests in NestJS?_**

A common pitfall in writing unit tests for me is forgetting to mock all necessary dependencies. I came to problem where I found the redis running just because I didn't mock one of the queues. This would make all the dependencies run in the background and make the testing dependent on the device's environment. Other pitfalls include forgetting to clean the testing module, forgetting to await asynchronous functions, and over-mocking.

### **_How can you ensure that unit tests cover all edge cases?_**

What I usually do is to identify first all the scenarios where everything works as expected. The hard part is identifying the error cases, and this entails identifying the errors from lacking dependencies, errors from values exceeding or below the stated limits, and errors when the data received is unexpected, missing, or undefined.

### **_Documentation:_**

- [Unit Testing UserService Setup](assets/unit-tests-1-service-spec-code.md)
- [Unit Testing UserService Results](assets/unit-tests-2-service-test-results.png)
- [Unit Testing UserController Setup](assets/unit-tests-3-controller-spec-code.png)
- [Unit Testing UserController Results](assets/unit-tests-4-controller-test-results.png)
