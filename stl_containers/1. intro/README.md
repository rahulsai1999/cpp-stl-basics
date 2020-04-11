# C++ STL

## Pair

Pairs can store two heterogenous objects under one name

### Syntax
`pair<T1,T2>  pair1, pair2 ;`

### Initialisation

`pair<int,char> foo(10,'a')`

### Operations
- Operator = : assign values to a pair.
- swap : swaps the contents of the pair.
- make_pair() : create and returns a pair having objects defined by parameter list.
- Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.

> The code has usage of all the functions

---

## Tuple

Similar to pair, can store three heterogenous objects under one name

### Header

`#include<tuple>`

### Syntax

`tuple<T1, T2, T3> tuple1;`

### Initialisation

`tuple<int,char,int> foo (10,'x',12);`

### Operations

- Operator = : to assign value to a tuple
- swap : to swap value of two tuples
- make_tuple() : creates and return a tuple having - elements described by the parameter list.
- Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.
- Tuple_element : returns the type of tuple element
- Tie : Tie values of a tuple to its refrences.



