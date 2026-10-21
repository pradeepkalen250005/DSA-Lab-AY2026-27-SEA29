# Practical 06: Train Ticket Booking System Using Queue

**Name:** PRADEEP KALE  
**Roll Number:** SEA29  
**Subject:** Data Structures and Algorithms (DSA)

## 1. Aim

To implement a train ticket booking system using a queue and a waiting list.

## 2. Problem Statement

Develop a menu-driven C program to book train tickets, cancel confirmed tickets, maintain a waiting list when all confirmed seats are occupied, and confirm the next waiting ticket when a confirmed ticket is cancelled.

## 3. Objectives

- Implement queue operations using arrays.
- Book tickets when confirmed seats are available.
- Add tickets to a waiting list when all seats are occupied.
- Cancel confirmed tickets.
- Automatically confirm the first waiting ticket after a cancellation.
- Display confirmed tickets and waiting-list tickets.

## 4. Theory

A queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. The ticket request entered first is processed first.

This program uses:
- **Confirmed queue:** Stores up to five confirmed tickets.
- **Waiting list:** Stores up to five waiting tickets.
- **Booking:** Adds a ticket to the confirmed queue or waiting list.
- **Cancellation:** Removes a confirmed ticket.
- **Automatic confirmation:** Moves the first waiting ticket into the confirmed queue when a seat becomes available.
- **Display:** Shows confirmed tickets and waiting-list tickets.

## 5. Algorithm

1. Start the program.
2. Display the menu: Book Ticket, Cancel Ticket, Display Bookings, and Exit.
3. If Book Ticket is selected, check whether the confirmed queue is full.
4. If space is available, add the ticket to the confirmed queue; otherwise, add it to the waiting list if space is available.
5. If Cancel Ticket is selected, search for the ticket in the confirmed queue.
6. If the ticket is found, remove it and shift subsequent tickets as needed.
7. If the waiting list is not empty, confirm the first waiting ticket.
8. If Display Bookings is selected, display confirmed and waiting tickets.
9. Repeat until Exit is selected.
10. Stop the program.

## 6. Sample Input and Output

```text
1. Book Ticket
2. Cancel Ticket
3. Display Bookings
4. Exit

Enter option: 1
Enter ticket number: 101
Ticket booked

Enter option: 1
Enter ticket number: 103
Ticket booked

Enter option: 1
Enter ticket number: 102
Ticket booked

Enter option: 1
Enter ticket number: 104
Ticket booked

Enter option: 1
Enter ticket number: 105
Ticket booked

Enter option: 1
Enter ticket number: 106
Added to waiting list

Enter option: 1
Enter ticket number: 107
Added to waiting list

Enter option: 3

Confirmed Tickets: 101 103 102 104 105
Waiting List: 106 107

Enter option: 2
Enter ticket number to cancel: 102
Ticket cancelled
Waiting ticket 106 confirmed

Enter option: 3

Confirmed Tickets: 101 103 104 105 106
Waiting List: 107

Enter option: 4
Exited successfully
```

## 7. Time Complexity

| Operation | Time Complexity |
|---|---|
| Booking a ticket | O(1) |
| Display bookings | O(n) |
| Searching for a ticket | O(n) |
| Cancelling a ticket | O(n) |

Here, `n` represents the number of confirmed tickets or waiting-list entries being processed.

## 8. Conclusion

The train ticket booking system was implemented successfully using queues and arrays. It supports booking, cancellation, waiting-list management, and automatic confirmation of waiting tickets when a confirmed ticket is cancelled.
