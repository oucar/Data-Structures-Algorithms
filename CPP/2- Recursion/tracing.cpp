/* Tracing */
#include <iostream>

void func1(int numGiven) {

	if (numGiven > 0) {
		// Output: 5 4 3 2 1 (Print and Call) 
		std::cout << numGiven; 
		func1(numGiven - 1);
	}//end if

}//end func1()

void func2(int numGiven) {
	
	if (numGiven > 0) {
		func2(numGiven - 1);
		// Output: 1 2 3 4 5 (Call and Print) 
		std::cout << numGiven; 
	}//end if

}//end func2()

void generalisingRecursion(int n) {

	if (n > 0) {
		// in calling time (5 4 3 2 1) --> Ascending
		std::cout << n;
		// in returning time ------> RECURSIVE FUNCTION
		generalisingRecursion(n - 1); 

		std::cout << std::endl;
		// in returning time  (10 10 10 10 10 ) --> Descending 
		std::cout << 10; 
		
	}//end if

}//end generalisingRecursion()

int main() {

	int num = 5;
	func1(num);
	std::cout << std::endl;
	func2(num);
	std::cout << "\n\n";
	generalisingRecursion(num);

	return 0;
}


