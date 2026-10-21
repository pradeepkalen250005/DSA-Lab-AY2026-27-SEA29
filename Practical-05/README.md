# Practical 05: Circular Queue Implementation Using Array for Parcel Handling System

**Name:** PRADEEP KALE  
**Roll Number:** SEA29  
**Subject:** Data Structures and Algorithms (DSA)

## 1. Aim

To implement a circular queue using an array for managing parcel handling operations.

## 2. Problem Statement

Develop a menu-driven C program to add parcels, dispatch parcels, and display the remaining parcels using a circular queue.

## 3. Objectives

- Understand the circular queue data structure.
- Implement insertion and deletion operations.
- Display the parcels currently waiting in the queue.
- Handle queue overflow and underflow conditions.
- Use array space efficiently by reusing empty positions.

## 4. Theory

A circular queue is a linear data structure in which the last position connects back to the first position.

It follows the **FIFO (First In, First Out)** principle. The parcel added first is dispatched first.

The circular movement of the queue is achieved using the modulo operator (`%`).

- **Add (Enqueue):** Inserts a parcel at the rear.
- **Dispatch (Dequeue):** Removes a parcel from the front.
- **Display:** Shows all parcels currently waiting.
- **Queue Full:** No free position is available.
- **Queue Empty:** No parcel is waiting.

## 5. Algorithm

1. Start the program.
2. Initialize `front = -1` and `rear = -1`.
3. Display the menu.
4. If the user selects Add, check whether the queue is full. If space is available, insert the parcel.
5. If the user selects Dispatch, check whether the queue is empty. If not, remove the front parcel.
6. If the user selects Display, print all parcels in queue order.
7. If the user selects Exit, terminate the program.
8. Repeat the menu until Exit is selected.

## 6. Sample Input and Output

```text
1. Add
2. Dispatch
3. Display
4. Exit
Enter an option: 1
Enter parcel number to add: 1
Parcel added successfully.

Enter an option: 1
Enter parcel number to add: 2
Parcel added successfully.

Enter an option: 1
Enter parcel number to add: 3
Parcel added successfully.

Enter an option: 1
Enter parcel number to add: 4
Parcel added successfully.

Enter an option: 1
Enter parcel number to add: 5
Parcel added successfully.

Enter an option: 1
Parcel queue is Full

Enter an option: 2
Parcel 1 is dispatched

Enter an option: 3
Parcel numbers left in queue: 2 3 4 5

Enter an option: 4
Exited successfully.
```

## 7. Time Complexity

| Operation | Time Complexity |
|---|---|
| Add | O(1) |
| Dispatch | O(1) |
| Display | O(n) |

## 8. Conclusion

The circular queue was implemented successfully using an array. The program supports adding, dispatching, and displaying parcels while handling full and empty queue conditions. Circular indexing allows vacated array positions to be reused.

