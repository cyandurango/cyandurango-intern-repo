# Milestone 7 | Building APIs & Handling Data

## 7.4 Connecting to PostgreSQL with TypeORM in NestJS

### **_How does @nestjs/typeorm simplify database interactions?_**

Through dependency injection. Nestjs keeps the database open. Database tables are injected to the specific modules that need them, keeping the apps modularity. Database rows become typescript class instances.

### **_What is the difference between an entity and a repository in TypeORM?_**

Entities are blueprints for what a single row looks like, whereas repositories are tools that access these entities

### **_How does TypeORM handle migrations in a NestJS project?_**

Currently through setting the synchronize value to true, changing the database every Typescript edit.

### **_What are the advantages of using PostgreSQL over other databases in a NestJS app?_**

It is great at handling complex relationships, well-handling of high concurrency, supports JSON queries, and is an open source code.
