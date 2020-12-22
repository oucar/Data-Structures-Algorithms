/* Challenge: Factorial */
#include <iostream>

//Function declarations
int factorial(int nGiven);
int factorialLoop(int nGiven);

int factorial(int nGiven) {

	if (nGiven == 0) return 1;

	else if (nGiven > 0) return (factorial(nGiven - 1) * nGiven);

	return 0;
}//end int factorial()

int factorialLoop(int nGiven) {

	int fact = 1;

	for (int i = 1; i <= nGiven; i++) 
		fact = fact * i;
	
	return fact;
}//end int factorialLoop()


int main() {

	int n = 5;

	std::cout << "Recursion: " << factorial(n) << std::endl;
	std::cout << "For loop: " << factorialLoop(n);

	return 0;
}


