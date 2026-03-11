# 4.11 Static Analysis Checks in CI/CD

Goal: Understand the purpose of Continuous Integration (CI) and Continuous Deployment (CD) and learn how to enforce Markdown linting and spell checks automatically in a project.

## **_What is the purpose of CI/CD?_**

CI stands for Continuous Integration that automates builds and tests run. Its main goal is to detect bugs early once a commit is pushed.

CD stands for Continuous Deployment, focusing majorly on checks and auto-preparation for release and server deployment.

## **_How does automating style checks improve project quality?_**
Automation readily cleans up any noise, ensures repository style is written by one person, and reduces mental energy in code formatting

## **_What are some challenges with enforcing checks in CI/CD?_**
Challenges may include false positives especially in 'cspell', consistent maintenance, and slow feedback loops.

## **_How do CI/CD pipelines differ between small projects and large teams?_**

In terms of complexity, complex projects need to be checked before everything compared to simple projects. Larger teams focus more on safety and compliance, and prone to mereg conflicts. 