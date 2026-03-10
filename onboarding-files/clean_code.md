# 4.1 Understanding Clean Code Principles
Goal: Understand the core principles of clean code and why they matter in real-world development.

## Clean Code principles
- **SIMPLICITY**: Simplicity means keeping the codebase as simple as possible by having a single function do one thing. This means breaking down complex code into simple functions and removing unnecessary lines.

- **READABILITY**: Readability ensures that any developers is able to understand the function and intended use of the a certain block of code.

- **MAINTAINABILITY**: Maintainability means the code is easily modifiable, fixable, and extendable by the author and other developers. The code should be modular and testable

- **CONSISTENCY**: Consistency refers to how the code is formatted. From adopting a strict style guide to automated formatting, developers can adhere to these principles and make it seem like the entire codebase is written by a single person.

- **EFFICIENCY**: Efficiency refers to writing code that performs well and utilizes the memore and processing power optimally. Typically, Big-O notation is best in identifying the efficiency of a certain code.

## Example of a messy code
See Example [Here.](test-experiments/area-calculation/area-calculation-messy.c)

The following C-code violates the most of the principles stated. The code is, firstly, unreadable as the lines are being compacted into 6 lines. The codebase also looks complex because of its compactness. There is no indication of breaks which make it harder to maintain. 

## Converting the Messy Code into Clean Code
See Example [Here.](test-experiments/area-calculation/area-calculation-clean.c)

The code above is much cleaner due to the following reasons: (1)the code is simple as it separates the functions into its singular functionality (2) the code is easier to follow and read through, (3) maintaining the code is much easier due to the clear breaks, (4) consistent from the formatting until its display, (5) and efficient


# 4.2 Naming Variables & Functions
Goal: Learn how to choose clear and meaningful names for variables and functions. The intention upon its first read is immediately revealed.

## **_What makes a good variable or function name?_**
A good variable or function name is a name that summarizes what the variable is and what the variable does.

## **_What issues can arise from poorly named variables?_**
Several issues arise from poorly-named variables: (1) variables may mean differently which causes high cognitive load, (2) risk of bugs may increase, especially with variable names with similar spellings, and (3) the code becomes dependent to the comments just to explain the variable/function.

## **_How did refactoring improve code readability?_**
Comparing the messy code (see [here](test-experiments/area-calculation/area-calculation-messy.c)) and the clean code (see [here](test-experiments/area-calculation/area-calculation-clean.c)), there is a clear directional logic as to what the code is following. The logic is centralized and clear from the get-go.


# 4.3 Writing Small, Focused Functions
Goal: Learn how to break down large functions into smaller, more maintainable units.

## **_Why is breaking down functions beneficial?_**
Breakdown functions into its simplest components will allow developers to isolate the functions one by one for bugs, reuse the functions in future updates of the project, and creates blocks of code that are easily digestable.

## **_How did refactoring improve the structure of the code?_**
Refactoring the code made the entire codebase easy to understand and easy to follow by focusing on which function goes through which switch-case. 

See the unmodularized code [here](test-experiments/atm-simulation/atm_simulation.c) and the modularized code [here](test-experiments/atm-simulation/atm_simulation_modularized.c).


