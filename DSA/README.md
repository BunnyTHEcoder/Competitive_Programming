## Data Structure and Types

### What are Data Structures:
```
Data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

Depending on your requirement , it is important to choose the right data structure. For example, if you want to store data sequentially in the memory, then you can go for the Array data structure.
```
### Types of Data Structure:
```
Basically, data structures are divided into two categories:
```
### Linear data structure
### Non-linear data structure
```
Let's learn about each type in detail.
```
### Linear data structures
```
In linear data structures, the elements are arranged in sequence one after the other. Since elements are arranged in particular order, they are easy to implement.

However, when the complexity of the program increases, the linear data structures might not be the best choice because of operational complexities.
```
### Popular linear data structures are:

### 1. Array Data Structure
```
In an array, elements in memory are arranged in continuous memory. All the elements of an array are of the same type. And, the type of elements that can be stored in the form of arrays is determined by the programming language.

To learn more, visit My Repo Competitive_Programming/DSA/Array.
```
### 2. Stack Data Structure
```
In stack data structure, elements are stored in the LIFO principle. That is, the last element stored in a stack will be removed first.

It works just like a pile of plates where the last plate kept on the pile will be removed first.

In a stack, operations can be perform only from one end (top here).
```
### 3. Queue Data Structure
```
Unlike stack, the queue data structure works in the FIFO principle where first element stored in the queue will be removed first.

It works just like a queue of people in the ticket counter where first person on the queue will get the ticket first.
 
In a queue, addition and removal are performed from separate ends.
```
### 4. Linked List Data Structure
```
In linked list data structure, data elements are connected through a series of nodes. And, each node contains the data items and address to the next node.

To learn more, visit My Repo Competitive_Programming/DSA/Linked List.
```
### Non linear data structures
```
Unlike linear data structures, elements in non-linear data structures are not in any sequence. Instead they are arranged in a hierarchical manner where one element will be connected to one or more elements.
```
### Popular Non-linear data structures are :

### 1. Graph Data Structure

In graph data structure, each node is called vertex and each vertex is connected to other vertices through edges.

Popular Graph Based Data Structures:

1.Spanning Tree and Minimum Spanning Tree
2.Strongly Connected Components
3.Adjacency Matrix
4.Adjacency List

### 2. Trees Data Structure
```
Similar to a graph, a tree is also a collection of vertices and edges. However, in tree data structure, there can only be one edge between two vertices.

Popular Tree based Data Structure

1.Binary Tree
2.Binary Search Tree
3.AVL Tree
4.B-Tree
5.B+ Tree
6.Red-Black Tree
```
## Linear Vs Non-linear Data Structures

Now that we know about linear and non-linear data structures, let's see the major differences between them.

### Linear Data Structures	
```
* The data items are arranged in sequential order, one after the other.	
* All the items are present on the single layer.	
* It can be traversed on a single run. That is, if we start from the first element, we can traverse all the elements sequentially in a single pass.	
* The memory utilization is not efficient.	
* The time complexity increase with the data size.	
* Example: Arrays, Stack, Queue	Example: Tree, Graph, Map
```
### Non-linear Data Structures
```
* The data items are arranged in non-sequential order (hierarchical manner).
* The data items are present at different layers.
* It requires multiple runs. That is, if we start from the first element it might not be possible to traverse all the elements in a single pass.
* Different structures utilize memory in different efficient ways depending on the need.
* Time complexity remains the same.
Example: Tree, Graph, Map
```