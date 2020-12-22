/* Challenge: Sum of Natural Number using Recursion   */
#include <iostream>

//Function declarations
int sumNatural(int nGiven);		//O(n), would also be O(n) for a for loop. (But a loop would be better in case of space complexity.)
int sumNatural2(int nGiven);		
int sumNaturalFormula(int n);   //O(1)


//Return the sum of natural numbers from 0 to nGiven using recursion
int sumNatural(int nGiven) {
	static int sum = 0;

	if (nGiven >= 0) {
		sum = sum + nGiven;
		sumNatural(nGiven - 1);

		return sum;
	}//end if

	else return 0; 

}//end sumNatural()

/*
int sumNatural2(int nGiven) {

	if (nGiven >= 0) {

		return sumNatural2(nGiven-1) + nGiven;
	}//end if

	else return 0;
}*/

//Return the sum of natural numbers from 0 to nGiven using summation formula
int sumNaturalFormula(int n) {

	return (n*(n+1))/2;
}//int sumNaturalFormula()

int main() {

	int n = 100;
	std::cout << "Recursion: " << sumNatural(n) << std::endl;
	std::cout << "Formula: " << sumNaturalFormula(n);

	return 0;
}


