/* Indirect Recursion */
#include <iostream>

void func1(int n) {

	if (n > 0) {
		std::cout << n << " ";
		func2(n - 1);
	}//end if

}//end func1()

void func2(int n) {
	
	if (n > 1) {
		std::cout << n << " ";
		func1(n / 2);
	}//end if

}//end func2()


int main() {

	func1(20);

	return 0;
}


