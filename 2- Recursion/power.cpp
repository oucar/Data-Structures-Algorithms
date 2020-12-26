/* Challenge: Power of Given Number 
	multiplying m, n times

	2^5 = 2*2*2*2*2 --> 2^4*2
	power(m,n) = m*m*m*m.....*(n-1)*m
	power(m,n) = power(m,n-1)*m
*/
#include <iostream>

//Function declarations
int power(int mGiven, int nGiven);

int power(int mGiven, int nGiven) {

	if (nGiven == 0) return 1;

	else if (nGiven % 2 == 0) return power((mGiven * mGiven), nGiven / 2); // 2^8 = (2^2)^4

	else return mGiven*(power(mGiven * mGiven, (nGiven - 1) / 2)); // 2^9 = (2^2)^(2^2)*2

}//end power()


int main() {
	int m = 5;
	int n = 3; // 5^3 = 125

	std::cout << power(m,n);

	return 0;
}


