/* REFERENCE: Only available in C++!
* 
* Nickname given to a variable
* Will be used in parameter passing
* REFERENCES MUST BE INITIALIZED RIGHT AFTER YOU DECLARE THEM!

*/
#include <iostream>

int main()
{

	//Basically you're having two different names for the same variable in the memory
	int a = 10;
	int& r = a; //declaring reference (ampersend before variable = reference)
								// (star before variable = pointer)
	
	//They're the same value and they share the same address!
	std::cout << "a: "<< a << std::endl;
	std::cout << "&a: " <<&a << std::endl;
	std::cout << "r: "<< r << std::endl;
	std::cout << "&r: " << &r << std::endl;


	r++;
	std::cout << std::endl;
	std::cout << "r increased by one!" << std::endl;
	std::cout << "a++: " << a << std::endl;
	std::cout << "r++: " << r << std::endl;



}//end main

