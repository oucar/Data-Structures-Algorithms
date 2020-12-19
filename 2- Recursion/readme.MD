
### Recursion 

* Recursive functions call themselves. 
* Tracing: Graphing recursion using tree structure. (AKA: **Tracing tree of a recursive function**)
  * Code goes to the previous call after it is terminated. 
* Recursion has two phases: Calling (ascending) and returning (descending) phase. 
* Loops have only calling (ascending) phase.
* Activation record will be created for every new recursive call and its variables.
  * Activation records(for the function and its variables) will be deleted after the call ends
* For most ( if actual parameter is (*n-1*) )recursive functions: **O(n)**
  * given: *n*
  * function calls: *n+1*

 ```cpp

std::cout << n;// (5 4 3 2 1) --> Ascending (Calling time)
generalisingRecursion(n - 1); // ------> RECURSIVE FUNCTION (Returning Time)
std::cout << 10; // (10 10 10 10 10 ) --> Descending (Returning Time)
std::cout << n;// (1 2 3 4 5) --> Descending


```
---

> Codes

:star: [Tracing]()<br>
