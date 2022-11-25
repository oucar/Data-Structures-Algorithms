### Recursion
---
- Recursion is a process (most likely a function) that calls itself.
- Call stack: is a stack data structure. Anytime a function is invoked it is placed (or pushed) on the top of the call stack. When Javascript engine sees the return keyword or when the function ends, the compiler will remove (pop)
- We are normally used to functions being pushed on the call stack and popped off when they are done, but when we write recursive functions, we keep pushing new functions onto the call stack.