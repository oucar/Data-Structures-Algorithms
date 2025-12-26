## Recursion

- Recursive functions call themselves.
- Tracing: Graphing recursion using tree structure. (AKA: **Tracing tree of a recursive function**)
  - Code goes to the previous call after it is terminated.
- Recursion has two phases: Calling (ascending) and returning (descending) phase.
- Loops have only calling (ascending) phase.
- Activation record will be created for every new recursive call and its variables.
  - Activation records(for the function and its variables) will be deleted after the call ends
- Recursive functions: **O(n)**
  - given: _n_
  - function calls: _n+1_

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

- If you use `return func(n-1) + n;`, a new integer `n` will be created everytime you call `func(n-1)`. So, use `static int` and increment or decrement it. Check "Static and Global Variables in Recursion"
  - Static variables declared in functions, global variables declared outside of the function but they both function same. They will be created in code section.

---

### Types of Recursion

- **Tail**: Recursive function that calls itself, but that call is the **last statement of the function.** There MUST be nothing after the recursive function call.
  - Everything will be called in **calling time**.
  - Nothing will be called in ~~returning time~~.
  - Can easily be converted to loop.
    - But for `n = 3`, recursion will create 4 activasion records (Space complexity: Order of n) in the stack. Altough a loop only creates 1 activasion record (Space complexity: Order of 1).
    - So, a loop is more efficient than a tail recursion.

```cpp
   //...
	 func(n-1);     // tail recursion
	 func(n-1) + n; //not a tail recursion
   //...
```

- **Head**: Recursive function that calls itself, but that call is the **first statement of the function.** There MUST be nothing before the recursive function call.
  - Everything will be called in **returning time.**
  - Nothing will be called in ~~calling time.~~
  - It **cannot be easily** converted to a loop.
- **Tree**: [Check this](https://i.imgur.com/UI2haOK.png)<br>
  - Linear Recursion: Recursive function that calls itself one time.
  - Tree Recursion: Recursive function that calls itself **more than one time.**
  - **Time: O(2^n)**
  - Space: O(n)
- **Indirect**: More than one section calling **each other (circularly).**
- **Nested**: Will **pass the parameter as recursive call.**
  - Recursion inside a recursion.

---

- **Excessive Recursion** : If a function calls itself for same values, this function called excessive recursion. **FIBONACCI**
  **Reference and Recursion** : https://ibb.co/DWr4P7t

---

> Codes

:star: [Tracing](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/tracing.cpp)<br>
:star: [Static and Global Variables in Recursion!!](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/staticAndGlobal.cpp)<br>
:star: [Tree Recursion](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/treeRecursion.cpp)<br>
:star: [Indirect Recursion](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/nestedRecursion.cpp)<br>
:star: [Nested Recursion](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/indirectRecursion.cpp)<br>

---

> Challenges

:star: [Sum of Natural Numbers](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/sumNatural.cpp)<br>
:star: [Factorial of a Given Number](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/factorial.cpp)<br>
:star: [Power: n^m](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/power.cpp)<br>
:star: [Taylor Series](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/taylorSeries.cpp)<br>
:star: [Fibonacci](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/fibonacci.cpp)<br>
:star: [nCr](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/nCr.cpp)<br>
:star: [Tower of Hanoi](https://github.com/oucar/Data-Structures-Algorithms/blob/master/2-%20Recursion/TOH.cpp)<br>
