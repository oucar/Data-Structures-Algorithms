/* POINTER: Address variable (stores address of data! not data itself)
* 
* Pointer helps us access to heap memory and outside resources and deal with parameter passing.

  Pointer also occupies memory as well as the variable it's pointing to.

  #pointer: somerandomvalue (19818,19819)  ->  #a: 10 (200,201)
*/

#include <iostream>
#include <stdlib.h> //malloc
int main()
{

	int a = 10; //Data variable 
	int* pointer; //Address variable  -- STAR SETS THE ADDRESS
	pointer = &a; //Assignment or initialization -- & GET THE ADDRESS -> pointer points to a's address
		      //holds the value of a

		//std::cout << "a: " << a << std::endl; //10
		//std::cout << "*pointer: " << *pointer << std::endl; //10
		//std::cout << "pointer: " << pointer << std::endl; //address of a
		//std::cout << "&a: " << &a << std::endl; //address of a
		//std::cout << "&pointer" << &pointer; //address of pointer variable


	int arr[5] = { 2,4,6,8,10 };
	int* p;
	p = arr; //or p = &arr[0];
	//p = (int *)malloc(5*sizeof(int)); //Allocate 5 pointer variable for integers //C
	//p = new int[5]; //C++

	for (int i = 0; i < 5;	i++) {
		std::cout << "p[" << i << "]= " << p[i] << std::endl;
	}//end for
	

	int* p2;
	p2 = (int*)malloc(3 * sizeof(int)); //C
	p2[0] = 10;
	p2[1] = 15;
	p2[2] = 20;

	for (int j = 0; j < 3; j++) {
		std::cout << "p2["<< j << "]= " << p2[j] << std::endl;
	}//end for


	int* p3;
	p3 = new int[3]; //C++
	p3[0] = 1;
	p3[1] = 2;
	p3[2] = 3;

	for (int z = 0; z < 3; z++) {
		std::cout << "p3[" << z << "]= " << p3[z] << std::endl;
	}//end for


	//Delete it after you dynamically allocate it.
	delete[]p;
	delete[]p2;
	delete[]p3; 
}//end main

