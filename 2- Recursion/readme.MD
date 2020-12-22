

### Recursion 

* Recursive functions call themselves. 
* Tracing: Graphing recursion using tree structure. (AKA: **Tracing tree of a recursive function**)
  * Code goes to the previous call after it is terminated. 
* Recursion has two phases: Calling (ascending) and returning (descending) phase. 
* Loops have only calling (ascending) phase.
* Activation record will be created for every new recursive call and its variables.
  * Activation records(for the function and its variables) will be deleted after the call ends
* Recursive functions: **O(n)**
  * given: *n*
  * function calls: *n+1*

 ```cpp

std::cout << n;// (5 4 3 2 1) --> Ascending (Calling time)
generalisingRecursion(n - 1); // ------> RECURSIVE FUNCTION (Returning Time)
std::cout << 10; // (10 10 10 10 10 ) --> Descending (Returning Time)
std::cout << n;// (1 2 3 4 5) --> Descending
```
---

### Recurence Relation - Time Complexity of Recursion
It depends on the function.
<p align="center">
	<img src="https://i.imgur.com/BBsxClg.png">
</p>

```cpp
void func(int n) {		 // i(n)
	if (n > 0) {   		 // 1
		std::cout << n;  // 1
		func(n - 1);     // i(n-1)
	}//end if
}// end func()
// O(n)

```
---
### Static and Global Variables in Recursion 

* If you use ```return func(n-1) + n;```, a new integer ```n``` will be created everytime you call ```func(n-1)```. So, use ```static int``` and increment or decrement it. Check "Static and Global Variables in Recursion"
	*  Static variables declared in functions, global variables declared outside of the function but they both function same. They will be created in code section.




---

> Codes

:star: [Tracing]()<br>
:star: [Static and Global Variables in Recursion!!]()<br>
