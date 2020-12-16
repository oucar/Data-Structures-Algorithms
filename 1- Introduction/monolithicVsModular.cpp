/* Monolithic program: Everything inside the main function
*  Modular program: Divided into separate functions so that it's easier to follow.
*/
#include <iostream>

int areaFunction(int l, int h) {

	return (l*h);
}//end area

int main(){

	//MONOLITHIC PROGRAM
	int length = 0;
	int height = 0;

	std::cout << "Length and height: ";
	std::cin >> length >> height;
	int area = length * height;
	std::cout << "Area is: " << area << std::endl;


	//MODULAR PROGRAM
	int modularArea = areaFunction(10, 10);
	std::cout << "Area is: " << modularArea;


	return 0;

}//end main

