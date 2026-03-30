# Milestone 10 | Debugging

## 10.4 Inspecting API Requests & Responses

### **_How can logging request payloads help with debugging?_**

Logging request payloads help in debugging through eliminating guesswork in passing and receiving data between the client and the server. Logging the payload would allow developers to see exactly what data is being sent and differentiating between actual server errors and bad client inputs.

### **_What tools can you use to inspect API requests and responses?_**

There are several, and i have used three: Bruno, Postman and cURL. cURL utilizes the terminal of the application, perfect for quick, writable requests to the server. Postman is a cloud-based platform but is reliant on bulky JSON Files. Bruno offers the fastest out of the three, as it is local and allows developers to save requests as plaintext.

### **_How would you debug an issue where an API returns the wrong status code?_**

Placing a breakpoint would allow developers to see the request's lifecycle as it passes through the server step-by-step. Tracing through how the data flows would enable them to know exactly what caused the status code output to be wrong.

### **_What are some security concerns when logging request data?_**

If not managed properly, logging request data may accidentally log plaintext authentication and personal secrets. Therefore, utilizing middleware and interceptors in a NestJS application would redact these secrets from any log display.

### **_Documentation_**

- [Logging Setup and Results:](assets/api-logging.png) I have already established a global logger middleware and a logger interceptor. Added in this code is the logging of requests in the NestJS Controller. Middleware results start with a header 'HTTP_GATEWAY', interceptor results with 'HTTP' and the controller logging and debugging start with 'LOG' and 'DEBUG' respectively.
