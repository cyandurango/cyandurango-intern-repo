# Container Management

## docker stop <container-name>

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % docker stop focus-bear-db
    focus-bear-db

sighreelss@sighreelsss-MacBook-Air test-experiments % docker ps
    CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

sighreelss@sighreelsss-MacBook-Air test-experiments % docker start focus-bear-db
    focus-bear-db

sighreelss@sighreelsss-MacBook-Air test-experiments % docker ps
    CONTAINER ID   IMAGE                COMMAND                  CREATED          STATUS        PORTS                                         NAMES
    dc372d6fd4d7   postgres:16-alpine   "docker-entrypoint.s…"   20 minutes ago   Up 1 second   0.0.0.0:5434->5432/tcp, [::]:5434->5432/tcp   focus-bear-db
```

## docker rm <container-name>

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % docker stop focus-bear-db
    focus-bear-db

sighreelss@sighreelsss-MacBook-Air test-experiments % docker rm focus-bear-db
    focus-bear-db

sighreelss@sighreelsss-MacBook-Air test-experiments % docker ps
    CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

sighreelss@sighreelsss-MacBook-Air test-experiments % docker start focus-bear-db
    Error response from daemon: No such container: focus-bear-db
    failed to start containers: focus-bear-db
```

## docker-compose down

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % docker-compose down
    [+] down 2/2
    ✔ Container focus-bear-db          Removed                             0.2s
    ✔ Network test-experiments_default Removed                             0.2s
```

## docker-compose up -d --build

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % docker-compose up -d --build
    [+] up 2/2
    ✔ Network test-experiments_default Created         0.0s
    ✔ Container focus-bear-db          Started         0.2s
```
