/* Nested Recursion */
#include <iostream>

//Function declarations
int func(int n);

int func(int n) {

	if (n > 100) {
		return n - 10;
	}//end if
	return func(func(n + 11));

}//end func1()


int main() {

	int nGiven = func(95);
	std::cout << nGiven << " "; //last output of all recursions -> check debugger

	return 0;
}


