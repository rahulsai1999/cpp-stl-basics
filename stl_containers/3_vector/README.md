## Vector

A vector is a dynamically allocated array(dont' mention size). 

### Declaration
```
vector<datatype> vectorname;
vector<vector<int>> vector2dname;
```

### Functions

- **push_back(arg)**: insert element at the end of vector. (similar to list append in python)
- **pop_back()**: deletes the last element(does not return anything)
- **insert (itr,element) or (itr,count,element) or(itr,start,end):** inserts the element in vector where itr is pointed
- **erase(itr) or (itr_start,itr_end)**: erases the element as pointed by the itr or a range.
- **resize(size n, value)**: resizes to n elements. If more elements in the array present then deletes else adds the extra value mentioned.
- **vec1.swap(vec2)**: swaps the similar vectors.
- **clear()**: clears the element of the vectors.
- **size()**: returns true if empty
- **capacity()**: returns the number of elements that can be inserted.
- **at(pos)**: returns the element at pos index.
- **front() and back()**: returns the first and last element of the vector.