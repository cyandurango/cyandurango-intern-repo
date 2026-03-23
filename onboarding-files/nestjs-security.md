# Milestone 8 | Building APIs & Handling Data

## 8.4 Security Best Practices in NestJS

Goal: Learn and apply security best practices to protect NestJS applications from common vulnerabilities.

### **_What are the most common security vulnerabilities in a NestJS backend?_**

In a NestJS back-end, the most common vulnerabilities are: Broken Access Control (where unauthorized users can access authorized endpoints), Injection Attacks (sending of malicious database commands), Cross-Site Scripting (injected malicious scripts served into other user's browsers), and CORS Misconfigurations (allowing all origins).

### **_How does `@fastify/helmet` improve application security?_**

`@fastify/helmet` hides information from HTTP headers by hiding server identity against targeted exploits, prevents click-jacking by stopping `iframe` embeds from malicious sites, and browser resource restriction:

- [Results of implementing `helmet`](assets/fastify-1-helmet.png)

### **_Why is rate limiting important for preventing abuse?_**

Rate limiting prevents brute force attacks, mitigates DDoS attacks, and ensures economic protection of the API.

- [Packet Flooding Command:](assets/fastify-2-ratelimit-command.png) the command loops through the get-function 105 times.
- [Rate limit Timeout:](assets/fastify-3-ratelimit-results.png) the result comprises of three packets, the 99th, 100th, and 101st. As seen in the 101st, a `429 ERROR` is instead outputted rather than a `200 OK`.

### **_How can sensitive configuration values be protected in a production environment?_**

Secrets are handled outside of the application code entirely, utilizing cloud secret managers, runtime injection, and startup validation. Pino is also helpful in redacting important header values from being displayed in the docker-terminal logs. Additionally, I've already implemented startup validation through Joi.

- [Before Pino Redaction](assets/redact-1-before.png)
- [Pino Redaction Code](assets/redact-2-code.png)
- [Pino Redaction Results](assets/redact-3-results.png)

These are just some examples to protect configuration values in a production environment.
