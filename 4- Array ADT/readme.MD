



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
* **Binary Search:** ---> **O(log(n))**
	* Elements must start already sorted!
	* Always splits the elements by two and search!
		*  low = A[0]
		* high = A[arr.A[size]]
		* middle = (l+h)/2  ---> **FLOOR** 
	*  Number of calls depends on height of the tree! 
		* 2<sup>4</sup> = 16
			*  4 = **log <sub>2</sub>16**
			*  Height of the tree is **4**
---
### Get, Set, Avg, Max, Sum
* **Get:** ---> O(1)
	 ```cpp
	 if(index >=0 && index < length)
		 return A[index];
	 ```
* **Set:** ---> O(1)
	```cpp
	if(index >= 0 && index < length)
		A[index] = x;
	```
* **Max:** ---> O(n)
	```cpp
	max = A[0];
	for(int i = 0; i < length; i++){
		if(A[i] > max)
			max = A[i];
	}//end for
	return max;
	```
* **Min:** ---> O(n)
	```cpp
	min = A[0];
	for(int i = 0; i < length; i++){
		if(A[i] < max)
			min = A[i];
	}//end for
	return min;
	```
* **Sum:** ---> O(n)
	```cpp
	//Iterative
	total = 0;
	for(int i = 0; i < length; i++)
		total = total + A[i]
	return total;
	
	//Recursive
	int sum(Arr, n){
		if(n < 0)
			return 0;
		else
			return sum(A,n-1) + A[n];
	}
	```
* **Avg** ---> O(n)
	```cpp
	//Iterative
	total = 0;
	for(int i = 0; i < length; i++)
		total = total + A[i]
	return total/n;
	```
---
* Merging can only be done in sorted list!
*
	```cpp
	//Returning a struct:
	struct Array* merge(){
	
		struct Array* arrMerged;
		arrMerged = new Array;
		arrMerged->length = (arr1->length + arr2->length);
		arrMerged->size = 10;
		return arrMerged;
	}
	```
---
> Challenges

:star: [Array ADT - **CLANG**]()<br>
:star: [Linear Search]()<br>
:star: [Binary Search]()<br>
:star: [Get(), Set(), Avg(), Max(), Min(), Sum()]()<br>
:star: [Reversing and Shifting **TODO:** Shifting]()<br>
:star: [Check If an Array is Sorted and MORE!]()<br>
:star: [Merging an Array (returning a struct!)]()<br>
:star: [Finding a Single Missing Element]()<br>
:star: [Finding Multiple Missing Elements]()<br>
:star: [Finding Duplicates in a Sorted Array]()<br>
:star: [Finding Duplicates in a Sorted Array using **HASHING**]()<br>
:star: [Finding Duplicates in an Unorted Array]()<br>
:star: [Finding a Pair of Elements with Sum of K in a Sorted Array]()<br>
:star: [Finding Max and Min in a Single Scan]()<br>



