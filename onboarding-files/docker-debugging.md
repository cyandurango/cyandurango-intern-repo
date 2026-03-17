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

Troubleshooting connection issues between the Docker and NestJs, the hostname must refer to the name of the PostgreSQL container, the containers are on the same network, the port can be tested via `docker exec`, or through a "wait-for-it" script for delay. There was a time wherein i had changed something in the YAML file, and i just let the container run as it is. Everything seemed to not work or that my changes aren't reflected. so I plugged in `docker-compose down` followed by `docker-compose up -d --build`. This is when my changes were reflected unto the docker container.

### **_The Experiment: Docker Container Management and Debugging_**

1. [Launching the docker:](assets/docker-debugging-1.png) `docker-compose up -d` runs the docker, starting the database in the background.
2. [Inspection and verification:](assets/docker-debugging-2.md) `docker ps` showcases the mapped ports. As expected, the mapped ports correspond to the ports dictated in the YAML file. In `docker inspect focus-bear-db`, it showcases the full contents of the focus-bear-db container. `docker logs focus-bear-db` showed the logs of the docker, from start to recent logs as of entering the command.
3. [Container Access:](assets/docker-debugging-3.png) To access the container, I entered `docker exec -it focus-bear-db sh`, and it opened an interactive shell of the docker container. For this experiment, I will be logging into the database initialized previously through `psql -U cyandurango -d userDB`. The result is `userDB=#`, entering SQL.
4. [Container Remodeling:](assets/docker-debugging-4.md) `docker stop focus-bear-db` stops the container process, but still retains the container. It can be seen that starting the container, the status of its creation says '.. minutes ago'. In a case where removing a container is much more useful, `docker rm focus-bear-db`. It can also be seen that running `docker start focus-bear-db` would now generate an error. `docker-compose down` resets everything, from the container to the network. Changing the YAML file configurations would entail rebuilding the docker via `docker-compose up -d --build` adding the 'build' tag to generate a network and container once more.
