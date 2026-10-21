# Practical 04: Decimal to Binary Conversion Using Stack

**Name:** PRADEEP KALE  
**Roll Number:** SEA29  
**Subject:** Data Structures and Algorithms (DSA)

## 1. Aim

To convert a decimal number into its binary equivalent using a stack.

## 2. Problem Statement

Write a C program to convert a decimal number into binary using the stack data structure.

## 3. Objectives

- Understand the concept of a stack.
- Perform push and pop-like operations using an array.
- Convert a decimal number into binary.
- Display the binary number in the correct order.

## 4. Theory

A stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle.

To convert a decimal number into binary:

1. Divide the decimal number by 2.
2. Store the remainder in the stack.
3. Repeat until the quotient becomes 0.
4. Print the stored remainders in reverse order by popping them from the stack.

## 5. Algorithm

1. Start.
2. Read a non-negative decimal number.
3. If the number is 0, print binary `0`.
4. Divide the number by 2 and push each remainder onto the stack.
5. Repeat until the number becomes 0.
6. Pop and print the remainders in reverse order.
7. Stop.

## 6. Sample Input

```text
Enter Decimal number: 22
```

## 7. Sample Output

```text
Binary number for given decimal number is: 10110
```

## 8. Complexity

- **Time Complexity:** O(log n) for a positive decimal number.
- **Space Complexity:** O(log n) for storing the remainders.

## 9. Conclusion

The decimal-to-binary conversion was implemented successfully using a stack. The remainders are stored and then printed in reverse order to obtain the correct binary representation.
