/* Tracing */
#include <iostream>

void func1(int numGiven) {

	if (numGiven > 0) {
		std::cout << numGiven; // Output: 5 4 3 2 1 (Print and Call) 
		func1(numGiven - 1);
	}//end if

}//end func1()

void func2(int numGiven) {
	
	if (numGiven > 0) {
		func2(numGiven - 1);
		std::cout << numGiven; // Output: 1 2 3 4 5 (Call and Print) 
	}//end if

}//end func2()

void generalisingRecursion(int n) {

	if (n > 0) {
		
		std::cout << n;// in calling time (5 4 3 2 1) --> Ascending
		generalisingRecursion(n - 1); // in returning time ------> RECURSIVE FUNCTION

		std::cout << std::endl;
		std::cout << 10; // in returning time  (10 10 10 10 10 ) --> Descending 
		
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


