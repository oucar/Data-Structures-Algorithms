

## Array
* Collection of same typed elements.
* Arrays are **vector** variables.
* Size of an array can be decided in **runtime** in **C++**, but in **CLANG** it will be decided in **compile time.**
* Size of an array **CANNOT BE INCREASED.** But, its elements can be copied to a new, larger sized array.
* Memory for the array is **CONTIGUOUS**. For this reason, its size cannot be increased.
```cpp
int *A[3]; // array of integer pointers
```

### 2D Array

* Represent matrices.
* Elements will be stored linearly.


```cpp

//CLANG, C++
int arr[5];     // will be created in stack.
	        //memory will be allocated during runtime
int n;
std::cin >> n; //This operation is also allowed in C++
int A[n];
 ```


---
> Codes

:star: [Declaration - Static, Dynamic]()<br>
:star: [Increasing the size of an array (Copying its elements)]()<br>
:star: [2 Dimensional Array )]()<br>


---
