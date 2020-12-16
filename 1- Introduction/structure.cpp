/* STRUCTURE

Structure: Collection of related (similar) data members under one name. 
Structures are user defined.
The size of a structure is the total amount of memory consumed for each instance.
Char takes only one byte, Int takes four bytes.


*/
#include <iostream>

struct Card {
	int face, shape, color; //6 bytes
};//end struct

struct Rectangle { //Would make sense better with classes if you're using cpp
	int length, width;

	int getLength() {
		return length;
	}//end printLength

	int getWidth() {
		return width;
	}//end printWidth
};//end struct


int main()
{
	struct Card deck[52]; //52*6 bytes

	struct Rectangle r1;
	r1.length = 10;
	r1.width = 10;

	std::cout << r1.getLength() << " " << r1.getWidth();
	


}//end main

