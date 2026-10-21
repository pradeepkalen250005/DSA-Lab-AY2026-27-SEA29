
# Practical 01: Pattern Printing Using Functions in C

## Student Information

- **Name:** PRADEEP KALE
- **Roll Number:** SEA 29
- **Course:** Data Structures and Algorithms Laboratory
- **Academic Year:** 2026–27

## Aim

To implement different patterns using functions and nested loops in C.

## Problem Statement

Write a C program using separate functions to print:
1. Right-angle triangle with numbers.
2. Diamond shape with numbers.
3. Pyramid with asterisks.
4. Pyramid using alphabets.

## Objectives

1. To understand user-defined functions in C.
2. To understand nested loops.
3. To print different patterns using numbers, symbols, and alphabets.
4. To improve programming and logical skills.

## Software Required

- C compiler
- Text editor or IDE
- GitHub

## Theory

Functions are reusable blocks of code that perform specific tasks. In this practical, four user-defined functions are used to print four different patterns. Nested loops control the rows, columns, spaces, and characters.

## Functions Used

- `rightAngleTriangle()` – prints a triangle with numbers.
- `diamondNumbers()` – prints a diamond pattern with numbers.
- `pyramidAsterisks()` – prints a pyramid using asterisks.
- `pyramidAlphabets()` – prints a pyramid using alphabets.
- `main()` – calls all four functions.

## Algorithm

1. Start the program.
2. Define the four pattern functions.
3. Call each function from `main()`.
4. Print each pattern using nested loops.
5. Return 0 and terminate the program.

## Test Cases

| Test Case | Value of n | Expected Result |
|---|---:|---|
| 1 | 1 | Minimum-size pattern |
| 2 | 4 | Four-row triangle and pyramid |
| 3 | 5 | Five-row triangle and pyramid |

Note: The current program uses a fixed value of n = 4. Change the value in each function to test other sizes.

## Time Complexity

Each pattern uses nested loops, so its time complexity is O(n²).

## Space Complexity

The auxiliary space complexity is O(1), because a fixed number of variables is used.

## Conclusion

The program demonstrates how functions and nested loops can be used to print four different patterns in C. It also improves understanding of code reusability and modular programming.

