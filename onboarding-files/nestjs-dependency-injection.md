# Milestone 6 | NestJS Basics & Setup

## 6.3 Understanding Modules, Controllers, and Providers in NestJS

### **_How does dependency injection improve maintainability?_**

It improves maintainability through decoupling application components rather than hardcoding the dependencies. It is a framework that allows for, easier testing, reusability, and centralized configuration.

### **_What is the purpose of the `@Injectable()` decorator?_**

The decorator aims to understand the dependencies of a certain class and resolve them upon instantiation.

### **_What are the different types of provider scopes, and when would you use each?_**

- SINGLETON: the default behavior where only a single instance of a provider is created once the application is started. This is used in almost everything due to its memory efficiency

- REQUEST: for every HTTP request, a new instance of a provider is created. It holds a state relevant only to a certain process life-cycle and is thrown and destroyed once a response is met.

- TRANSIENT: A new instance is created every time the provider is injected into another component. This is used for lightweight, stateful services, avoiding a mutating shared state.

### **_How does NestJS automatically resolve dependencies?_**

NestJS, through its own IoC container, combined with Typescript's reflection capabilities, it does the following:

1. It scans the modules and registers all classes listed in the providers array as the application is instantiated. They are then placed in a registry
2. It identifies the tokens to look for by looking at the constructor parameters of the controllers and services used by the modules.
3. The IoC container searches the said registry for a provider that matches the providers in the modules
4. The same IoC container searches through the registry for associated dependencies of the provider, and instantiates the provider with the dependencies before injecting it into the controller.
