# Milestone 5 | Docker & Local Development Setup

## 5.1 What is Docker and Why Use It?

Goal: Understand what Docker is, how it differs from traditional development setups, and why Focus Bear uses it.

### **_How does Docker differ from a virtual machine?_**

Virtual Machines mimic entire computer systems, running as a guest operating system on top of a host operating system. Has high isolation, consumes larger memory, and starts slow.

Docker, on the other hand,  makes the operating system virtual rather than the hardware. As it shares the host's kernel, it is slight more social than a virtual machine. It only utilizes lesser memory as it runs through an application and its dependencies. As it shares the same OS kernel with the host, startup is instant.

### **_Why is containerization useful for a backend like Focus Bear’s?_**

Docker provides Focus Bear with scalability, microservices alignment and environment parity. As for scalability, Docker allows the back-end to create the microservices for the app in a matter of seconds. Docker consolidates the features of the application through it microservices alignment. Lastly, it ensures that the application runs in different devices (hence the environment parity).

### **_How do containers help with dependency management?_**

Dependencies become immutable layers in containers, encapsulating the needed coding versions of the application, implement versioning, and version isolation.

### **_What are the potential downsides of using Docker?_**

Docker's downsides include security risks from the host system, temporary data, complexity in varying networks, and decreased performance on non-linux devices.
