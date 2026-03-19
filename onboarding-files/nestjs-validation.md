# Milestone 7 | Building APIs & Handling Data

## 7.2 Validating Requests with Pipes in NestJS

Goal: Understand how pipes work in NestJS and how to use them for data validation and transformation.

### **_What is the purpose of pipes in NestJS?_**

These pipes transform and validate data into the necessary values, converting the data into the desired format and validate it to ensure the inputted data ara correct.

`ParseIntPipe` parses through a string and checks whether the contained string only has integer numbers contained in it. if a string contains purely letters or a combination of alphanumeric glyphs would return an error, as seen in [this example](assets/parseint-application.png) where ids are created through positive integers.

`ValidationPipe` primarily checks incoming data to follow the rules defined in the application DTOs. It also handles typecasting values from one type to another.

### **_How does ValidationPipe improve API security and data integrity?_**

I added the `ValidationPipe` in the `main.ts` file. I enabled whitelisting that acts as an automated firewall/error check, without the need to write `throw Error()` lines inside the service methods. I also enabled `forbidNonWhitelisted` that stops the request and returns a bad request error for extra properties not found in any DTOs. `Transform` was also enabled to transform numerical strings to numbers should any DTO variable require a number.

I created the `app.module.spec.ts` to unit test the app module for the Validation Pipe. The [output terminal](assets/app-unit-test-validationpipe.png) printed a pass result, most notably in the second test where an error is returned for variables outside the user DTO.

### **_What is the difference between built-in and custom pipes?_**

Built-in pipes are preconfigured to handle standard needs in web development, from type coercion to validation and many more. Custom pipes are pipes specific and unique to the application logic itself that built-in pipes cannot do.

### **_How do decorators like @IsString() and @IsNumber() work with DTOs?_**

I have the `@IsString` decorator attached to the name. I added another variable called `age` to test for the `@IsNumber()` decorator (see [User DTO here](assets/nest-user-dto.png)). I also added a test case for each in the controller unit test to check its error should it fail (see [controller-dto unit test results here](assets/nest-dto-controller-test.png)).

`@IsString` and `@IsNumber` works by creating a DTO class with the roles integrating the mentioned decorators. I questioned its redundancy as typescript already knows the variable type to push. However, upon further inspection, these decorators ensure that the connected database will be filled with valid and appropriate data.
