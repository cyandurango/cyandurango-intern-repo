# Milestone 8 | Building APIs & Handling Data

## 8.4 Security Best Practices in NestJS

Goal: Learn and apply security best practices to protect NestJS applications from common vulnerabilities.

### **_What are the most common security vulnerabilities in a NestJS backend?_**

In a NestJS back-end, the most common vulnerabilities are: Broken Access Control (where unauthorized users can access authorized endpoints), Injection Attacks (sending of malicious database commands), Cross-Site Scripting (injected malicious scripts served into other user's browsers), and CORS Misconfigurations (allowing all origins).

### **_How does `@fastify/helmet` improve application security?_**

`@fastify/helmet` hides information from HTTP headers by hiding server identity against targeted exploits, prevents click-jacking by stopping `iframe` embeds from malicious sites, and browser resource restriction

### **_Why is rate limiting important for preventing abuse?_**

Rate limiting prevents brute force attacks, mitigates DDoS attacks, and ensures economic protection of the API.

### **_How can sensitive configuration values be protected in a production environment?_**

Secrets are handled outside of the application code entirely, utilizing cloud secret managers, runtime injection, and startup validation.
