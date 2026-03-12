# Milestone 6 | NestJS Basics & Setup

## 6.5 Using NestJS CLI for Scaffolding

Goal: Learn how to use the NestJS CLI to scaffold different parts of the application such as controllers, services, and modules.

### **_How does the NestJS CLI help streamline development?_**

The CLI assists in creating all necessary files, writing the class, adding the decorators, and creating the test files just by typing in nest-related commands

### **_What is the purpose of `nest generate`?_**

`nest generate` creates an empty type (controller, provider, module, etc.) that acts as scaffolding. Once these types are generated, they are then injected to the nearest module's array of controllers, providers, or imports, depending on the type.

[See console log output here](assets/nestjs-commands.md).

### **_How does using the CLI ensure consistency across the codebase?_**

The CLI follows through with NestJS formatting and schematics, from file structures, naming conventions, and class structures. This makes the codebase highly predictable and maintainable

### **_What types of files and templates does the CLI create by default?_**

The component files and the spec files by default when generating the controller and service.
