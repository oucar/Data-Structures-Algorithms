/* It's impossible to incerase an array's size, but we can use below trick. */
#include <iostream>

int main() {

	int* p = new int[5];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;


	int* q = new int[10];						//New array with increased size.


	for (int i = 0; i < 5; i++)
		q[i] = p[i];							//Copying its values to the new array.


	delete[]p;									//Deleting the old array from the heap
	p = q;										//p points to the new array with increased size.
	q = NULL;									//q points to nothing.


	for (int j = 0; j < 10; j++)
		std::cout << p[j] << " ";			    //Notice the garbage values!

	return 0;
}


