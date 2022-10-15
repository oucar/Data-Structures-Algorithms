/* Converting C to CPP
*/
#include <iostream>

//C LANGUAGE

struct Rectangle {
	int height;
	int width;

};//end struct

void initialize(struct Rectangle &rect, int height, int width) {
	
	rect.height = height;
	rect.width = width;
}//end initialize

void changeHeight(struct Rectangle &rect, int changedTo) {

	rect.height = changedTo;
}//end changeLength

int area(struct Rectangle rect) {

	return(rect.width*rect.height);
}//end area


//CPP
class RectangleClass {
	
private:
	int length;
	int height;

public:
	
	//Constructors
	RectangleClass(int lengthGiven, int heightGiven) {
		
		length = lengthGiven;
		height = heightGiven;
	}//end Constructor

	RectangleClass() {
		
		length = 0;
		height = 0;
	}//end Constructor

	int area() {
	
		return (length*height);
	}//end area

	void changeHeight(int heightGiven) {

		height = heightGiven;
	}//end changeHeight
};//end Class



int main(){

	//CLANG
	struct Rectangle r;
	initialize(r, 10, 3); //Expected: 30
	std::cout << area(r) << std::endl;
	changeHeight(r, 15); //Expected: 45
	std::cout << area(r) << std::endl;

	//CPP

	RectangleClass rectClass(1, 2); //Expected: 2 
	std::cout << "Initial area: " << rectClass.area() << std::endl;
	rectClass.changeHeight(10); //Expected: 10
	std::cout << "Area after change: " << rectClass.area() << std::endl; 
}//end main

