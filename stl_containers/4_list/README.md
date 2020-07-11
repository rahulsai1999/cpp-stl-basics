## List
Array and Vector are contiguous i.e store their data on continuous memory, thus insert operation at the middle of them is very costly. 
(in terms of number of operaton and process time) because we have to shift all the elements, linked list overcome this problem. 
Linked list can be implemented by using the list container.

### Declaration

```
list<int> listname {elements,one,by,one};
```

### Functions

- **insert(itr,element) or (itr,count,element) or (itr,start_itr,end_itr)** : inserts elements similar to the vector insert but with lesser overhead.
- **push_back(element) or push_front(element)** : push_back adds to the end, push_front adds to the begin.
- **pop_back() or pop_front()** : removes elements from the end or from the front.
- **empty()** : returns true if empty
- **size()** : find the number of elements present in the list.
- **front() and back()** : returns the first or last element of the list.
- **swap()** : swaps two lists of the same datatype and size
- **reverse()** : reverses a list
- **sort() or sort(compare_function)** : sorts the list in ascending order or according to the compare_function.
- **splice(itr,list_to_be_transfer)** or **(itr,list_2_b_trans,itr_pos)** or **(itr,list_2_be_trans,itr_start,itr_end)** : used to transfer elements from one list to another.
- **merge()** : merge two sorted lists.
- Lexicographic comparison is also available