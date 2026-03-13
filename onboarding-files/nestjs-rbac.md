# Milestone 8 | Building APIs & Handling Data

## 8.1 Role-Based Authorization (RBAC) in NestJS

Goal: Learn how to implement role-based access control (RBAC) in NestJS using Auth0.

### **_How does Auth0 store and manage user roles?_**

Auth0 sells a model called 'Identity-as-a-Service', managing roles in its own cloud database. Developers define the permissions of certain roles, and these roles are assigned directly to the the user's profile.

### **_What is the purpose of a guard in NestJS?_**

Guards act as a bouncer that does authorization checks after the middleware but before the interceptors and pipes. They can read custom metadata unlike middleware.

### **_How would you restrict access to an API endpoint based on user roles?_**

Utilizing an enum class to define roles and creating custom decorators for each role and reflector utility to compare. If it returns true, access is granted, and denied otherwise.

### **_What are the security risks of improper authorization, and how can they be mitigated?_**

Improper authorization leads to broken access control which can be mitigated through checking userIDs via token, denying all routes by default, whitelisting unauthorized fields, and utilizing short-lived access tokens.
