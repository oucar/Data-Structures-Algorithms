/* Nested Recursion */
#include <iostream>

int func(int n) {

	if (n > 100) {
		return n - 10;
	}//end if
	return func(func(n + 11));
}//end func1()


int main() {

	int nGiven = func(95);
	// last output of all recursions -> check debugger
	std::cout << nGiven << " "; 

	return 0;
}


