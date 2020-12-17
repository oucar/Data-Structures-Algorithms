

* Data structures: The way you organize the data during execution time in your program.
* Database: Arranging the data in some relational model in a permanent storage.
* Big Data: Storing and analyzing huge amount of data.

---
* Data and programs have to be brought to the main memory in order to use them.
* C doesn't have built-in data structures. C is a subset of C++. 
*  Modular programming / Procedural: Using functions
* Monolithic Programming: Everything inside the main function, not easy to develop
---
* Members of STRUCT: Public by default!
* Members of Class: Private by default!
---
* Pass/call by value: Any changes are done to formal parameters will not reflect in actual parameters.
* Pass/call by address: Any changes is done inside a function will modify actual parameters.
* Arrays cannot be passed by value. They always passsed by address. 
---
* Program: Set of instructions which performs operations on data.
* Structure: Collection of related (similar) data members under one name.
* Array: Collection of similar data elements.
* Pointer: stores address of data! not data itself
---
#### Physical data structures: Arrays, Metrices, Linked List
> They define how the data is organized in the memory 
  - Array
    - Has fixed (static) size
    - Can be allocated in heap or in stack.
  - Linked List
     - Has dynamic size
     - Always created in the **heap!** (head pointer can be in stack)
     
#### Logical data structures: Stack, Queues, Trees, Graph, Hash Tables 
>They define how the data can be utilized, how the arrangment is and how it should be utilized.
>They are implemented **using physical data structures!** 
- Stack (Linear) --> LIFO
- Queue (Linear) ---> FIFO
- Tree (Non-linear) 
- Graph (Non-linear)
- Hash Table (Tabular)

---
## STACK VS HEAP MEMORY: 

* Static memory allocation: means, that the memory for your variables is allocated **when the (actuallly before the) program starts.** The size is **fixed** when the program is created. It applies to global variables, file scope variables, and variables qualified with static defined inside functions.
* Dynamic memory allocation: You now control the exact size and the lifetime of these memory locations. If you don't free it, you'll run into **memory leaks**, which may cause your application to crash, since at some point of time, system cannot allocate more memory.

* Stack Memory:  
  - When you declare a variable, their memory will be allocated in the stack. (AKA Activasion record) --> Static memory allocation
  - Actision record for function's variables will be removed from the stack when you no longer call those functions.
  - Data (Activasion Record) you allocated first will be on the bottom, most recently created on the top. Starts deleting from top to bottom. --> This is why it's called stack.
  - Computer scientists don't deal with memory allocation.
* Heap Memory: 
  - Stack memory is organized, heap memory is unorganized.
  - It's used like a research when needed, but also has to be released after used. So that other applications can use it.
  - Program cannot access heap memory directly. But it can access it using a pointer.
  - Memory for the pointer will be allocated in the stack. ```(int *p;)``` //takes 2 or 4 bytes
  - Data that pointer points to will be allocated in the heap. ```p = new int[5]```)//takes 10 or 20 bytes (depends on the compiler)
  - ```p = NULL;``` --> this doesn't clear the heap!!
  - ```delete []p;``` --> will clear the heap.

 - A static object gets its memory pre-allocated before runtime, so if you define a static object to have an array 
of length 5, its length cannot be changed at runtime. A dynamic object gets it memory allocated at runtime, thus you need to use a pointer to 
address it as it was not is.
- Main memory divided into segments and we usually assume that they are 64 kb each.
- Programs doesn't directly access to heap memory, but we can access to heap memory using pointers 
- Whenever you declare something, that definitely allocates memory in stack and then we can access to heap memory using pointers.
-  Destructors are used when dynamic memory is used. (Array, pointer etc)
- Size of pointer takes 8 bytes in latest compilers (64 bit machines), but it used to take 4 bytes

---
## ADT - Abstract Data Type

* Data Type: Representation of data, operations on data
  * Allowed operations on integer: +,-,/,//,%,++,--
* Abstract: Hiding internal details **(You don't need to know how above operations are performed) **
* Abstract Data Type:  type (or class) for objects whose behaviour is defined by a set of value and a set of operations.
* Primitive Data Types: boolean, char, int, long, float...
* Non-Primitive Data Types: string, array... 


### Example: List ADT

List -> 8,3,9,4,6,10,12

  Things you need to have above list in your program:
* Data: 
	* Space for storing elements
	* Capacity: Maximum allowed size
	* Size: Current size of the list
* Operations: 
	* Adding ```add(x)```
	* Removing ```remove(x)```
	* Search ```find(x)```
		...
---
## Time and Space Complexity


![Time and Space Complexity Cheat Sheet](
https://i.imgur.com/sh9wysY.jpg)

---

> Reminders

:star: [Array](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/array.cpp)<br>
:star: [Structure](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/structure.cpp)<br>
:star: [Pointer](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/pointer.cpp)<br>
:star: [Reference](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/reference.cpp)<br>
:star: [Pointer to Structure](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/pointerToStructure.cpp)<br>
:star: [Functions](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/functions.cpp)<br>
:star: [Parameter Passing Methods](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/parameterPassingMethods.cpp)<br>
:star: [Array as Parameter](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/arrayAsParameter.cpp)<br>
:star: [Structure as Parameter](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/structureAsParameter.cpp)<br>
:star: [Structures and Functions](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/structuresAndFunctions.cpp)<br>
:star: [Object Oriented Programming - 1](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/OOP.cpp)<br>
:star: [Object Oriented Programming - 2](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/OOP_more.cpp)<br>
:star: [C-LANG to C++](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/cToCpp.cpp)<br>
:star: [Templates](https://github.com/oucar/Data-Structures-Algorithms/blob/master/1-%20Introduction/templates.cpp)<br>

