


## Array ADT 
* ADT = Representation of data + Operations
  *  Append - at the end of the list. 
  *  Insert - to a given index.
```cpp
/*      1      */
int A[10]; //Size = 10, Length = 10

/*      2      */
int *B;
int size;
B = new int[size]
```
### Search Methods
* **Linear Search:** Checking the elements one by one --> **O(n)**
	* **Transposition:** A way to make the search procedure faster. Whenever you search for an element and found it, swap it with previous element so that next time you can find it easier. An alternative to memoization. You can also move it to head. **(This step is not required but highly suggested!)**
* **Binary Search:** --> **O(log(n))**
	* Elements must start already sorted!
	* Always splits the elements by two and search!
		*  low = A[0]
		* high = A[arr.A[size]]
		* middle = (l+h)/2  --> **FLOOR** 
---
> Challenges

:star: [Array ADT - **CLANG**]()<br>
:star: [Array ADT - **C++**]()<br>


