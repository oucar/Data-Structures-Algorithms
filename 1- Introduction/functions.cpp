/* Functions: Piece of code which performs a spesific code, related group of instructions
* 
* C: Pass by value & Pass by address
* C++: Pass by value & Pass by address & Pass by reference
* 
* Modular programming / Procedural: Using functions
* Monolithic Programming: Everything inside the main function, not easy to develop
*/
#include <iostream>

//a and b are formal parameters
int add(int a, int b) { //PROTOTYPE OF A FUNCTION, HEADER
	int sum;			//
	sum = a + b;		//DEFINITION OF THE FUNCTION
	return sum;			//
}//end add()

int main()
{

	int x, y, sum;
	x = 10;
	y = 5;
	sum = add(x, y);
	//x and y are actual parameters that function takes
	std::cout << x << " + " << y << " = " << sum; //FUNCTION CALL
									
	



}//end main

