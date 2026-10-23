# Practical 09: Campus Navigation System Using Graph Traversals

## Problem Statement
Design a path navigation system for a university campus modeled as a graph, where buildings represent vertices and pathways represent edges. Implement Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms to map out traversal options from a selected starting building.

## Approach
1. **Graph Representation**: Represented the campus infrastructure as an undirected graph using a 2D **Adjacency Matrix**.
2. **BFS Traversal**: Explored the campus layout layer by layer (level-order) using an explicit queue data structure to locate close neighboring buildings first.
3. **DFS Traversal**: Explored paths as deeply as possible along each branch before backtracking using recursive functional calls (implicit stack execution).

## Test Cases

### Sample Input
```text
Enter Number of Buildings: 5
Enter Number of Paths: 7

--//PATHS//--
Enter Path 1 (vertex numbers 0 to 4): 0 1
Enter Path 2 (vertex numbers 0 to 4): 0 2
Enter Path 3 (vertex numbers 0 to 4): 0 3
Enter Path 4 (vertex numbers 0 to 4): 0 4
Enter Path 5 (vertex numbers 0 to 4): 1 2
Enter Path 6 (vertex numbers 0 to 4): 2 3
Enter Path 7 (vertex numbers 0 to 4): 3 4

Enter Starting Building (0 to 4): 0
```

### Sample Output
```text
Adjacency Matrix for given data:
0 1 1 1 1 
1 0 1 0 0 
1 1 0 1 0 
1 0 1 0 1 
1 0 0 1 0 

BFS Traversal: 0 1 2 3 4 
DFS Traversal: 0 1 2 3 4 
```

## Complexity Analysis
Given $V$ is the number of buildings (vertices) and $E$ is the number of paths (edges):

* **Time Complexity:** 
  * **BFS**: $\mathcal{O}(V^2)$ due to the loop scanning through rows of the adjacency matrix.
  * **DFS**: $\mathcal{O}(V^2)$ because each cell in the matrix row is evaluated during recursion.
* **Space Complexity:** $\mathcal{O}(V^2)$ to house the structural elements inside the fixed adjacency matrix.

## Conclusion
Graph models effectively replicate spatial layouts like university structures. BFS works optimally for identifying immediate target destinations close to the origin, whereas DFS comprehensively searches complete pathways across structural networks.
