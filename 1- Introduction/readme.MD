Data structures: The way you organize the data during execution time in your program.

Program: Set of instructions which performs operations on data.
Structure: Collection of related (similar) data members under one name.
Array: Collection of similar data elements.
Pointer: stores address of data! not data itself

Physical data structures: Arrays, Metrices, Linked List -> They define how the data is arranged in the memory 
Logical data structures: Stack, Queues, Trees, Graph, Hashing -> They define how the data can be utilized, how the arrangment is and how it should be utilized.

C doesn't have built-in data structures. C is a subset of C++. 

Program doesn't directly access to heap memory, but we can access to heap memory using pointers 
Whenever you declare something, that definitely allocates memory in stack and then we can access to heap memory using pointers.
Size of pointer takes 8 bytes in latest compilers (64 bit machines), but it used to take 4 bytes

A static object gets its memory pre-allocated before runtime, so if you define a static object to have an array 
of length 5, its length cannot be changed at runtime. A dynamic object gets it memory allocated at runtime, thus you need to use a pointer to 
address it as it was not is
Modular programming / Procedural: Using functions
Monolithic Programming: Everything inside the main function, not easy to develop

Pass/call by value: Any changes are done to formal parameters will not reflect in actual parameters.
Pass/call by address: Any changes is done inside a function will modify actual parameters.

Arrays cannot be passed by value. They always passsed by address. 

Destructors are used when dynamic memory is used. (Array, pointer etc)

Members of STRUCT: Public by default!
Members of Class: Private by default!

STACK VS HEAP MEMORY: 

