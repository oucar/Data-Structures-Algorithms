/* Array Declerations 

They all will be done during runtime. */

#include <iostream>


int main() {

	int A[5];								 //Declaration

	int A1[5] = { 1,2,3,4,5 };				 // Declaration and Initialization

	int A2[5] = { 2,4 };					 // 2 4 X X X            X - Garbage

	int A3[5] = { 0 };						 // 0 0 0 0 0 

	int A4[] = { 1,2,3,4,5,6 };				 // 1 2 3 4 5 6




	std::cout << A1[2] << std::endl;					 //Accessing to an element

	for (int i = 0; i < 5; i++) std::cout << A1[i];      //Iterating thruough an array

	std::cout << std::endl;

	for (int i = 0; i < 5; i++) std::cout << *(A1+i);    //Iterating through an array using pointer arithmetic

	std::cout << std::endl;

	/*                    DYNAMIC SIZED ARRAY                      */

	//Memory of the pointer will be in the stack, even though it points to the heap.
	int* p;				
	//C++								  
	p = new int[5];		
	//CLANG								          
	//p = (int *)malloc(5 * sizeof(int));				  				  


	p[0] = 5;
	std::cout << p[0];

	//C++ -> Do not forget to delete them.
	delete []p;											
	//free(p);
	
	
	

	return 0;
}


