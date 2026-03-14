# Milestone 9 | Writing Meaningful Automated Tests

## 9.2 Mocking API Calls in Jest

Goal: Learn how to mock API calls in Jest to test asynchronous code.

### **_Why is it important to mock API calls in tests?_**

Mocking API calls in tests would allow developers to test only the component and not the entire internet. This ensures no false negatives, allows for quick testing, simulates error cases, and identifies rate limits.

### **_What are some common pitfalls when testing asynchronous code?_**

False positives due to the lack of the `await`, testing the wrong UI state coming from asynchronous DOM updates, leaky testing due to lengthy time resolution, and real-time waiting due to a `setTimeout` setting.

See results of the test through this link: [Testing Mock API Calls](assets/mock-api-call-test.md)

## 9.4 Introduction to Unit Testing with Jest

Goal: Learn the basics of unit testing in React using Jest.

### **_Why is automated testing important in software development?_**

automated testing allows to test a singular utility function before integrating it into the main codebase. It acts as a documentation log to explain the inputs and the errors the function can handle.

### **_What did you find challenging when writing your first Jest test?_**

Finding out the testing parameters and test cases proved to be hard as it takes time to understand the function and its capabilities and in identifying loopholes in the data that it accepts.

See results of Unit Testing via Jest here: [Jest Unit Testing](assets/unit-testing-jest.md)
