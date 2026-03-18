# Milestone 6 | NestJS Basics & Setup

## 6.3 Understanding Modules, Controllers, and Providers in NestJS

### **_What is the purpose of a module in NestJS?_**

Modules are the fundamental building blocks of a NestJS application, as they organize its structure. Contained in a module are related code organized by a feature or domain, defining controllers and providers that only they use.

Through the commands `nest g mo <class-name>`, `nest g co <class-name>`, and `nest g c <class-name>`, it would create the module, controller, and service for the class. For this experiment, I created the user module, controller, and service:

- [Terminal Commands and Results](assets/nest-user-1-terminal.png)
- [Folder Structure](assets/nest-user-2-structure.png)

### **_How does a controller differ from a provider?_**

Controllers handle HTTP requests in the client side of the application, manage the logic of routing the data, and return a response to the client. They are usually defined via the `@Controller('<name>')` decorator.

Providers are the services of the application, handling core business logic, database interaction, and API calling. They are usually defined via the `@Injectable('<name>')` decorator.

### **_Why is dependency injection useful in NestJS?_**

Dependency injection creates loosely coupled code, 'injecting' only required services to a certain controller. This functionality is what enables for unit testing via `spec.ts` files.

I tested the user controller [user.controller.spec.ts file](assets/user-controller-test.png) by utilizing a mock user service containing fake data, which is possible through Dependency Injection. Inside the `beforeEach` code block, the provider to be used is the `UserService`. However, the values being recognized is through a mock object called `mockUserService`. Since these values are hardcoded, testing is isolated from the main service.

### **_How does NestJS ensure modularity and separation of concerns?_**

Through its decorators, with modules defining the boundaries, controllers designed to handle the transport layer, and providers handling the application services. Combined through encapsulating modules with each other, the code maintains its neat organization.

This feature forces developers to categorize their code into these layers, ensuring that components have a single responsibility while remaining independent and scalable. Since providers are private by default, only services in the exports section of the module can be used by other modules of the application. This makes sure that the logic of Module A stays in Module A unless Module A allows the service to be used.
