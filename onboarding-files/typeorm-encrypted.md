# Milestone 8 | Building APIs & Handling Data

## 8.5 Using typeorm-encrypted for Data Encryption

Goal: Learn how to encrypt sensitive data in PostgreSQL using typeorm-encrypted, adding an extra layer of security on top of database encryption at rest.

### **_Why does Focus Bear double encrypt sensitive data instead of relying on database encryption alone?_**

Database encryption encrypts data locally, but whenever the database is running, anyone can query the data and see it as a plaintext. Application-level encryption adds another encrypted layer to the data, encrypting values before leaving the server.

### **_How does typeorm-encrypted integrate with TypeORM entities?_**

`typeorm-encrypted` utilizes transformers that intercept data before going in and out of the database.

### **_What are the best practices for securely managing encryption keys?_**

Using a key management service, implementing key rotations, or separating environments are helpful in securely managing encryption keys. This ensures that local development keys stay separate from production keys that are only accessible by production servers and senior developers.

### **_What are the trade-offs between encrypting at the database level vs. the application level?_**

Database-level encryptions do not change the nestjs code, allows for full searchability, with optimized performance. However, there is a limit to the threat they can protect as they are vulnerable to SQL injections.

Application-level encryptions provide maximum security, choosing specific data to be encrypted, and separates the duties of the database and the application. However, the application cannot search optimally, may consume the CPU, and introduces risks to key management.
