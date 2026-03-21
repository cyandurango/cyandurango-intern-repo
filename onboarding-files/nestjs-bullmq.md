# Milestone 7 | Building APIs & Handling Data

## 7.6 Background Jobs with BullMQ & Redis in NestJS

Goal: Learn how to handle background tasks asynchronously in a NestJS backend using BullMQ & Redis.

### **_Why is BullMQ used instead of handling tasks directly in API requests?_**

BullMQ decouples the work created by the API, allowing the background worker to pick up the job and process it on its own pace. API now handles new incoming traffic.

With this hindsight, I created a task using BullMQ to send a welcome email:

- [Setting up the Queue:](assets/bullmq-queue-setup.png) requiring a queue for the `UserModule`
- [The Email Processor Code:](assets/bullmq-processor-code.png) a simple delaying processor to mimic automated email sending.
- [API Console Log Output via Docker](assets/bullmq-output-api.png): showcases the API output after the process is executed.

### **_How does Redis help manage job queues in BullMQ?_**

Redis provides hashes (that stores the actual job payload), lists (for wait-listing jobs to be processed), sorted sets (categorizing jobs for its state), and Lua scripts (guaranteeing two workers don't grab the same job).

Redis also logs the process, as seen in this [redis log](assets/bullmq-redis.png) of sending an email to a new user. Again, as this is just a simulation, no actual email is being sent, and only a three-second delay was implemented.

### **_What happens if a job fails? How can failed jobs be retried?_**

BullMQ catches the error and moves the job id into the failed sorted set category. Retrying failed jobs will consists of either automatically retrying the job by passing the maximum number of attempts or manually retrying by writing a script through `job.retry`.

### **_How does Focus Bear use BullMQ for background tasks?_**

BullMQ is essential for handling asynchronous workloads and heavy tasks, particularly in processing daily habit data and other heavy features that the application has. These tasks would take more time if the API the one responsible for handling them
