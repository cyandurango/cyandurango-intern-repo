# Milestone 6 | NestJS Basics & Setup

## 6.2 Setting Up a NestJS Project

Goal: Set up a NestJS development environment, understand its project structure, and run a basic application.

### **_What files are included in a default NestJS project?_**

The main files added in a default NestJS project is the following: `main.tsm, app.service.ts, app.module.ts, app.controller.ts, and app.controller.spec.ts`

### **_How does main.ts bootstrap a NestJS application?_**

Through an asynchronous function called `bootstrap()` that waits for NestJS to create the app module and listens for the port. Through this, the app module gets triggered recursively that resolves all dependencies.

### **_What is the role of AppModule in the project?_**

AppModule is the starting point to building the application, responsible for consolidating all of the components of the same application together. These components include the controllers (APIs), providers (application services), and imports (other feature modules).

### **_How does NestJS structure help with scalability?_**

NestJS is designed with the following advantages in mind:

- modules are domain-specific by design;
- components are loosely coupled, allowing for swap implementations;
- concerns between routing logic and business logic are separated; and
- easier to transition into a microservice architecture
