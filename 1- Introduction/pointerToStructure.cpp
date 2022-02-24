/* POINTER TO STRUCTURE: 
	You can use a pointer as reference or to dynamically allocate the memory
*/
#include <iostream>

struct Rectangle {
	int length, width;
};

int main()
{

	//BASIC
	struct Rectangle r = { 10,5 };

	struct Rectangle* p = &r; //Pointer to structure (also consumes 8 bytes)
							  //Declared and initialized
	r.length = 15;
	p->length = 20; //For pointer variable, use arrow!
	//p.length = 15; //ILLEGAL!
	std::cout << r.length << std::endl; //Updated to 20
	//END BASIC


	// ! important part
	struct Rectangle* pointer; 	//Declared in stack
	pointer = new Rectangle; 	//Now declared in the heap!
	//pointer = (struct Rectangle *)malloc(sizeof(struct Rectangle));
	pointer->width = 3; 

	std::cout << pointer->width;



}//end main

