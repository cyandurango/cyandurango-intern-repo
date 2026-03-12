# Milestone 7 | Building APIs & Handling Data

## 7.1 Creating REST APIs with NestJS

Goal: Learn how to build RESTful APIs using NestJS controllers and services.

### **_What is the role of a controller in NestJS?_**

The controller essentially controls incoming HTTP request. In this case, the CRUD requests. They listen for a specific route, extract data from the request, hand that data to the service side, and receive the reply from the service side.

### **_How should business logic be separated from the controller?_**

Controllers are the ones that manage the application, from waiting for a request from a client and passing that request to the service layer, to giving the reply from the service to the said client.

### **_Why is it important to use services instead of handling logic inside controllers?_**

Services are TypeScript classes that can be passed through any module under the providers array. This essentially makes the service reusable throughout any module, allows for singular testing, and is easy to map-out the errors and bugs because of its modularity.

### **_How does NestJS automatically map request methods (GET, POST, etc.) to handlers?_**

NestJS combines the use of decorators and reflection, scanning the framework throughout all classes to register the controller base route and scans the methods inside it. The application automatically extracts and binds the metadata into the HTTP server, dynamically completing an internal routing map.
