/* Taylor series: https://www.udemy.com/course/datastructurescncpp/learn/lecture/13123978#questions

	Sum of n numbers: sum(n-1)+n
	fact of n numbers: fact(n-1)*n
	power:  power(x,n-1)*x

	e^x --> e(x,4) --> 1+(x/1!)+(x^2/2!)+(x^3/3!)+(x^4/4!)
	https://ibb.co/cQwJGkX


*/
#include <iostream>

//function declarations
double e(int x, int n);						//Traditional O(n^2)
double horner(int x, int n);				//Horner's Rule --> Faster O(n)
double iterative(int x, int n);				//Iterative --> O(n) --> Use this.

double e(int x, int n) { 

	static double p = 1, f = 1, sum;

	if (n == 0) return 1;

	else {
		sum = e(x, n - 1);
		p = p * x;
		f = f * n;
		return sum + p / f;
	}//end else
}//end double e()


/*
	1 + (x/1) + (x^2/1*2) + (x^3/1*2*3... )
	https://www.udemy.com/course/datastructurescncpp/learn/lecture/13123986#questions
*/
double horner(int x, int n) {

	static double sum;

	if (n == 0) return sum;

	else {
		sum = 1 + ((x * sum) / n);
		return horner(x, n - 1);
	}//end else

}//end double horner()

double iterative(int x, int n) {

	static int sum = 1;
	double numerator = 1, denominator = 1;

	for (int i = 0; i <= n; i++) {

		numerator *= x;
		denominator *= n;

		sum += numerator / denominator;
	}//end for

	return sum;
}//end double iterative()


int main() {

	std::cout << e(4, 15);

	return 0;
}


