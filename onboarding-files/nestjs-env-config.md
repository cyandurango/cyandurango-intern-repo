# Milestone 8 | Building APIs & Handling Data

## 8.1 Role-Based Authorization (RBAC) in NestJS

### **_How does `@nestjs/config` help manage environment variables?_**

The package centralizes the values through the `ConfigModule` module, loading the `.env` file. It makes the variables and its values accessible across the application, create namespaces and factory functions, while still adhering to NestJS's dependency injection.

### **_Why should secrets (e.g., API keys, database passwords) never be stored in source code?_**

Secrets are what makes the application run, and storing them in the source code would allow other developers access to these secrets. Hardcoded secrets pose certain vulnerability risks, such as visibility through version control history, difficulty in migrating between app development phases (development, production, testing), and constant redeployment and rewrites should a secret be compromised.

### **_How can you validate environment variables before the app starts?_**

Through a package called `Joi`, it checks the validity of environment variables needed by the application against the `.env` file. I have placed a `.env` file and modified the rest of the code so that it utilizes the environment variables. For easy checking, I renamed the environment variables in the ConfigModule with the `AUTH0` prefix into `AUTHO`. The resulting output through the logs is an error that states that `AUTHO_DOMAIN` and `AUTHO_AUDIENCE` is required:

- [False ConfigModule Setup](assets/env-1-false-setup.png)
- [Docker Logs Error Message](assets/env-2-error-logs.png)

### **_How can you separate configuration for different environments (e.g., local vs. production)?_**

Through creating various environment files for any type of environment (development, production, testing, etc.), as `ConfigModule` is responsible for dynamically loading these files by simply replacing the node environment name
