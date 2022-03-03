/* Static and Global Variables in Recursion */
#include <iostream>

int func(int n) {
	// will be called in returning time!  (starting from func(0) + 1)
	if (n > 0) return func(n - 1) + n;
	 // func(0) + 1 -> func(1) + 2 -> func(2) + 3 -> func(3) + 4 -> func(4) + 5 -> func(5) 
	return 0;						 
}//end func()						


int func2(int n) {
	// when a variable is declared as static, space for it gets allocated for the lifetime of the program.
	static int x = 0;
	if (n > 0) {
		x++;
		// will be called in returning time! (starting from func2(0) + 5 to func2(5)) 
		// so, you will be adding x (5) to every func2 call.
		 // func2(0) + 5 -> func2(1) + 5 -> func2(2) +5 -> func2(3) + 5 -> func2(4) + 5 -> func2(5) 
		return func2(n - 1) + x; 
	}//end if					

	return 0;
}//end func2()

int main() {

	int nGiven = 5;

	int v = func(nGiven);
	std::cout << v << std::endl;

	int v2 = func(nGiven);
	std::cout << v2 << std::endl; 
	
	int vStatic = func2(nGiven);
	std::cout << vStatic << std::endl;

	int vStatic2 = func2(nGiven);
	std::cout << vStatic2;		  //notice the difference!


	return 0;
}


