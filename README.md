## What is a Set??
### Set is a STL container used to store unique values.
### Values are stored in ordered state.
### No, Indexing, elements are identified by their own values.
### once value is inserted in a set, it cannot be modified.
## Advantages of Set
### --> Unique values
### --> Ordered values are required
### --> Dynamic size, no overflowing errors
### --> Considered faster as insertion,deletion,search T.C is O(logn)
## Disadvantages of Set
### --> Cannot access elements using indexing.
### --> More memory usage than array.
### --> Not suitable for large datasets.
## Declaration of a Set
```cpp
 #include <set>
 Set <data-type> setname;
```
### By default, values are stored in increasing order.
``` cpp
Set<datatype,greater <datatype> setname> --> For decreasing order.```