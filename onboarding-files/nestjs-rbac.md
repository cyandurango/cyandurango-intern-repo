# Milestone 8 | Building APIs & Handling Data

## 8.1 Role-Based Authorization (RBAC) in NestJS

Goal: Learn how to implement role-based access control (RBAC) in NestJS using Auth0.

### **_How does Auth0 store and manage user roles?_**

Auth0 operates as an Identity-as-a-Service (IDaaS) platform, managing user roles within its own cloud database. Developers define specific permissions, group them into roles, and assign those roles directly to user profiles. Furthermore, Auth0 features built-in Role-Based Access Control (RBAC), which automatically injects these role permissions into the user's JWT (Access Token) during login, allowing backend APIs to easily verify authorization.

### **_What is the purpose of a guard in NestJS?_**

Guards act as a bouncer that does authorization checks after the middleware but before the interceptors and pipes. They can read custom metadata unlike middleware.

Through using `AuthGuard`, and the setup for implementing Auth0 into the NestJS back-end, I assigned the Get-All function to be only accessed through an admin for testing:

- [AuthModule and JWT Strategy Setup](assets/rbac-1-setup.png)
- [Get-All Function User Access](assets/rbac-2-user.png)
- [Get-All Function Admin Access](assets/rbac-3-admin.png)

### **_How would you restrict access to an API endpoint based on user roles?_**

Using RBAC and NestJS, we can use an authentication guard, access user context and read through its permissions array in Auth0, and handle exceptions if permission is missing.

I made a code to check the roles named `getRoles`. Within the code, I had it check for a specific permission in the permissions array. I intentionally renamed the permissions in the controller to show the error. As expected, Postman replied with a 403 Forbidden Error (see the [Permissions Enforcement Test](assets/rbac-4-permissions-enforcement.png) results).

### **_What are the security risks of improper authorization, and how can they be mitigated?_**

Improper authorization leads to broken access control which can be mitigated through checking userIDs via token, denying all routes by default, whitelisting unauthorized fields, and utilizing short-lived access tokens. Additionally, shifting to permission-based access rather than role-based access will ensure users to use what they need, enforcing authentication further.
