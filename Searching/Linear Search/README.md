# Linear Search
`Linear search` is a search algorithm that finds the position of a target value within an array.

## Algorithm
Linear search (also called sequential search) is a method for finding a target value within an array. It sequentially checks each element of the array until the target value is found or until all the elements have been checked. Linear search runs in at worst linear time and makes at most n comparisons, where n is the length of the list.

The pseudocode for linear search is as follows:
```
for each item in the list:
	if that item is the target value:
		stop search and return item's position
return -1
```

## Complexity
**Time complexity** - O(n), where n is the number of elements in the array.

**Space complexity** - O(1).

## Implementation

* [C++ Code](https://github.com/jainaman224/Algo_Ds_Notes/blob/master/Linear_Search/Linear_Search.cpp)