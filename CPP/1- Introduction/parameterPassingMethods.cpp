/* Parameter Passing Methods:
* 
* Pass by value: Any changes are done to formal parameters will not reflect in actual parameters.
*				 -Use it when you don't need to change actual parameters
* Pass by address: Any changes is done inside a function will modify actual parameters.
*				   -Suitable for modying the actual parameters!
* Pass by reference:
*				    -References don't take any memory!	(only in cpp)
*					-Performance is same with pass/call by address
* 
*/
#include <iostream>


//Using pass by value:
//NOTE: FORMAL PARAMETERS SWAPPED BY ACTUAL PARAMETERS REMAIN SAME!
void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}//end swapByValue()


//Using pass by address:
//USES POINTERS!
void swapByAddress(int* a, int* b) { //takes addresses as actual parameters and uses values they point to
	int temp = *a; //temp is equal to the value it's pointing to
	*a = *b;
	*b = temp;
}//end swapByAddress

void swapByReference(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}//end swapByReference()

int main()
{
	//Pass by value:
	//Formal parameters swapped (that you put in the function) but it doesn't change 
	//the actual parameters
	int aValue = 1;
	int bValue = 2;
	swapByValue(1, 2);
	std::cout << "By value: "<< aValue << " " << bValue <<std::endl;

	//Pass by address : Any changes is done inside a function will modify actual parameters.
	int aAddress = 1;
	int bAddress = 2;
	swapByAddress(&aAddress,&bAddress);
	std::cout << "By address: " << aAddress << " " << bAddress << std::endl;

	//Pass by reference : (only in CPP)
	int aReference = 1;
	int bReference = 2;
	swapByReference(aReference, bReference);
	std::cout << "By reference: " << aReference << " " << bReference << std::endl;
									
}//end main

