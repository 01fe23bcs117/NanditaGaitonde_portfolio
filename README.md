# *SMART CITY DESIGN*

## Handled by Nandita Gaitonde : 01FE23BCS117

### Business Cases identified 
1. **Tourism**
2. **Energy generation and supply**
3. **Road transport**


## COURSE LEARNING REFLECTIONS
### 1. Iteration , Recurssion, Backtracking
   There are many instances in nature where we come across Iteration, Recurssion and backtracking.
   - **Iteration** : - It is the process of executing the same task again and again.
   - Some examples in nature could be boarding people in airplane, the placement of Matryoshka dolls.
   - In these instances, one performs same action over and over again like placing the dolls until there is no more dolls to place(end condition).


   - **Rescurssion** : - It is the process of accomplishing the problem based on the results of the same problem at smaller instances.
   - Examples can be growth of a plant everyday,process of learning.
   - In these, the growth and learning of yesterday impacts the results of today.

  
   - **Backtracking** : - It is a way of exploring the possible paths and returning back if a path fails to search for new path.
   - Examples are N-Queens problem, sudoku.
   - In these, it's always trial and error.

### 2. Space and Time Efficiency & Orders of Growth
   - **Space Efficency** : It is the extra space taken by the algorithm.
   - **Time Efficiency** : It is the time taken by the algorithm.
   - These are important to know about the practicality and how efficient is it to use a particular algorithm on a particular problem.
   - **Orders of Growth** : It determines how the time increases as we increase the inputs.
   -  It can be Constant, Logarithmic, Linear, Quadratic, Cubic.


### 3. Design Principles
   - Various design principles gives a idea that even if every design principle has been developed with the intention of optimizing the problem, using it appropriately for a particular problem is very necessary.
   - For example 'Pruning' is very well suited for N-Queens problem and using 'Parental dominance' makes no sense.
   - 'Bit manipulation' was used in Fenwick trees whereas 'Edge relaxation' was used in spanning trees. Interchanging these principles only complicates the problems. Hence choosing the appropriate principle makes it efficient.


### 4. Tree Data Structures
   - Tress are used for hierarchial data management.
   - Trees such as AVL, Red-Black, 2-3 can be used if balance is needed which can be achieved by rotations and if searching needs to be quicker. The time efficiency for insertion and deletion is O(logn) for all the three tree data structures.
   - Trie is used to manage character data.
   - Heap must satisfy tree shape requirement and parental dominance.


### 5. Array Query Algorithms
   - These are used when the data set is small and static.
   - It could be used to find sum, minimum, maximum over a given array set.
   - It uses the principle pf 'Pre-computing' wherein the previous result is stored and need not be calculated again, if needed.
   - Sparse table, segment tress, fenwick trees uses this principle.


### 6. Trees and Graphs
   - **Trees** is used to to store hierarchial data and has no cycles(acyclic graph).
   - **Graphs** is one with edges and nodes and can even form a cycle. It need not be hierarchial.
     
   - Trees are traversed through **preorder, inorder, postorder** traversal with one root node followed by left and right subtree
   - Graphs are traversed by **Depth First Search (DFS)** and **Breadth First Search(BFS)** with one source vertex.


### 7. Sorting and Seaching
   - **Bubble sort** was the most basic sort developed where an array is sorted with the reference of a minimum and comparing with every adjacent data.
   - **Selection sort** is better than  bubble but not for large datasets as it goes over the whole list.
   - **Insertion sort** is used for partially sorted data as it takes fewer comparisons
   - **Merge** and **Quick sort** is effiecient for larger datasets as it uses divide and conquer fundamental to breakdown large data into smaller ones.

   - **Boyer-Moore** uses BSST and GSST.
   - **Knuth-Morris-Pratt** uses pi-table.
   - **Rabin-Karp** uses variants of hash to make search efficient.


### 8. Spanning trees and shortest path
   - Spanning trees uses various algorithms to find the shortest path between source to destination.
   - Kruscal find shortest path by visiting every node.
   - Dijkstra uses cost matrix to find shortest path but does not necessarily visits every node.
   - Floyd indicates if there exists a shortest path
   - Warshall indicates if there is a path.
   - Bellman-Ford can find path with negative weights cycles which dijkstra cannot.
 
