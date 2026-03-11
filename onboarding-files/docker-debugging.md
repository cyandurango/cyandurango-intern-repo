# Milestone 5 | Docker & Local Development Setup

## 5.4 Debugging & Managing Docker Containers

Goal: Learn how to inspect, debug, and manage running Docker containers effectively.

### **_How can you check logs from a running container?_**

By typing in the terminal the command `docker logs <container-name>`, i can see the logs and updates of the container.

### **_What is the difference between `docker exec` and `docker attach`?_**

`docker exec` starts a new process that helps in running the, for example, psql.

`docker attach` connects to the terminal to the existing main process.

### **_How do you restart a container without losing data?_**

`docker restart <container-name>` would stop and start the process, ensuring no data loss. To not lose pertinent data (especially when refreshing and applying changes), volumes are utilized and indicated in the `.yaml` file. As long as the volume is defined in the said file, the container created via `docker-compose up -d` will retain the data.

### **_How can you troubleshoot database connection issues inside a containerized NestJS app?_**

Troubleshooting connection issues between the Docker and NestJs, the hostname must refer to the name of the PostgreSQL container, the containers are on the same network, the port can be tested via `docker exec`, or through a "wait-for-it" script for delay.
