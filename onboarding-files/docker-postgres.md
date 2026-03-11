# Milestone 5 | Docker & Local Development Setup

## 5.3 Running PostgreSQL in Docker

Goal: Set up and run a PostgreSQL database in Docker for local development.

### **_What are the benefits of running PostgreSQL in a Docker container?_**

What I believe to be the main benefit is the isolation, since there is no need to install PostgreSQL directly on my device. A fully functional database is immediately accessed.

### **_How do Docker volumes help persist PostgreSQL data?_**

Docker volumes map a location inside my device that whenever the container gets destroyed, the data will be readily available.

### **_How can you connect to a running PostgreSQL container?_**

I run the command `docker exec -it <container-name> psql -U <username> -d <postgres-db>` as it is already packaged within the docker. Therefore, I can access the tables from PostgreSQL through this command.
