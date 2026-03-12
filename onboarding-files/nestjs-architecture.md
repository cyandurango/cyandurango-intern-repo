# Milestone 6 | NestJS Basics & Setup

## 6.3 Understanding Modules, Controllers, and Providers in NestJS

### **_What is the purpose of a module in NestJS?_**

modules are the fundamental building blocks of a NestJS application, as they organize its structure. Contained in a module are related code organized by a feature or domain, defining controllers and providers that only they use.

### **_How does a controller differ from a provider?_**

Controllers handle HTTP requests in the client side of the application, manage the logic of routing the data, and return a response to the client.

Providers are the services of the application, handling core business logic, database interaction, and API calling.

### **_Why is dependency injection useful in NestJS?_**

Dependency injection creates loosely coupled code, 'injecting' only required services to a certain controller.

### **_How does NestJS ensure modularity and separation of concerns?_**

Through its decorators, with modules defining the boundaries, controllers designed to handle the transport layer, and providers handling the application services. This forces developers to categorize their code into these layers, ensuring that components have a single responsibility while remaining independent and scalable.
