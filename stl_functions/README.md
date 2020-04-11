# C++ STL Algorithms - Jonathan Boccara

https://www.youtube.com/watch?v=2olsGf6JIkU

## Lands of Permutation

### Province of Heaps

- Heap is a DS representing a tree but has a property that every parent node is greater than the children node. It can be represented as a range by squashing down each row and combining them.
- Traversing the child node is easier as you just need to traverse multiples of 2s
- Able to get the max element of a collection in the least time (pop first element)

```
// it_begin and it_end are iterators of a collection eg. vector<int> numbers

make_heap(it_begin,it_end)

numbers.push_back(x)
push_heap(it_begin,it_end)

//gets the largest element
pop_heap(it_begin(),it_end())
numbers.pop_back();


```

### Shore of Sorting

- **sort** completely sorts the collection 
- **partial_sort** sorts the collection from the begin to the specified point
- **nth_element** takes begin, element index and the end and places the element as if the collection is in a sorted order i.e. left side of element is smaller than it but in unspecified order and similarly the right side
- **sort_heap** function for repeated pop_heap and sorting the collection
- **inplace_merge** incremental step to merge sort two sorted halves merges into a sorted collection

### Region of Partitioning

- **partition_point**


### Rotate Things

- **rotate** removes from end and puts at start
- **shuffle** shuffles the collection randomly
- **prev_permutation** and **next_permutation** helps to go through the permuations of the order of the collection
- **reverse** reverses the order of elements

### Secret Runes

- **stable_(anything)** (sort or partition) : maintains the same relative order 
- **is_(anything)** (sorted, partitioned, heap): checks whether it is that
- **is_(anything)_until** (sorted, partitioned, heap): returns iterator till where it is that


## Land of Queries

- count
- accumulate
- partial_sum
- inner_product
- adjacent_difference
- sample