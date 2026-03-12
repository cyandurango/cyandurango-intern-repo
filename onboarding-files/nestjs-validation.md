# Milestone 7 | Building APIs & Handling Data

## 7.2 Validating Requests with Pipes in NestJS

Goal: Understand how pipes work in NestJS and how to use them for data validation and transformation.

### **_What is the purpose of pipes in NestJS?_**

These pipes transform and validate data into the necessary, converting the data into the desired format and validate it to ensure the inputted data ara correct.

### **_How does ValidationPipe improve API security and data integrity?_**

It acts as an automated firewall/error check, without the need to write `throw Error()` lines inside the service methods. With the addition of whitelisting, the pipe strips incoming properties undefined by the DTO.

### **_What is the difference between built-in and custom pipes?_**

Built-in pipes are preconfigured to handle standard needs in web development, from type coercion to validation and many more.

### **_How do decorators like @IsString() and @IsNumber() work with DTOs?_**

`@IsString` and `@IsNumber` works by creating a DTO class with the roles integrating the mentioned decorators. If a rule fails, then the decorator automates the appropriate formatted error response.
