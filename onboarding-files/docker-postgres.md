# Milestone 5 | Docker & Local Development Setup

## 5.3 Running PostgreSQL in Docker

Goal: Set up and run a PostgreSQL database in Docker for local development.

### **_What are the benefits of running PostgreSQL in a Docker container?_**

What I believe to be the main benefit is the isolation, since there is no need to install PostgreSQL directly on my device. A fully functional database is immediately accessed via a [Docker-Compose YAML file](test-experiments/docker-compose.yaml).

### **_How do Docker volumes help persist PostgreSQL data?_**

Docker volumes map a location inside my device that whenever the container gets destroyed, the data will be readily available.

I did the following experiment:

- [Table Setup:](assets/docker-persistence-1-setup.png) I entered SQL through the container, placed in a test table to check for its data persistence, then deleted the container from the docker itself.
- [Persistence Verification:](assets/docker-persistence-2-verification.png) I rebuilt the same container and ran a `SELECT*FROM test` in the terminal. As expected, the same table is seen. This is because the docker-compose yaml points to where the volume is stored.

### **_How can you connect to a running PostgreSQL container?_**

I run the command `docker exec -it <container-name> psql -U <username> -d <postgres-db>` as it is already packaged within the docker. Through the command, I can enter the database ([see results here](assets/docker-psql-command.png)). As i haven't installed PostgreSQL in my editor, this feature will allow me to make SQL edits in my terminal without its installation.
