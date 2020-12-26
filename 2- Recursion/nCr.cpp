/* Combination 

	nCr = n!/(r!(n-r)!)
*/
#include <iostream>

int fact(int n) {

	if (n == 0) return 1;
	else return (fact(n-1) * n);

}

int c (int n, int r ) { // O(n)

	int t1, t2, t3;

	t1 = fact(n);
	t2 = fact(r);
	t3 = fact(n - r);

	return t1 / (t2 * t3);

}//end function



/*  RECURSIVE - Using Pascal's Triangle  https://www.livescience.com/51238-properties-of-pascals-triangle.html */

int pasc(int n, int r) {

	if (r == 0 || n == r) return 1;
	else return pasc(n - 1, r - 1) + pasc(n - 1, r);

}

int main() {

	std::cout << c(5, 2) << std::endl;
	std::cout << pasc(5, 2) << std::endl;

	return 0;
}


