/* OOP
*/
#include <iostream>

class Rectangle {

private:
	int height;
	int length;

public:
	Rectangle(); //Default constructor
	Rectangle(int heightGiven, int lengthGiven); //Overloading constructor 	
	~Rectangle();
	int area();
	int perimeter();

	//Getter functions
	int getHeight();
	int getLength();

	//Setter functions
	void setHeight(int heightGiven);
	void setLength(int lengthGiven);
}; //end class


//Default constructor
Rectangle::Rectangle() { //Scope resolution operator

	height = 0;
	length = 0;
}//end constructor

//Constructor overloading
Rectangle::Rectangle(int heightGiven, int lengthGiven) {

	height = heightGiven;
	length = lengthGiven;
}//end constructor

//Destructor (will be used if there's anything to delete --> dynamic memory allocation)
Rectangle::~Rectangle() {};


int Rectangle::area() {

	return(height*length); //H*L
}//end Rectangle::area()

int Rectangle::perimeter() {
	
	return(2*(height+length)); //2(H+L)
}//end Rectangle::perimeter()
 
int Rectangle::getHeight() {

	return (height);
}//end Rectangle::getHeight()

int Rectangle::getLength() {

	return (length);
}//end Rectangle::getLength()

void Rectangle::setHeight(int heightGiven) {

	height = heightGiven;

}//end Rectangle::setHeight()

void Rectangle::setLength(int lengthGiven) {

	length = lengthGiven;
}//end Rectangle::setLength()


int main() {

	Rectangle empty;
	Rectangle rect(10, 10);

	std::cout << "empty: " << empty.getHeight() << "," << empty.getLength() << std::endl;
	std::cout << "Area of empty: " << empty.area() << ", Perimeter of empty: " << empty.perimeter() << std::endl;
	
	std::cout << "rect " << rect.getHeight() << "," << rect.getLength() << std::endl;
	std::cout << "Are of rect: " << rect.area() << ", Perimeter of rect: " << rect.perimeter() << std::endl;

	int heightGiven;
	int lengthGiven;
	std::cout << "Give me new height and length for rect: ";
	std::cin >> heightGiven >> lengthGiven;

	rect.setHeight(heightGiven);
	rect.setLength(lengthGiven);

	std::cout << "Updated rect: " << rect.getHeight() << "," << rect.getLength();
	

}//end main

