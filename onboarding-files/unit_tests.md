# Milestone 9 | Writing Meaningful Automated Tests

## 9.2 Mocking API Calls in Jest

Goal: Learn how to mock API calls in Jest to test asynchronous code.

### **_Why is it important to mock API calls in tests?_**

Mocking API calls in tests would allow developers to test only the component and not the entire internet. This ensures no false negatives, allows for quick testing, simulates error cases, and identifies rate limits.

### **_What are some common pitfalls when testing asynchronous code?_**

False positives due to the lack of the `await`, testing the wrong UI state coming from asynchronous DOM updates, leaky testing due to lengthy time resolution, and real-time waiting due to a `setTimeout` setting.

See results of the test through this link: [Testing Mock API Calls](assets/mock-api-call-test.md)
