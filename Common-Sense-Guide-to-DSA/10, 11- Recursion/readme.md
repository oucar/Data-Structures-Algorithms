### Recursion
- Recursion means "defining a problem in terms of itself". This can be a very powerful tool in writing algorithms. 
- Recursion comes directly from Mathematics, where there are many examples of expressions written in terms of themselves. For example, the Fibonacci sequence is defined as: **F(i) = F(i-1) + F(i-2)**
- Call Stack in Recursion works similar to Stack data structure (LIFO).
- The function that was called last (that is, most recently) is the function we need to complete first.
-  In the case of infinite recursion --> **Stack Overflow**
- Traversing thru the filesystem can be done easily using recursion.
- Useful algorithm when the algorithm needs to dig into an arbitrary number of levels deep into something.
---

### Helpful Trick for Using Ranged Arrays in C# (below 8.0)
```cs
// Using Range with Array
int[] arr = {1, 2, 3, 4, 5, 6};

int[] rangedArray = arr.ToList().GetRange(1, arr.Length - 1).ToArray();
```