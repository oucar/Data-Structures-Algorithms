/* ARRAY

Array: Collection of similar data elements.

*/
#include <iostream>
int main()
{
	int size = 4;
	int index;
	std::cout << "Array size: ";
	std::cin >> size;

	int* arr = new int[size]; //Dynamic sized array

	//Initialize array
	for (int i = 0; i < size; i++) {
		std::cout << "Index " << i << " :";
		std::cin >> index;
		arr[i] = index;
	}//end for

	std::cout << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << "Element " << i << " :" << arr[i] << std::endl;
	}//end for

	delete[]arr;

}//end main


