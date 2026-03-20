# Milestone 7 | Building APIs & Handling Data

## 7.4 Connecting to PostgreSQL with TypeORM in NestJS

### **_How does `@nestjs/typeorm` simplify database interactions?_**

The `@nestjs/typeorm` package is primarily responsible for connecting the NestJS framework and the TypeORM, acting as a bridge to manage the database through Typescript classes and decorators.

By integrating the `TypeOrmModule` in the `AppModule`, it will automatically setup the database through a configuration:

- [Setting up `TypeOrmModule` in the AppModule](assets/typeorm-config.png)
- [Database Container Output Logs for Verifying Database Connectivity](assets/typeorm-db-logs.png)
- [API Container Output Logs for Verifying Database Connectivity](assets/typeorm-nestjs-logs.png)

### **_What is the difference between an entity and a repository in TypeORM?_**

Entities are blueprints for what a single row represents, defining the structure of data in a database. To access and manage these entities, repositories are used.

I set up an [entity for a user using `@Entity`](assets/typeorm-entity.png) and modified the controller and service files of the user to handle the entity through a [repository for the User Entity](assets/typeorm-repository.png).

Through this, NestJS and PostgreSQL can pass through data as seen in this [output logs](assets/typeorm-output-logs.png). It can be seen that the NestJS logs would also include in _SQL query lines_, therefore automating the need to commit data into the database. The output is also reflected into the database with the help of [TablePlus](assets/typeorm-tableplus.png).

### **_How does TypeORM handle migrations in a NestJS project?_**

TypeOrm uses migration files that serve as timestamped instructions for the database, responsible for versioning and keeping track of how the database evolves. Through migration, columns can be renamed safely without the risk of column data deletion.

Currently, this NestJS project uses synchronization, which forces the database to match the TypeScript entities automatically. While convenient for development, migrations are the professional standard for maintaining data integrity in production.

### **_What are the advantages of using PostgreSQL over other databases in a NestJS app?_**

PostgreSQL is compatible with modern back-end architectures (such as NestJS) due to its strict adherence to SQL standards and robust feature set. Unstructured data can be stored through its JSONB support, allowing TypeORM to map these columns into Typescript objects and/or interfaces. It can handle complex relationships that adhere to NestJS's TypeSafety feature. It also allow multiple users to read and write to the database simultaneously. Due to it being open-source, it is widely used together with TypeORM and Docker.
