/* Challenge: Power of Given Number */
#include <iostream>

//Function declarations
int power(int nGiven, int mGiven);

int power(int nGiven, int mGiven) {

	if (mGiven == 0) return 1;
	else return power(nGiven, mGiven - 1) * nGiven; //power(2,0)*2 = 2, power(2,1)*2 = 2*2..
}//end power()


int main() {
	int n = 5;
	int m = 3; // 5^3 = 125

	std::cout << power(n, m);

	return 0;
}


