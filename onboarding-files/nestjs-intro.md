# Milestone 6 | NestJS Basics & Setup

## 6.1 What is NestJS? (Framework Overview)

Goal: Understand the NestJS framework, how it differs from Express.js, and why it is used in backend development.

### **_What are the key differences between NestJS and Express.js?_**

NestJS forces a specific structure, built around TypeScript, automatically generates controllers, services, and modules, and is best for large-scale enterprise- or company-level applications utilizing complex APIs.

ExpressJs, on the other hand, does not depend on a defined architecture when it comes to file handling and organization. The codebase is built around Javascript, and is flexible in terms of setting up the components. It still remains as the top in terms of serverless functions. This choice is essentially better for applications dealing with small APIs and micro-services.

### **_Why does NestJS use decorators extensively?_**

The extensive use of decorators such as the '@' symbol attach hidden data to the classes and functions, separates routing logic from the business logic, and improves readability because the decorators already define its role.

For example, in authenticating a user, Guard decorators via `@UseGuards(<guard-name>)` will be the one doing the checking, rather than a placing a block of code that handles the authentication logic.

They handle to 'boring' parts of the application, allowing developers to focus more on the app's actual processes and services.

### **_How does NestJS handle dependency injection?_**

NestJS automatically instantiates the components through an Inversion of Control container.

IoC containers are the brains of NestJS applications. It first reads though the AppModule and maps the modules, controllers, services, and other resources into it. Additionally, it also checks whether the already-mapped controllers needs other services-to map those services, and whether those services need other resources like databases.

Upon [instantiating a new NestJS Application](assets/nestjs-dep-inj.png), the IoC reads the AppModule and sees the AppController and AppService stored in the controllers and providers array respectively. As it sees that AppController needs AppService and that AppService is registered in the providers list, the AppService gets instantiated and injected into the AppController.

### **_What benefits does modular architecture provide in a large-scale app?_**

In a large-scale backend application such as Focus Bear, the codes are grouped into modules that encapsulates its own controllers and services. Spaghetti codes get prevented, merge conflicts get minimized, modules are called only when needed.

This is done by identifying the main domains of the application, and making them into modules (UserModule, AuthModule, etc.). Each handles a core application logic. In addition, when Module A utilizes functions from Module B, Module A must have Module B in its imports array and Module B must have that certain function/service in the exports array.

Because these modules live in separate directory trees, Team 1 (assigned to Module A) and Team 2 (assigned to Module B) can work simultaneously without any interference. All they have to do is place the necessary modules in the imports array and the services in the exports array for the two codebases to communicate with each other. Unit testing can also be done through a TestingModule that allows the team to mock dependencies of other modules rather than waiting for the updates of the other team.
