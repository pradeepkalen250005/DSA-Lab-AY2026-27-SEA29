# Practical 03: Searching Contact Names Using Sequential and Binary Search

**Name:** PRADEEP KALE  
**Roll Number:** SEA29  
**Subject:** Data Structures and Algorithms (DSA)

## 1. Aim

To implement Sequential Search and Binary Search to find a contact by name and compare the number of comparisons performed by both searching techniques.

## 2. Problem Statement

Create a contact database containing the contact name, phone number, and address. Search for a contact using Sequential Search and Binary Search, and display the number of comparisons required by each method.

## 3. Objectives

- Store contact details using an array of structures.
- Search for a contact using Sequential Search.
- Sort contact names alphabetically using Bubble Sort.
- Search for a contact using Binary Search.
- Compare the number of comparisons for both searching techniques.

## 4. Concepts Used

- **Structure:** Stores a contact's name, phone number, and address.
- **Array:** Stores multiple contact records.
- **Sequential Search:** Checks each contact one by one until the required contact is found or the list ends.
- **Bubble Sort:** Sorts contacts alphabetically by name.
- **Binary Search:** Searches a sorted list by repeatedly dividing the search range into two halves.
- **String Functions:** `strcasecmp()` compares names without considering uppercase and lowercase differences.

## 5. Algorithm

1. Start the program.
2. Read the number of contacts.
3. Enter each contact's name, phone number, and address.
4. Display all contact details.
5. Read the contact name to search.
6. Apply Sequential Search and count the comparisons.
7. Sort the contacts alphabetically using Bubble Sort.
8. Apply Binary Search and count the comparisons.
9. Display the search results and comparison counts.
10. Stop the program.

## 6. Sample Input

```text
Number of contacts: 5

Neel       9874125630    Satara
Abhishek   9632014587    Nagpur
Pushpak    9874563210    Pune
Utkarsh    8520147963    Mumbai
Chaitanya  5203698741    Pune

Name to search: Utkarsh
```

## 7. Sample Output

```text
--- SEQUENTIAL SEARCH ---
Contact found!
Name: Utkarsh
Contact: 8520147963
Address: Mumbai
Sequential search comparisons: 4

--- CONTACTS SORTED A-Z ---
Abhishek
Chaitanya
Neel
Pushpak
Utkarsh

--- BINARY SEARCH ---
Contact found at sorted position 5.
Name: Utkarsh
Contact: 8520147963
Address: Mumbai
Binary search comparisons: 3
```

## 8. Time Complexity

| Operation | Time Complexity |
|---|---|
| Sequential Search | O(n) |
| Bubble Sort | O(n²) |
| Binary Search | O(log n) |

**Note:** Binary Search requires the contact list to be sorted. In this program, sorting takes O(n²) time using Bubble Sort.

## 9. Conclusion

Sequential Search and Binary Search were implemented successfully to search for a contact by name. Sequential Search examines contacts one by one, while Binary Search works on a sorted list and usually requires fewer comparisons for larger lists.

