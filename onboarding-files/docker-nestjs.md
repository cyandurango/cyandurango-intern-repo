# Milestone 6 | NestJS Basics & Setup

## 6.6 Using Docker for NestJS Development

Goal: Learn how to containerize a NestJS application using Docker and run it alongside PostgreSQL.

### **_How does a Dockerfile define a containerized NestJS application?_**

A Dockerfile acts as a blueprint that allows Docker to guarantee an isolated environment for the NestJS application. This ensures the base environment, the context, dependencies, the building, and the execution.

### **_What is the purpose of a multi-stage build in Docker?_**

For optimization and security. Since NestJS applications are typically heavy to compile (due to the various packages needed), the `dist/` folder is responsible for compiling said code into

### **_How does Docker Compose simplify running multiple services together?_**

Docker Compose simplifies the connectivity between the NestJS API and the PostgreSQL database, defining the infrastructure into code that is configured once, networks automatically, and activates in a single-line command.

Previously, I had a Docker Compose YAML file to setup the database ([see previous version here](test-experiments/docker-compose.yaml)). I placed this and modified some of its values, as well as added the NestJS API setup to connect them both. The Nestjs application is identified through `api` and containerized as `nest_api` ([see modified version here](assets/docker-compose-w-nest.png)).

### **_How can you expose API logs and debug a running container?_**

Through the `docker logs` command lines. `docker logs <container-name>` exposes the logs of a certain container, `docker logs -f <api-name>` follows the logs in real-time, and `docker compose logs -f` shows the logs of the whole compose cluster.

Documentation:

- `docker compose logs` [terminal result:](assets/docker-w-nest-terminal.png) showcasing both the database and the api are running in the docker.
- NestJs-PostgreSQL Connectivity [code testing](assets/nest-postgre-1-code.png) showcasing how the connectivity between PostgreSQL and NestJS is established
- NestJS-PostgreSQL Connectivity [terminal results](assets/nest-postgres-2-terminal.png) showcasing confirmation regarding the connectivity between PostgreSQL and NestJS
