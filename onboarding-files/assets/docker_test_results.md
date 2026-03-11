## INSPECTING RUNNING CONTAINERS

### USING DOCKER PS

```BASH
sighreelss@Mac test-experiments % docker ps          
    CONTAINER ID   IMAGE                COMMAND                  CREATED          STATUS          PORTS                                         NAMES
    c1c4ba82338d   postgres:16-alpine   "docker-entrypoint.s…"   15 seconds ago   Up 14 seconds   0.0.0.0:5432->5432/tcp, [::]:5432->5432/tcp   focus-bear-db
```

### USING DOCKER INSPECT <CATEGORY>

```bash
sighreelss@Mac test-experiments % docker inspect NAME|ID          
uid=501(sighreelss) gid=20(staff) groups=20(staff),12(everyone),61(localaccounts),79(_appserverusr),80(admin),81(_appserveradm),701(com.apple.sharepoint.group.1),33(_appstore),98(_lpadmin),100(_lpoperator),204(_developer),250(_analyticsusers),395(com.apple.access_ftp),398(com.apple.access_screensharing),399(com.apple.access_ssh),400(com.apple.access_remote_ae)
```

## CHECKING LOGS OF A RUNNING CONTAINER [docker logs <container-name>]

```bash
sighreelss@Mac test-experiments % docker logs focus-bear-db

    PostgreSQL Database directory appears to contain a database; Skipping initialization

    2026-03-11 08:12:00.045 UTC [1] LOG:  starting PostgreSQL 16.13 on aarch64-unknown-linux-musl, compiled by gcc (Alpine 15.2.0) 15.2.0, 64-bit
    2026-03-11 08:12:00.046 UTC [1] LOG:  listening on IPv4 address "0.0.0.0", port 5432
    2026-03-11 08:12:00.046 UTC [1] LOG:  listening on IPv6 address "::", port 5432
    2026-03-11 08:12:00.047 UTC [1] LOG:  listening on Unix socket "/var/run/postgresql/.s.PGSQL.5432"
    2026-03-11 08:12:00.051 UTC [29] LOG:  database system was shut down at 2026-03-11 07:57:50 UTC
    2026-03-11 08:12:00.057 UTC [1] LOG:  database system is ready to accept connections
```

## ENTER RUNNING CONTAINERS [docker esec -it <container-name> -U <username> -d <POSTGRE_DB>]

```bash
sighreelss@Mac test-experiments % docker exec -it focus-bear-db psql -U cyandurango -d userDB                                    
    psql (16.13)
    Type "help" for help.

    userDB=# 
```

## DOCKER ATTACH <CONTAINER-NAME>

```bash
sighreelss@Mac test-experiments % docker attach focus-bear-db
^C
    2026-03-11 08:21:25.001 UTC [1] LOG:  received fast shutdown request
    2026-03-11 08:21:25.003 UTC [1] LOG:  aborting any active transactions
    2026-03-11 08:21:25.019 UTC [1] LOG:  background worker "logical replication launcher" (PID 32) exited with exit code 1
    2026-03-11 08:21:25.020 UTC [27] LOG:  shutting down
    2026-03-11 08:21:25.022 UTC [27] LOG:  checkpoint starting: shutdown immediate
    2026-03-11 08:21:25.033 UTC [27] LOG:  checkpoint complete: wrote 0 buffers (0.0%); 0 WAL file(s) added, 0 removed, 0 recycled; write=0.001 s, sync=0.001 s, total=0.014 s; sync files=0, longest=0.000 s, average=0.000 s; distance=0 kB, estimate=0 kB; lsn=0/19898D8, redo lsn=0/19898D8
    2026-03-11 08:21:25.037 UTC [1] LOG:  database system is shut down
```
