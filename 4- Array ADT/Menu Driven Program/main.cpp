/* Array ADT */
#include <iostream>
#include "array.h"

int main(){

	
	Array* arr;										//Array *arr = new Array[10];	// Creates 10 array objects

	std::cout << "size: ";
	int sz;
	std::cin >> sz;

	arr = new Array(sz);
	

	

	return 0;
}