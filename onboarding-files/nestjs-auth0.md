# Milestone 8 | Building APIs & Handling Data

## 8.5 Using typeorm-encrypted for Data Encryption

Goal: Learn how authentication works in NestJS using Auth0 and JWT.

### **_How does Auth0 handle authentication compared to traditional username/password auth?_**

Delegated Authentication removes the burden of crashing servers and breached databases through outsourcing the job of storing and verifying the passwords via Auth0.

### **_What is the role of JWT in API authentication?_**

Its primary role is to allow the API to remain stateless, information packed directly inside the token's payload. i've already implemented this during the RBAC process, where I have set up a `jwt.strategy.ts` file.

- [The Setup](assets/rbac-1-setup.png)

### **_How do jwks-rsa and public/private key verification work in Auth0?_**

Through asymmetric cryptography where the public key is used for encryption and the private key for decryption. The NestJS app receives a token that allow it to download Auth0's public key. The API utilizes the public key to verify the signature, and once verified, the API knows that it is legit.

### **_How would you protect an API route so that only authenticated users can access it?_**

Through the `UseGuards` decorator, the API route is being guarded from unauthorized users and allows only authorized users to access these specific routes. We have the `AuthGuard` that ensures that the users is authorized. I also added a custom guard called `RequiredPermissions` guard that checks the permissions of the user and only allows users with said permission to continue.

- [Permissions Guard Setup](assets/auth0-1-setup.png)
- [Code Implementation:](assets/auth0-2-permission.png) I have also noticed the difference between a hardcoded exception error compared to using guards. In `getRoles`, the error logic is hardcoded in within the function. In `findAll`, the guard is placed outside of the function, separate of the logic.
