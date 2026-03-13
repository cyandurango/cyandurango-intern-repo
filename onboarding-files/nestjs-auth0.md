# Milestone 8 | Building APIs & Handling Data

## 8.5 Using typeorm-encrypted for Data Encryption

Goal: Learn how authentication works in NestJS using Auth0 and JWT.

### **_How does Auth0 handle authentication compared to traditional username/password auth?_**

Delegated Authentication removes the burden of crashing servers and breached databases through outsourcing the job of storing and verifying the passwords via Auth0.

### **_What is the role of JWT in API authentication?_**

Its primary role is to allow the API to remain stateless, information packed directly inside the token's payload.

### **_How do jwks-rsa and public/private key verification work in Auth0?_**

Through asymmetric cryptography where the public key is used for encryption and the private key for decryption.

### **_How would you protect an API route so that only authenticated users can access it?_**

Through the `UseGuards` decorator, the API route is being guarded from unauthorized users and allows only authorized users to access these specific routes.
