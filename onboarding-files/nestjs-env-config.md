# Milestone 8 | Building APIs & Handling Data

## 8.1 Role-Based Authorization (RBAC) in NestJS

### **_How does `@nestjs/config` help manage environment variables?_**

The package centralizes the values through the `ConfigModule` module, loading the `.env` file. It makes the values available across the application, create namespaces and factory functions, while still adhering to NestJS's dependency injection.

### **_Why should secrets (e.g., API keys, database passwords) never be stored in source code?_**

Secrets are what makes the application run, and storing them in the source code would allow developers access to these secrets, risking security and vulnerability of the application.

### **_How can you validate environment variables before the app starts?_**

Through the class-transformer or class-validator services, as it helps validating whether such variables exist in the `.env` file.

### **_How can you separate configuration for different environments (e.g., local vs. production)?_**

Through creating various environment files for any type of environment (development, production, testing, etc.), as `ConfigModule` is responsible for dynamically loading these files.
