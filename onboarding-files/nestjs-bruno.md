# Milestone 10 | Debugging

## 10.2 API Debugging with Bruno

Goal: Learn how to use Bruno for testing and debugging API requests in a NestJS application.

### **_How does Bruno help with API testing compared to Postman or cURL?_**

Based on personal experience, you can have multiple requests in both Bruno and Postman, but Bruno has the option to add in requests or edit requests while Postman nests these request in a singular search bar. Bruno is substantially better because it stores every single request as separate plant-text files in my device. This is perfect for API testing.

cURL is more of a command-line tool which will tend to confuse developers when the command becomes longer. Bruno circumvents that through its clean visual interface.

### **_How do you send an authenticated request in Bruno?_**

Bruno has a dedicated tab just like Postman, allowing to select a required Authentication Protocol (in this case a Bearer Token), injecting a secure Auth Header into the HTTP request. This then allows Bruno to access authenticated requests.

### **_What are the advantages of organizing API requests in collections?_**

Collections allows to define environment variables, thereby allowing switching to different environments whenever necessary. Additionally, it allows for integration testing by running a certain collection sequentially using the Bruno CLI.

### **_How would you structure a Bruno collection for a NestJS backend project?_**

I would structure the collection in the same way I would structure the NestJS project. All Auth functions in a folder, all user functions in another folder, and more, thus allowing categorization of requests for easy tracking and access.

### **_Documentation_**

For now, i have separately stored this test collection in the main 'Bruno' folder. Below

- [Get a Single User:](assets/bruno-1-get-single-user.png) This is how Bruno recognizes a normal API requests.
- [Get Multiple Users(Admin Only):](assets/bruno-2-get-all-users-admin-only.png) This is how Bruno recognizes authenticated requests.
- [Header Set-up:](assets/bruno-3-get-token-header-setup.png) This is how to set-up headers for a request. In this example, I am setting up a POST request for accessing a token. I purposefully cropped out the token results for privacy reasons.
