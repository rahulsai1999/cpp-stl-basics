## Array

Fixed size one or two dimensional array.

### Declaration:
```
array<int,4> arrayname={initial,elements,here}
```

### Functions

- **at(arg):** arrayname.at(1) similar to arrayname[1]
- **front() and back():** returns the first and last element of the array
- **fill(arg):** fills the array at all indices with the given value
- **firstarr.swap(secondarr)**: swaps two arrays iff same size and datatype
- **empty():** if empty or not
- **size():** length of the array (filled)
- **max_size():** maximum size defined for the array
- **begin():** returns an iterator pointing to the first element of the array
- **end():** returns an iterator pointing to the last element of the array


### Operators

The normal comparison or equate operators can be used with the array. 