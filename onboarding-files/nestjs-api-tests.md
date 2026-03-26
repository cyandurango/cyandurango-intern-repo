# Milestone 9 | Writing Meaningful Automated Tests

## 9.8 Using Jest & Supertest for API Testing in NestJS

Goal: Learn how to write integration tests for API endpoints using Jest and Supertest.

### **_How does Supertest help test API endpoints?_**

Supertest acts as a virtual HTTP client; or as I like to call it, a mock HTTP server from NestJS. It provides readable syntax for requests, simplifies outcome checking, and ends once the test environment is run.

### **_What is the difference between unit tests and API tests?_**

Unit testing mainly tests a single component of the software where as API integration Testing checks for the entire process. Integration tests utilize real dependencies compared to Unit testing, and ensures that the injected pipes, guards, interceptors, and middleware work closely with the controller and service. It is expected, however, that this testing would be slower compared to unit testing because of the actual dependencies being connected.

### **_Why should authentication be mocked in integration tests?_**

Mocking the authentication side would skip the validation and verification process entirely, ensuring that the function returns the expected end result of the entire process. It also contributes to faster speed as authenticating users would entail cryptography and OIDC look-ups that inherently take time.

### **_How can you structure API tests to cover both success and failure cases?_**

The test should be grouped by endpoint (all tests for POST in one `describe` code block, all tests for GET in another `describe` code block, etc.). Then, each should start with all the success cases, followed by all the failure cases.

### **_Documentation_**

- [Integration Testing Code Setup:](assets/integration-1-code.md) the code includes two tests for the GET api (one without authentication and the other with a mocked authentication process) and two tests for POST (a test for an expected result and another for an error result)
- [Test Results:](assets/integration-2-results.png) This code tells us that all four tests succeeded without error.
