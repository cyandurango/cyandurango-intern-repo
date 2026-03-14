# Milestone 9 | Writing Meaningful Automated Tests

## 9.5 Introduction to Testing in NestJS

Goal: Understand the different types of testing in NestJS and how they ensure application stability.

### **_What are the key differences between unit, integration, and E2E tests?_**

Unit testing refers to testing a single file in itself, mocking connections to ease dependency.

Integration Testing tests the connectivity between two or more components of the application.

E2E (End-to-End Testing) refers to the actual testing of the application, using real test cases from actual packet responses.

### **_Why is testing important for a NestJS backend?_**

For three main reasons: safety, security, and documentation. Tests catch component connectivity bugs and errors beforehand, allowing developers to fix them and retest before implementing them into the codebase. Data should also be strictly guarded by the back-end components, hence testing ensures that these guards work well against any security attacks and threats. Documentation allows new developers to see what a certain function does, explaining its inputs and its outputs.

### **_How does NestJS use @nestjs/testing to simplify testing?_**

Due to dependency injection, testing manually would require installing all dependencies of these components. But with `@nestjs.testing`, it contains the `Test.createTestingModule` that generates a fake NestJS environment, allowing for safe testing of components without the need to connect them into the main environment. It also provides overrides to the providers and guards.

### **_What are the challenges of writing tests for a NestJS application?_**

Mocking dependencies especially when services depends on other providers, database management through spinning up mock databases for testing, and writing execution contexts for writing the context of test cases. Most importantly, it is finding all test cases. Test cases are essential for writing tests, as it requires the developer to know which inputs are allowed and what outputs are expected.
