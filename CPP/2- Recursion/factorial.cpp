/* Challenge: Factorial */
#include <iostream>

int factorial(int n){
	if(n == 0) return 1;

	else if(n > 0) return factorial(n - 1) * n;

	return 0;
}

int factorialLoop(int n){
	int result = 1;

	for(int i = 1; i <= n; i++)
		result = result * i;
	
	return result;
}


int main() {

	int n = 5;

	std::cout << "Recursion: " << factorial(n) << std::endl;
	std::cout << "For loop: " << factorialLoop(n);

	return 0;
}


