### LinkedList

A [linked list](https://en.wikipedia.org/wiki/Linked_list) is a linear data structure, in which the elements are not stored at contiguous memory locations (like an array). The elements are **linked** using pointers. Linked lists are among the simplest and most common data structures. 

In basic terms, each element points to the next. A linked list consists of nodes where each node contains data pertaining to that node and a reference (address) of the next node. 

Note: This article pertains information about singly linked list.

## Types of Linked List

* [Singly linked list]()
* [Circular linked list](https://github.com/jainaman224/Algo_Ds_Notes/tree/master/Circular_Linked_List)
* [Doubly linked list](https://github.com/jainaman224/Algo_Ds_Notes/tree/master/Doubly_Linked_List)

![Linked List Picture](https://cdn-images-1.medium.com/max/2600/1*GOKmkucFHN_gmTMUtyC2sQ.png)

## Advantages 

* Linked list is a  **Dynamic Data Structure**. Meaning it's size can grow and shrink during runtime. 
* Insertion and Deletion operations are easier as compared to arrays. 

## Disadvantages

* They use more memory than arrays because they use pointers.
* Accessing an element has to be done sequentially, i.e, start from the first node. 
* Nodes are stored incontigously which increases time required to access individual elements.

## Applications

* Implementation of stacks and queues can be done using linked list.
* Music Player: Songs are linked to previous and next song. 
* Implementation of graphs.
* Implementation of hash maps. 
* Performing arithmetic operations on long integers. 

## Implementation
The links provided below are for singly linked lists.
* [C++ Code](https://github.com/jainaman224/Algo_Ds_Notes/blob/master/Linked_List/Linked_List.cpp)





## Time Complexity

- [Single Linked List](Single_Linked_List.cpp)

    Single_Linked_List is a one-way, one-way list with the simplest structure of the Linked List. 
    
    Time complexity = Θ(n)

- [Doubly Linked List](DoublyLinkedList.cpp)

    DoublyLinkedList is not a one-way connection, but a left-right linked list. 
    
    Time complexity = Insert at beginning or end & Delete at beginning or end : O(1), Search : O(n), Access : O(n)

- [Circular Linked List Operations](Circular%20Linked%20List%20Operations.cpp)

    Circular Linked List Operation puts the linked list in the want position. 

    Time complexity = O(n)