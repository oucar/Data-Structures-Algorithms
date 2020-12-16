/* Structures and Functions

*/
#include <iostream>

struct Rectangle {
	int height;
	int width;

};//end struct

  
//
//PASS BY REFERENCE
//
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


//
//PASS BY ADDRESS
//

void initializeAd(struct Rectangle *rect, int height, int width) {

	rect->height = height;
	rect->width = width;
}//end initialize

void changeHeightAd(struct Rectangle *rect, int changedTo) {

	rect->height = changedTo;
}//end changeLength

int areaAd(struct Rectangle rect) {

	return(rect.width * rect.height);
}//end area



int main(){
	//REFERENCE
	struct Rectangle rect;
	initialize(rect, 1, 1);
	changeHeight(rect, 2);

	std::cout << area(rect) << std::endl;

	//ADDRESS
	struct Rectangle rectAd;
	initialize(rectAd, 2, 2);
	changeHeight(rectAd, 3);

	std::cout << area(rectAd) << std::endl;
									
}//end main

