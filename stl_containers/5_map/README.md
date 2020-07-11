## Map

- Maps are key-value pairs where eaach key is unique. All operations are O(n) complexity.
- Everything is arranged in an ascending order

### Declaration and Initialization

```
//declaration and init
map<datatype-key,datatype-value> name{{1,2},{2,3},{5,6}};

map<string,int> map2;

//assigning values to keys
map2["a"]=23;

//copy constructor using iterators
map<string,int> map3(map2.begin(),map2.end());

//copy constructor using map object
map<string,int> map4(map2);
```

### Functions

- at or [] : used for accessing and assigning values
- empty(),size(),max_size() : for reading the quantity of the map
- insert(pair) or insert(make_pair): for inserting new key-value pairs
- insert_or_assign(make_pair or insert): inserts if key not present or modifies the key
- find(key): returns the iterator of the specified key
- erase(itr) or erase(start_itr,end_itr): erases single or multiple
- begin(),end(): returns the iterator of the first or last element

## Usage of iterator

```
map<int,string>::iterator k;
k=m.find(5);
cout<<k->first; //returns key
cout<<k->second; //returns value