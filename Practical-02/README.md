
# Practical 02: Student Result Database Management Using Array of Structures

## Student Information

- **Name:** PRADEEP KALE
- **Roll Number:** SEA 29
- **Course:** Data Structures and Algorithms Laboratory
- **Academic Year:** 2026–27

## Aim

To implement a student result database management system using an array of structures in C.

## Problem Statement

Develop a C program to store student details, calculate total and average marks, display student records, search by roll number, and sort records in ascending order of roll number.

## Objectives

1. To understand structures and arrays of structures.
2. To manage multiple student records.
3. To calculate total and average marks.
4. To search for a student using roll number.
5. To sort student records using bubble sort.

## Software Required

- C compiler
- Text editor or IDE
- GitHub

## Theory

A structure in C is a user-defined data type that groups related variables of different data types. An array of structures stores multiple records of the same structure type.

This program uses a structure named `stud` to store student details. Functions are used to create, display, search, and sort the records.

## Functions Used

- `create()` – accepts student details and calculates results.
- `disp()` – displays all student records.
- `search()` – searches for a student by roll number.
- `sort()` – sorts records by roll number using bubble sort.
- `main()` – displays the menu and controls program execution.

## Algorithm

1. Start the program.
2. Display the menu.
3. Accept the user's choice.
4. Create student records when option 1 is selected.
5. Display records when option 2 is selected.
6. Search by roll number when option 3 is selected.
7. Sort records by roll number when option 4 is selected.
8. Repeat until option 5 is selected.
9. Stop the program.

## Sample Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | Create 2 student records | Both records are stored |
| 2 | Select Display | All student records are displayed |
| 3 | Search roll number 2 | Student record is found |
| 4 | Search roll number 1 | Record not found |
| 5 | Select Sort | Records appear in ascending roll number order |

## Sample Output

After sorting the sample records, the roll numbers appear in this order:

2
12

The corresponding student details are displayed along with their subject marks, total, and average.

## Time Complexity

- Create: O(n)
- Display: O(n)
- Search: O(n)
- Bubble Sort: O(n^2)

## Space Complexity

O(n) for storing n student records.

## Conclusion

The student result database management system was implemented using an array of structures in C. The program demonstrates record creation, display, searching, sorting, and result calculation.

