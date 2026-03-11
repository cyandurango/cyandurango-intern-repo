# Milestone 5 | Docker & Local Development Setup

## 5.2 Setting Up Docker and Docker Compose

Goal: Install Docker and Docker Compose and learn basic commands to manage containers.

### **_What is the difference between docker run and docker-compose up?_**

```docker run``` are used for one-off tasks, starting one container at a time.

`docker compose up` are used for entire applications, reading a `.yaml` file that can start multiple containers with a single command.

### **_How does Docker Compose help when working with multiple services?_**

Docker Compose orchestrates services by defining its dependencies, automates network by having the backend talk to the database via a service name, configures code in a single file.

### **_What commands can you use to check logs from a running container?_**

View all logs - `docker logs <container_id>`
Follow logs live - `docker logs -f <container_id>`
Last 100 lines - `docker logs --tail 100 <container_id>`
Compose logs - `docker-compose logs -f (Shows logs for the whole stack)`
Specific Service - `docker-compose logs -f backend`

### **_What happens when you restart a container? Does data persist?_**

Data persists when restarting, and stopping then starting the container. Recreating/removing the container will wipe all internal data.
