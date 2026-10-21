# Practical 07: Dynamic Text Editor Using Singly Linked List

**Name:** PRADEEP KALE  
**Roll Number:** SEA29  
**Subject:** Data Structures and Algorithms (DSA)

## 1. Aim

To implement a dynamic text editor using a singly linked list with create, insert, display, delete, and reverse operations.

## 2. Problem Statement

Write a menu-driven C program that stores text elements in a singly linked list and allows users to create, insert, display, delete, and reverse the list.

## 3. Objectives

- Understand the singly linked list data structure.
- Allocate memory dynamically using `malloc()`.
- Insert a node at a specified position.
- Delete a node from a specified position.
- Display all nodes in the list.
- Reverse the linked list using pointers.
- Release allocated memory using `free()`.

## 4. Theory

A singly linked list is a linear data structure made up of nodes. Each node contains two parts:

1. **Data:** Stores the text element.
2. **Next pointer:** Stores the address of the next node.

The `head` pointer points to the first node. The last node points to `NULL`.

### Operations

- **Create:** Adds new nodes to the list.
- **Insert:** Adds a node at a specified position.
- **Display:** Prints all nodes in order.
- **Delete:** Removes a node from a specified position.
- **Reverse:** Changes the links so the list is displayed in reverse order.

## 5. Algorithm

1. Start the program and initialize `head` to `NULL`.
2. Display the menu.
3. For Create, allocate memory and add nodes to the list.
4. For Insert, create a node and connect it at the specified position.
5. For Display, traverse the list and print each node.
6. For Delete, locate the required node, unlink it, and free its memory.
7. For Reverse, change the direction of each node's link using three pointers.
8. Repeat the menu until Exit is selected.
9. Free the remaining nodes and stop.

## 6. Sample Input

```text
Create:
neel
pushpak
daksh
prajwal
jivesh

Insert at location 3:
atharv

Delete at location 5

Reverse
```

## 7. Sample Output

```text
Original list:
neel->pushpak->daksh->prajwal->jivesh->NULL

After inserting atharv at location 3:
neel->pushpak->atharv->daksh->prajwal->jivesh->NULL

After deleting the node at location 5:
neel->pushpak->atharv->daksh->jivesh->NULL

After reversing:
jivesh->daksh->atharv->pushpak->neel->NULL
```

## 8. Time Complexity

| Operation | Time Complexity |
|---|---|
| Create | O(n²) in this implementation |
| Insert | O(n) |
| Display | O(n) |
| Delete | O(n) |
| Reverse | O(n) |

Here, `n` is the number of nodes in the linked list. Creating each node by traversing from the head to the end makes the total creation time O(n²).

## 9. Conclusion

The dynamic text editor was implemented successfully using a singly linked list. The program demonstrates dynamic memory allocation, insertion, deletion, traversal, and reversal of nodes.
