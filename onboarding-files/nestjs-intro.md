# Milestone 6 | NestJS Basics & Setup

## 6.1 What is NestJS? (Framework Overview)

Goal: Understand the NestJS framework, how it differs from Express.js, and why it is used in backend development.

### **_What are the key differences between NestJS and Express.js?_**

NestJS forces a specific structure, built around TypeScript, automatically generates controllers, services, and modules, and is best for large-scale enterprise- or company-level applications utilizing complex APIs.

### **_Why does NestJS use decorators extensively?_**

The extensive use of decorators such as the '@' symbol attach hidden data to the classes and functions, separates routing logic from the business logic, and improves readability because the decorators already define its role.

### **_How does NestJS handle dependency injection?_**

Databases in ExpressJS need to be manually instantiated, whereas in NestJS automatically instantiates them through an Inversion of Control container.

### **_What benefits does modular architecture provide in a large-scale app?_**

In a large-scale backend application such as Focus Bear, the codes are grouped into modules that encapsulates its own controllers and services. Spaghetti codes get prevented, merge conflicts get minimized, modules are called only when needed.
