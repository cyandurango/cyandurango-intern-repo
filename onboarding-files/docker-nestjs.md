# Milestone 6 | NestJS Basics & Setup

## 6.6 Using Docker for NestJS Development

Goal: Learn how to containerize a NestJS application using Docker and run it alongside PostgreSQL.

### **_How does a Dockerfile define a containerized NestJS application?_**

A Dockerfile acts as a blueprint that allows Docker to guarantee an isolated environment for the NestJS application. This ensures the base environment, the context, dependencies, the building, and the execution.

### **_What is the purpose of a multi-stage build in Docker?_**

For optimization and security. Since NestJS applications are typically heavy to compile (due to the various packages needed), the `dist/` folder is responsible for compiling said code into

### **_How does Docker Compose simplify running multiple services together?_**

Docker Compose simplifies the connectivity between the NestJS API and the PostgreSQL database, defining the infrastructure into code that is configured once, networks automatically, and activates in a single-line command.

### **_How can you expose API logs and debug a running container?_**

Through the `docker logs` command lines. `docker logs <container-name>` exposes the logs of a certain container, `docker logs -f <api-name>` follows the logs in real-time, and `docker compose logs -f` shows the logs of the whole compose cluster.
