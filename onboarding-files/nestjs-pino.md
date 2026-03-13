# Milestone 8 | Building APIs & Handling Data

## 8.3 Logging & Error Handling in NestJS

### **_What are the benefits of using nestjs-pino for logging?_**

`pino` is the industry standard, known for its minimal cpu impact of logging errors, outputting machine-readable logs that allows developers to track and search these logs through its fields.

### **_How does global exception handling improve API consistency?_**

This ensures that every error response follows the same format throughout the application, centralizing error logic and catches internal errors.

### **_What is the difference between a logging interceptor and an exception filter?_**

Logging interceptors runs on every request, logs success paths, and wraps the data stream. exception filters run during unhandled exceptions, formats error paths, and serves as the application's last line of defense.

### **_How can logs be structured to provide useful debugging information?_**

These logs must have an id, the context, the metadata, stack traces, and environment info. These information should be able to help developers in the debugging stage.
