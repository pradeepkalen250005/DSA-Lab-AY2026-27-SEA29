# Practical 08: Online Directory System Using Binary Search Tree

## Problem Statement
Design and implement an online directory system (contact management system) using a **Binary Search Tree (BST)**. The system must support inserting contact profiles containing unique names and mobile numbers, exploring records using diverse tree traversals (Inorder, Preorder, Postorder), and executing an efficient alphabetical search lookup.

## Approach
1. **Dynamic Tree Node Configuration**: Modeled directories using a self-referencing structure containing string buffers for names and numbers alongside traditional structural tree links (`left`, `right`).
2. **BST Insertion Property**: Structured records alphabetically using `strcmp()`. Keys smaller than the root are moved left; larger records are shifted right.
3. **Traversals**:
   * **Inorder**: Yields completely sorted directory paths alphabetically (Left, Root, Right).
   * **Preorder**: Explores the structural orientation from root onwards (Root, Left, Right).
   * **Postorder**: Used for structural deletion evaluations (Left, Right, Root).
4. **Search Subroutine**: Achieves fast logarithmic retrieval by removing half of the search subtrees during each comparison segment.

## Test Cases

### Sample Input
```text
Choice: 1 -> Name: Pranav, Mobile: 1234
Choice: 1 -> Name: Pradip, Mobile: 2345
Choice: 1 -> Name: Aditya, Mobile: 3456
Choice: 1 -> Name: Shrinivas, Mobile: 4567

Choice: 2 (Display Traversals)
Choice: 3 -> Search Name: pranav
Choice: 3 -> Search Name: Pranav
Choice: 4 (Exit)
```

### Sample Output
```text
--- INORDER TRAVERSAL ---
Name        Mobile
Aditya      3456
Pradip      2345
Pranav      1234
Shrinivas   4567

--- PREORDER TRAVERSAL ---
Name        Mobile
Pranav      1234
Pradip      2345
Aditya      3456
Shrinivas   4567

--- POSTORDER TRAVERSAL ---
Name        Mobile
Aditya      3456
Pradip      2345
Shrinivas   4567
Pranav      1234

Enter name to search: pranav
Contact not found.

Enter name to search: Pranav
Contact Found!
Name : Pranav
Mobile : 1234
```

## Complexity Analysis
Given $N$ is the number of contacts stored within the Directory Tree:

* **Time Complexity:**
  * **Insertion**: $\mathcal{O}(\log N)$ on average, extending to worst-case $\mathcal{O}(N)$ if records are inputted sequentially (skewed tree).
  * **Search**: $\mathcal{O}(\log N)$ on average, scaling to worst-case $\mathcal{O}(N)$ for skewed layouts.
  * **Traversals (In/Pre/Post)**: $\mathcal{O}(N)$ since every isolated record node must be systematically printed.
* **Space Complexity:** $\mathcal{O}(N)$ allocation constraints to actively maintain the structural nodes inside the system RAM memory.

## Conclusion
A Binary Search Tree effectively handles alphabetical databases like directory indices. It delivers vastly superior lookups and sorting behaviors over standard linear arrays by providing ordered datasets inherently via fundamental tree structures.
