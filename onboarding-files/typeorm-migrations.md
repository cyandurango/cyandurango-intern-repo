# Milestone 7 | Building APIs & Handling Data

## 7.5 Seeding & Migrations in TypeORM

### **_What is the purpose of database migrations in TypeORM?_**

Database migrations allow for synchronization across different environments, knows what SQL will run, changes to the database gets reviewed, and every change gets recorded.

### **_How do migrations differ from seeding?_**

Migrations define the structure of the database, modifying the tables and its features. Seeding is what populates the database.

### **_Why is it important to version-control database schema changes?_**

Version controlling changes in a database, or any project for that matter, guarantees the same database structure on any developer's local device, ensures a specific codebase version is paired with said database, and maintains the evolution of the database via an audit or record.

### **_How can you roll back a migration if an issue occurs?_**

Through `npm run migration:revert`, it undoes the most recent database change.
