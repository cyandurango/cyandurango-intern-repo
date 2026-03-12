# Milestone 7 | Building APIs & Handling Data

## 7.3 Using Interceptors & Middleware in NestJS

### **_What is the difference between an interceptor and middleware in NestJS?_**

Middleware runs before the routing mechanism knows which controller/method handles the request.

Interceptors are native to NestJS, and therefore have access to NestJS `ExecutionContext` that allows it to know which class and method it is called.

### **_When would you use an interceptor instead of middleware?_**

Interceptors for transforming responses, measure execution times, map exceptions, and override behavior.

Middleware for parsing raw JSON bodies, basic rate-limiting, basic request metrics, and adding headers

### **_How does `LoggerErrorInterceptor` help?_**

The interceptor catches the error as it leaves, and it traces only the error message to inject into the logger. It ensures that the server logs only see the said error message.
