# Milestone 0 | Company Policies

## 0.6 Use of AI Tools

Goal: Understand how to responsibly and effectively use AI tools while maintaining data privacy and critical thinking.

## Research and Learn

### **_What AI tools are typically used for your role?_**

There are AI-native ISEs that suggest lines of code and understand the repository (such as Cursor and Windsurf). Github Copilot can be used for boilerplating, unit-test generation, and explaining legacy code. Claude Code is a tool that can be run in the terminal to execute commands, run tests, and fix bugs based on instructions.

### **_What are the benefits and risks of using AI in a professional setting?_**

The benefits of using AI include boilerplate generation, simplified explanations of complex architectural patterns, and generate documentation. The likely risks are using already deprecated or non-existent libraries, insecure code suggestions, and plagiarism risks.

### **_What types of information should never be entered into AI tools?_**

Essentially, information to not be entered are secrets of the codebase, from credentials, business logic, personal information, and infrastructure details.

### **_How can you fact-check and validate AI-generated content to ensure accuracy?_**

Through cross-referencing the code, running the generated code, or reviewing every line. Either method works and ensures that AI-generated code does what is intended.

## Reflection

### **_When should you use AI for assistance, and when should you rely on your own skills?_**

I would prefer to use AI on repetitive work such as documentation and creating base testing files. My own skills are much more reliable in creating the logic and architecture as it allows me not to only learn about the code, but also understand why the code is needed.

### **_How can you avoid over-reliance on AI while still benefiting from it?_**

I would prefer to solve the bug first before asking an AI. Should I decide to have AI generate it, I would manually check the code and understand each line as well.

### **_What steps will you take to ensure data privacy when using AI tools?_**

I would utilize placeholders instead of real data (renaming every secret, every privacy-related variable) to ensure that no specific business logic is leaked into the AI model. Small snippets are easier to 'scrub' for secrets than large files.

## Task (Answers and Documentation)

### **_Identify one task you can improve using an AI tool, and try it out._**

A task that i have identified is include error handling in a simple even-odd number checker and refactor the code into a readable one. [See Original Code Here](test-experiments/even-checker/evenChecker.c)

### **_Review the AI-generated output critically—did it require editing or fact-checking?_**

It did require editing as the generated code gave a ternary statement that was difficult to read, as well as the error handling was separated into two blocks which can be combined into one block.

- [See AI Generated Code here](test-experiments/even-checker/evenChecker-aiGen.c)
- [See Edited Code here](test-experiments/even-checker/evenChecker-edited.c)

### **_Document one best practice you will follow when using AI tools at Focus Bear._**

Despite that, AI tools are good for explaining the code and how it works, evident in the AI-generated response after prompting the code.
