# Hash Tables
- Might be known as Hashes, Maps, Hash Maps, Dictionaries and Associative Arrays
- Can lookup stuff pretty fast --> O(1), way better than binary search O(log N).
- First item is called key, second item is called value (key value pairs)
---
- A Hash Fucntion must convert the same string to the same number every single time it's applied. If the hash function can return inconsistent results for a string, it is not valid.
- Fastest you can look up an element with an unordered array is 0(N), with an ordered array and binary search it's O(Log N), but with an hash map it's O (1),
---
## What about collisions?
- **Seperate Chaining**: When a collision occurs, instead of placing a single value in the cell - you can place a referance to an array there. In seperate chaining, you'd first hash the key, then look up for the cell associated with the key, and then you'd search the array in the cell linearly. Therefore the worst-case scenario for an hash table lookup is **O(N)**.
---
### Efficiency
Efficiency on a hash table relies on 3 factors.
1. How much data we're storing
2. How many cells are available
3. Which hash function we're using

- More collision means worse performance, therefore more cell with a better hash function leads to a better performance. However, while avoiding collisions is important, we also have to balance that with avoiding memory hogging.
- **Rule of Thumb**: For every 7 data elements stored in a hash table, it should have 10 elements.
- When you begind to add more data though, the computer will expand the hash table by adding more cells and changing the hash function so that the new data will be distributed evenly across the new cells.
- Hash tables can help eliminate long and hard to manage if-else conditions.
- More than one hash tables can be placed in an array to iterate thru different attributes of similar or the same representation of an object, or anything really.
---
### Hash Tables for Speed
- Even though a hash table mostly being used for key-value pairs - it can be also used even though your data doesn't exist as pairs.
- The trick here is that by placing each number in the hash table as a key, we can later look up each of those keys in one step. 
```cs 
// Array implementation --> 0(N)
int[] numbers = {61, 30, 91, 11, 54, 38, 72};
```

```cs
// Hash Table implementation --> O(1)
var numbers = new Hashtable() {
	{61, true}, {30, true}, {91, true}, {11, true}, {54, true}, {38, true}, {72, true}
};

// true
numbers[61];
```
---
### Array Subset Problem
- Let's say we need to determine whether one array is a subset of another array. See ```ArraySubset.cs```