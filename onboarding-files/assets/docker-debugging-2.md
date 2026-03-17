## INSPECTING RUNNING CONTAINERS

### USING DOCKER PS

```BASH
sighreelss@Mac test-experiments % docker ps
    CONTAINER ID   IMAGE                COMMAND                  CREATED          STATUS          PORTS                                         NAMES
    c1c4ba82338d   postgres:16-alpine   "docker-entrypoint.s…"   15 seconds ago   Up 14 seconds   0.0.0.0:5432->5432/tcp, [::]:5432->5432/tcp   focus-bear-db
```

### USING DOCKER INSPECT <CATEGORY>

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % docker inspect focus-bear-db
[
    {
        "Id": "dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3",
        "Created": "2026-03-17T07:42:40.978989541Z",
        "Path": "docker-entrypoint.sh",
        "Args": [
            "postgres"
        ],
        "State": {
            "Status": "running",
            "Running": true,
            "Paused": false,
            "Restarting": false,
            "OOMKilled": false,
            "Dead": false,
            "Pid": 2104,
            "ExitCode": 0,
            "Error": "",
            "StartedAt": "2026-03-17T07:42:41.0590945Z",
            "FinishedAt": "0001-01-01T00:00:00Z"
        },
        "Image": "sha256:20edbde7749f822887a1a022ad526fde0a47d6b2be9a8364433605cf65099416",
        "ResolvConfPath": "/var/lib/docker/containers/dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3/resolv.conf",
        "HostnamePath": "/var/lib/docker/containers/dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3/hostname",
        "HostsPath": "/var/lib/docker/containers/dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3/hosts",
        "LogPath": "/var/lib/docker/containers/dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3/dc372d6fd4d7cef19d2c6c33cf4e57f8e99c24034694411df48dfe14d5bd40f3-json.log",
        "Name": "/focus-bear-db",
        "RestartCount": 0,
        "Driver": "overlayfs",
        "Platform": "linux",
        "MountLabel": "",
        "ProcessLabel": "",
        "AppArmorProfile": "",
        "ExecIDs": null,
        "HostConfig": {
            "Binds": [
                "test-experiments_postgres_data:/var/lib/postgresql/data:rw"
            ],
            "ContainerIDFile": "",
            "LogConfig": {
                "Type": "json-file",
                "Config": {}
            },
            "NetworkMode": "test-experiments_default",
            "PortBindings": {
                "5432/tcp": [
                    {
                        "HostIp": "",
                        "HostPort": "5434"
                    }
                ]
            },
            "RestartPolicy": {
                "Name": "always",
                "MaximumRetryCount": 0
            },
            "AutoRemove": false,
            "VolumeDriver": "",
            "VolumesFrom": null,
            "ConsoleSize": [
                0,
                0
            ],
            "CapAdd": null,
            "CapDrop": null,
            "CgroupnsMode": "private",
            "Dns": null,
            "DnsOptions": null,
            "DnsSearch": null,
            "ExtraHosts": [],
            "GroupAdd": null,
            "IpcMode": "private",
            "Cgroup": "",
            "Links": null,
            "OomScoreAdj": 0,
            "PidMode": "",
            "Privileged": false,
            "PublishAllPorts": false,
            "ReadonlyRootfs": false,
            "SecurityOpt": null,
            "UTSMode": "",
            "UsernsMode": "",
            "ShmSize": 67108864,
            "Runtime": "runc",
            "Isolation": "",
            "CpuShares": 0,
            "Memory": 0,
            "NanoCpus": 0,
            "CgroupParent": "",
            "BlkioWeight": 0,
            "BlkioWeightDevice": null,
            "BlkioDeviceReadBps": null,
            "BlkioDeviceWriteBps": null,
            "BlkioDeviceReadIOps": null,
            "BlkioDeviceWriteIOps": null,
            "CpuPeriod": 0,
            "CpuQuota": 0,
            "CpuRealtimePeriod": 0,
            "CpuRealtimeRuntime": 0,
            "CpusetCpus": "",
            "CpusetMems": "",
            "Devices": null,
            "DeviceCgroupRules": null,
            "DeviceRequests": null,
            "MemoryReservation": 0,
            "MemorySwap": 0,
            "MemorySwappiness": null,
            "OomKillDisable": null,
            "PidsLimit": null,
            "Ulimits": null,
            "CpuCount": 0,
            "CpuPercent": 0,
            "IOMaximumIOps": 0,
            "IOMaximumBandwidth": 0,
            "MaskedPaths": [
                "/proc/acpi",
                "/proc/asound",
                "/proc/interrupts",
                "/proc/kcore",
                "/proc/keys",
                "/proc/latency_stats",
                "/proc/sched_debug",
                "/proc/scsi",
                "/proc/timer_list",
                "/proc/timer_stats",
                "/sys/devices/virtual/powercap",
                "/sys/firmware"
            ],
            "ReadonlyPaths": [
                "/proc/bus",
                "/proc/fs",
                "/proc/irq",
                "/proc/sys",
                "/proc/sysrq-trigger"
            ]
        },
        "Storage": {
            "RootFS": {
                "Snapshot": {
                    "Name": "overlayfs"
                }
            }
        },
        "Mounts": [
            {
                "Type": "volume",
                "Name": "test-experiments_postgres_data",
                "Source": "/var/lib/docker/volumes/test-experiments_postgres_data/_data",
                "Destination": "/var/lib/postgresql/data",
                "Driver": "local",
                "Mode": "rw",
                "RW": true,
                "Propagation": ""
            }
        ],
        "Config": {
            "Hostname": "dc372d6fd4d7",
            "Domainname": "",
            "User": "",
            "AttachStdin": false,
            "AttachStdout": true,
            "AttachStderr": true,
            "ExposedPorts": {
                "5432/tcp": {}
            },
            "Tty": false,
            "OpenStdin": false,
            "StdinOnce": false,
            "Env": [
                "POSTGRES_USER=cyandurango",
                "POSTGRES_PASSWORD=cyandurango",
                "POSTGRES_DB=userDB",
                "PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin",
                "GOSU_VERSION=1.19",
                "LANG=en_US.utf8",
                "PG_MAJOR=16",
                "PG_VERSION=16.13",
                "PG_SHA256=dc2ddbbd245c0265a689408e3d2f2f3f9ba2da96bd19318214b313cdd9797287",
                "DOCKER_PG_LLVM_DEPS=llvm19-dev \t\tclang19",
                "PGDATA=/var/lib/postgresql/data"
            ],
            "Cmd": [
                "postgres"
            ],
            "Image": "postgres:16-alpine",
            "Volumes": {
                "/var/lib/postgresql/data": {}
            },
            "WorkingDir": "/",
            "Entrypoint": [
                "docker-entrypoint.sh"
            ],
            "Labels": {
                "com.docker.compose.config-hash": "11ffa0ff925a67dd1187a8187bb702929549fde2a27c531b3c8c2517cb0dd145",
                "com.docker.compose.container-number": "1",
                "com.docker.compose.depends_on": "",
                "com.docker.compose.image": "sha256:20edbde7749f822887a1a022ad526fde0a47d6b2be9a8364433605cf65099416",
                "com.docker.compose.oneoff": "False",
                "com.docker.compose.project": "test-experiments",
                "com.docker.compose.project.config_files": "/Users/sighreelss/Documents/GitHub/cyandurango-intern-repo/onboarding-files/test-experiments/docker-compose.yaml",
                "com.docker.compose.project.working_dir": "/Users/sighreelss/Documents/GitHub/cyandurango-intern-repo/onboarding-files/test-experiments",
                "com.docker.compose.service": "db",
                "com.docker.compose.version": "5.1.0"
            },
            "StopSignal": "SIGINT",
            "StopTimeout": 1
        },
        "NetworkSettings": {
            "SandboxID": "072f990ca3722bb1115138d8bbd35d382ab0e38a660ebd6877464429f876c286",
            "SandboxKey": "/var/run/docker/netns/072f990ca372",
            "Ports": {
                "5432/tcp": [
                    {
                        "HostIp": "0.0.0.0",
                        "HostPort": "5434"
                    },
                    {
                        "HostIp": "::",
                        "HostPort": "5434"
                    }
                ]
            },
            "Networks": {
                "test-experiments_default": {
                    "IPAMConfig": null,
                    "Links": null,
                    "Aliases": [
                        "focus-bear-db",
                        "db"
                    ],
                    "DriverOpts": null,
                    "GwPriority": 0,
                    "NetworkID": "5cf0885da8c42183161c9c78c893ee5cb35df45916616bdd077e64bdbab7f099",
                    "EndpointID": "c191c04a15ecac2231c3c71b70f1f0e5c75bf3c4d3c75189985acf59b9844df5",
                    "Gateway": "172.19.0.1",
                    "IPAddress": "172.19.0.2",
                    "MacAddress": "7e:da:9d:2e:a8:6a",
                    "IPPrefixLen": 16,
                    "IPv6Gateway": "",
                    "GlobalIPv6Address": "",
                    "GlobalIPv6PrefixLen": 0,
                    "DNSNames": [
                        "focus-bear-db",
                        "db",
                        "dc372d6fd4d7"
                    ]
                }
            }
        },
        "ImageManifestDescriptor": {
            "mediaType": "application/vnd.oci.image.manifest.v1+json",
            "digest": "sha256:d4e7bbd53503d420c248ad3039898876b7971bf5e51a6eb2f0b8c00ae8e718d0",
            "size": 3056,
            "annotations": {
                "com.docker.official-images.bashbrew.arch": "arm64v8",
                "org.opencontainers.image.base.digest": "sha256:1529d13528ed05668b2038ffab807ac8633ad6adfe6be8901adda62411f70d29",
                "org.opencontainers.image.base.name": "alpine:3.23",
                "org.opencontainers.image.created": "2026-02-26T19:25:37Z",
                "org.opencontainers.image.revision": "31041e40d9b06ce075f5edd767243e53efb5ee62",
                "org.opencontainers.image.source": "https://github.com/docker-library/postgres.git#31041e40d9b06ce075f5edd767243e53efb5ee62:16/alpine3.23",
                "org.opencontainers.image.url": "https://hub.docker.com/_/postgres",
                "org.opencontainers.image.version": "16.13-alpine3.23"
            },
            "platform": {
                "architecture": "arm64",
                "os": "linux",
                "variant": "v8"
            }
        }
    }
]
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
