# Milestone 7 | Building APIs & Handling Data

## 7.6 Background Jobs with BullMQ & Redis in NestJS

Goal: Learn how to handle background tasks asynchronously in a NestJS backend using BullMQ & Redis.

### **_Why is BullMQ used instead of handling tasks directly in API requests?_**

BullMQ decouples the work created by the API, allowing the background worker to pick up the job and process it on its own pace. API now handles new incoming traffic.

### **_How does Redis help manage job queues in BullMQ?_**

Redis provides hashes (that stores the actual job payload), lists (for wait-listing jobs to be processed), sorted sets (categorizing jobs for its state), and Lua scripts (guaranteeing two workers don't grab the same job).

### **_What happens if a job fails? How can failed jobs be retried?_**

BullMQ catches the error and moves the job id into the failed sorted set category. Retrying failed jobs will consists of either automatically retrying the job by passing the maximum number of attempts or manually retrying by writing a script through `job.retry`.

### **_How does Focus Bear use BullMQ for background tasks?_**

BullMQ is essential for handling asynchronous workloads and heavy tasks, particularly in processing daily habit data and other heavy features that the application has.
