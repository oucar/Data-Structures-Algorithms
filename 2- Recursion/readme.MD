### Recursion 

* Recursive functions call themselves. 
* Tracing: Graphing recursion using tree structure. (AKA: **Tracing tree of a recursive function**)
  * Code goes to the previous call after it is terminated. 
* Recursion has two phases: Calling (ascending) and returning (descending) phase. 
* Loops have only calling (ascending) phase.


```
//Prints and then calls

void fun(int n){
	if(n>0){
		std::cout << n;
		fun(n-1);
	}	
}

//Output: 321
```


```
//Calls the prints

void fun(int n){
	if(n>0){
		fun(n-1);
		std::cout << n;
	}	
}

//Output: 1 2 3
```



> Codes

:star: [Tracing]()<br>
