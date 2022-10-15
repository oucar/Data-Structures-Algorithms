/* Tree Recursion */
#include <iostream>

void func(int n) {

	if (n > 0) {
		std::cout << n << " ";
		func(n - 1);
		func(n - 1);
	}//end if 

}//end func()


int main() {

	int nGiven = 3;
	func(nGiven); // Debug this! -> See how it's adding to and removing from the stack


	return 0;
}


