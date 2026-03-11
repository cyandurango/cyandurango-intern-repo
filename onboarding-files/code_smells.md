# 4.8 Identifying & Fixing Code Smells

Goal: Learn how to recognize common code smells and refactor them for better readability, maintainability, and performance.

## **_What code smells did you find in your code?_**

All code smells listed are found in the code (see [here](test-experiments/airplane-system/airplaneSystem_smelly.c)). The whole program is tied into the main function, with nested if-else statements, duplicates, and commented code inside it. There are several magic numbers and strings hardcoded in the codebase, alongside inconsistent naming conventions and large structs. At first glance, the code looks heavy to even stare, and much more draining to analyze and follow through.

## **_How did refactoring improve the readability and maintainability of the code?_**

Through clear and consistent variable naming and definition, breaking down into smaller blocks of code, and consolidating the rest of the codebase, the overall program is now readable and maintainable (see [here](test-experiments/airplane-system/airplaneSystem_clean.c).). Developers can now easily follow through with the coding logic.

## **_How can avoiding code smells make future debugging easier?_**

By practicing clean code, damage control (such as finding bugs and errors) can be easily done. Clean code reduces the time to track down any type of damage, reads and follows through easily, and removes unnecessary double fixes through consolidating duplicate code.
