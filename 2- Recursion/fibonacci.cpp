/* Fibonacci series using Recursion 

	0 1 1 2 3 5 8 13 //initially you must have 2 terms

	every term is addition of previous 2 terms.


	fib(n) = fib(n-2) + fib(n-1)            ---->   n>1
	fib(n) = 1					            ---->   n=1
	fib(n) = 0                              ---->   n=0

*/
#include <iostream>


int fib(int n) {

	if (n <= 1) return n;

	else return fib(n - 2) + fib(n - 1);
	
}//end int fib()

// 0 1 1 2 3 5 8 13
int fibIterative(int n) { 

	int firstTerm = 0, secondTerm = 1, sum = 0;

	if (n <= 1) return n;

	else {

		for (int i = 2; i <= n; i++) {
			sum = firstTerm + secondTerm;
			firstTerm = secondTerm;
			secondTerm = sum;
		}//end for
		
		return sum;
	}//end else
}//end int fibIterative()


/* MEMOIZATION -- Storing the results */
/* in fib(), you're calculating same values over and over again. So, declare and array and hold the values you calculated.*/
int betterFib(int n) {

	static int F[10]; //Or use a vector instead
	for (int i = 0; i < 10; i++) F[i] = -1;
	
	if (n <= 1) {
		F[n] = n;
		return n;
	}//end if

	else {

		if (F[n - 2] == -1) F[n - 2] = fib(n - 2);
		if (F[n - 1] == -1) F[n - 1] = fib(n - 1);

		return F[n - 2] + F[n - 1];
	}//end else
}


int main() {

	/// O(2^n) :( 
	std::cout << fib(7) << std::endl; 
	std::cout << fibIterative(7) << std::endl; // -> O(n) :)) 
	std::cout << betterFib(7) << std::endl; // -> O(n)!!  :) --> Memoization
	return 0;
}


