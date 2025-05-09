# Product Requirement Specification (PRS)

## Project Title
Design and Implementation of an Arithmetic Logic Unit (ALU) Simulator

## Objective
To design and implement a C program that simulates the functionality of an Arithmetic Logic Unit (ALU) capable of performing basic arithmetic and logical operations. The program will display the step-by-step process of how the ALU processes these operations.

## Features
1. **Arithmetic Operations**:
   - Addition
   - Subtraction

2. **Logical Operations**:
   - AND
   - OR
   - NOT

3. **Step-by-Step Simulation**:
   - The program will display each step involved in processing the operations, including intermediate results and final output.

## Functional Requirements
1. The program should accept user input for the operation type (arithmetic or logical) and the operands.
2. The program should validate the input to ensure correctness.
3. The program should simulate the ALU's internal processing for the selected operation and display the steps in a clear and concise manner.
4. The program should output the final result of the operation.

## Non-Functional Requirements
1. The program should be implemented in the C programming language.
2. The program should be modular, with separate functions for each operation.

## Deliverables
1. Source code of the C program.
2. Documentation explaining the implementation and usage of the program.
3. Test cases demonstrating the functionality of the ALU simulator.

## Task Division
1. **Arithmetic Operations**:
   - Implement addition functionality.
   - Implement subtraction functionality.

2. **Logical Operations**:
   - Implement AND operation.
   - Implement OR operation.
   - Implement NOT operation.

3. **Simulation**:
   - Develop step-by-step simulation for arithmetic operations.
   - Develop step-by-step simulation for logical operations.

## Assumptions
1. The ALU will process integer values only.
2. The NOT operation will be applied to a single operand.
3. The program will run in a command-line environment.

## Constraints
1. The program must be implemented using standard C libraries.
2. The program should not use any external libraries for arithmetic or logical operations.
