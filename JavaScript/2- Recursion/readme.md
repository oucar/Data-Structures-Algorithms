### Recursion
---
- Recursion is a process (most likely a function) that calls itself.
- Invoke the same function with a different input until you reach your base case.
- Base case is a situation when the recursion ends (Most important concept to understand!)
- Call stack: is a stack data structure. Anytime a function is invoked it is placed (or pushed) on the top of the call stack. When Javascript engine sees the return keyword or when the function ends, the compiler will remove (pop)
- We are normally used to functions being pushed on the call stack and popped off when they are done, but when we write recursive functions, we keep pushing new functions onto the call stack.

#### Helper Method Recursion
- 2 functions, one actual function (outer) and one inner helper recursive function.


#### Where things can go wrong:
- You should always have a base case. 
- Always return something and make sure that you're returning the thing you want to return.
- Stack overflow: Too many functions trying to be called (never stopping)

:star: Starting from num, count to 0. countDown.js
:star: Calculate the sum of n numbers. sumRange.js
:star: Factorial. factorial.js
:star: --Helper Method Recursion-- Collect all the odd values in an array. collectOddValues.js