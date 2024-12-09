## CHITRANAGARI : SMART CITY DESIGN 

## Handled by Nandita Gaitonde : 01FE23BCS117

### Business Cases identified 
1. **Tourism** 🏰
   - Since the city of Chitranagari is designed with refernce to a city in Rajasthan, which is rich in culture and tourism, it does have many tourist attractions.
   - Tourism has been included with the motive of 1. Showcasing India's heritage and 2. The revenue generated from these could be used for the city's infrastructural development.
   - Toursit attration includes a fort, palace , amusement park, botanical garden , museum. This business case includes fnding the best way these tourist spots could be showcased in order to generate more revenue.
     
2. **Energy generation and supply** ⚡
   - City with 1500 sq.km area indeed would harbour a lot of households atleast in the near future, which woud lead to high energy consumption, mainly electricity. Fot this, there is wind power and solar power plants set up. Along with this, it needs to be properly distributed to every household efficiently for which efficient pipelines would be required, which this business case aims to solve.
   
3. **Road transport** 🛣
   - Such a huge city which has area greater than the city of Delhi,India(1484 sq.km) would have people commuting to different corners via roads and would require efficient roads well connected within the city and also connecting the neighbouring areas. This business case aims to reduce redundancy of path and aims to provide adequate , good quality transport. It also aims to isolate the highways so that it would not intefere with the busy city.

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
 

## **Business cases 🤝 SDG Targets and Indicators** 
1. **TOURISM**
   - **Goal-8** : Promote sustained, inclusive and sustainable economic growth, full and productive employment and decent work for all.
   - **SDG Target 8.9** :  By 2030, devise and implement policies to promote sustainable tourism that creates jobs and promotes local culture and products.
   - **SDG Indicator** : **8.9.1** Tourism direct GDP (as a percentage of total GDP and in growth rate); and number of jobs in tourism industries (as a percentage of total jobs and growth rate of jobs, by sex) .
  
   - The SDG promotes tourism in showcasing local products and culture. It also promotes job opportunities and directly impact in revenue generation which is exactly what this business case is aiming for.
   - This would require us to find the quickest/shortest path that would join every tourist site and also make the path quicker connecting each site. Kruscal would be a good option to find the shortest path connecting every site. [Kruscal code](https://github.com/01fe23bcs117/NanditaGaitonde_portfolio/blob/main/codes/Kruscal.cpp)
  
2. **ENERGY GENERATION AND SUPPLY**
   - **SDG Goal-7** : Ensure access to affordable, reliable, sustainable and modern energy for all.
   - **SDG Target 7.1** :  By 2030, ensure universal access to affordable, reliable and modern energy services.
   - **SDG Indicator** : - **7.1.1** :  Percentage of household with access to electricity.           
                         - **7.1.2** : Percentage of household with primary reliance on clean fuels and technology.

   - Of 759 milion  people , 1 out of 10 do not have access to electricity and have to use biomass fuels such as charcoal, coal which is leading to death of children due to indoor pollution.
   - The SDG goal-7 aims to replace the open fires and outdated stoves to affordable and clean energy by 2030.
   - Energy efficiency and increase use of renewable sources contribute to seriousness of climate change  and reduce the risk of disasters.
   - We need to sort based on which areas needs to be supplied with energy and which is barren land for now. For that a sorting algorithm needs to be implemented. [Quick sort code](https://github.com/01fe23bcs117/NanditaGaitonde_portfolio/blob/main/codes/Quick%20sort.cpp)
  
3. **ROAD TRANSPORT**
   - **SDG Goal-9** : Make cities and human settlements inclusive, safe, resilient and sustainable 
   - **SDG Target 11.2** : By 2030, provide access to safe, affordable, accessible and sustainable transport systems for all, improving road safety, notably by expanding public transport, with special attention to the needs of those in vulnerable situations, women, children, persons with disabilities and older persons.
   - **SDG Indicator** : **11.2.1** : Proportion of the population that has convenient access to public transport, disaggregated by age group, sex and persons with disabilities.
  
   - The SDG aims on connecting all the major places and providing safety in transport inclusive of physically challenged and elderly people.
   - This comes in accordance with efficient land use planning , in the sense that how much area is used for roads and its connectivity. It mainly concentrated on residentials and employement generative areas.
     
