/* Challenge: Sum of Natural Number using Recursion   */
#include <iostream>


// Return the sum of natural numbers from 0 to nGiven using summation formula
int sumNaturalFormula(int n) {
	return (n*(n+1))/2;
}

// Now, do it using recursion like a real programmer : )

int sumNatural(int n){
	int sum = 0;
	if(n >= 0){
		sum = sum + n;
		return sumNatural(n-1) + sum;
	}
	return 0;
}


int main() {

	int n = 100;
	std::cout << "Recursion: " << sumNatural(n) << std::endl;
	std::cout << "Formula: " << sumNaturalFormula(n);

	return 0;
}


