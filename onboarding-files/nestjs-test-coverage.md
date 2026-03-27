# Milestone 9 | Writing Meaningful Automated Tests

## 9.10 Understanding the Focus Bear Coverage Bar & Writing Meaningful Tests

Goal: Learn how to measure and improve test coverage in Focus Bear’s NestJS backend using the coverage bar while ensuring tests have meaningful assertions.

### **_What does the coverage bar track, and why is it important?_**

The coverage bar tracks what executable lines of code from the project files have been tested, and provides data through percentage on the executed lines. The statistical categories displayed are the statements, branches, functions, and lines that corresponding to these categories.

### **_Why does Focus Bear enforce a minimum test coverage threshold?_**

The threshold acts as a quality assurance test, ensuring that the additional features have been tested, improves team discipline with regards to implementing the codebase, and forces developers to write modular, decoupled, and injectable components

### **_How can high test coverage still lead to untested functionality?_**

Coverage measures execution, therefore a 100% coverage means the all executable code works logically. This also means that it relies on what the code is actually doing. If the code under testing does not have any error handling in place, the test coverage does not see that. Errors for this code is untested, and therefore would not be covered.

### **_What are examples of weak vs. strong test assertions?_**

Weak assertions give a false sense of security, mainly proving that the function didn't crash during testing, Examples include `expect(result).toBeDefined()` or `expect(service.doSomething).tobeTruthy()`. No useful information is being passed through these type of assertions

Strong assertions validate the shape and content of the output, ensuring that the coding logic behaves as intended. Examples include utilizing `expect(result).toEqual({<data>})` or `expect(repository.save).tohaveBeenCalledWith(expect.objectContaining({<data>}))`. Information is being passed through the 'expect' statements, relaying useful information during testing.

### **_How can you balance increasing coverage with writing effective tests?_**

Balancing increasing coverage and writing effective tests would include focusing on strong assertions where conditional logic is present, mock tests must reflect real world behavior, and refactor code into smaller testable functions for testability. But what I think is to include error handling in the code and adding tests that handle such errors.

### **_Documentation_**

- [`npm run test:cov` before adding and refactoring tests](assets/test-cov-1-before.png)
- [`npm run test:cov` after adding and refactoring tests](assets/test-cov-2-after.png)
- [Weak Test Assertion Example](assets/test-cov-3-weak.png)
- [Refactored Strong Test Assertion](assets/test-cov-4-strong.png)
