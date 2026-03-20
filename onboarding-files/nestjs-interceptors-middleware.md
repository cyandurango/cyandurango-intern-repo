# Milestone 7 | Building APIs & Handling Data

## 7.3 Using Interceptors & Middleware in NestJS

### **_What is the difference between an interceptor and middleware in NestJS?_**

Middleware runs before the routing mechanism knows which controller/method handles the request.

Interceptors are native to NestJS that intercept responses. They have access to NestJS `ExecutionContext` that allows it to know which class and method it is called. Responses are transformed.

### **_When would you use an interceptor instead of middleware?_**

Interceptors for transforming responses, measure execution times, map exceptions, and override behavior. I created a `LoggingInterceptor` placed in `main.ts`. The terminal prints the http request and the server response (see [the code and response here](assets/logging-interceptor-w-res.png)).

Middleware for parsing raw JSON bodies, basic rate-limiting, basic request metrics, and adding headers. For this experiment, I created a global logger middleware, recording all incoming packets, accepted or otherwise. it can be seen that its message (named `HTTP_GATEWAY`) is always first, before the logger interceptor logs (see [the code and response here](assets/global-logger-results.png)).

### **_How does `LoggerErrorInterceptor` help?_**

The interceptor catches the error as it leaves, and it traces only the error message to inject into the logger. It ensures that the server logs also track invalid requests through this error logging interceptor (see [code and results here](assets/logger-error-result.png)). It can be seen that in the final three lines in red is the output result of implementing the `LoggerErrorInterceptor`.
