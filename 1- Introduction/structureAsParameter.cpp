/* Structure as a parameter: Might be called by value, call by address (reference)
* 
* Pass/call by value: Any changes are done to formal parameters will not reflect in actual parameters.
* Pass/call by address: Any changes is done inside a function will modify actual parameters.

*/
#include <iostream>

struct Rectangle {
	int height;
	int width;

};//end struct

//Calling by value
int areaByValue(struct Rectangle rectVariable) { //You can send structure itself (will be passed as single variable)
	
	// NOTE THAT ACTUAL PARAMETER WILL NOT CHANGE!
	rectVariable.width++; 
	// prints 50
	return (rectVariable.width * rectVariable.height); 
}//end areaByValue

int areaByReference(struct Rectangle &rectReference) {
	
	rectReference.width++;
	return(rectReference.width * rectReference.height);
}//end areaByReference

int areaByAddress(struct Rectangle *rectAdress) {

	rectAdress->height++; //parameters are pointer, so use arrow (or *rectAddress.height!)
	rectAdress->width++;

	return(rectAdress->width * rectAdress->height);
}//end areaByAddress

//SOMETHING COOL!

struct Test {

	int array[5]; //an array with the size of 5
	int n; //some random integer
};//end struct Test


//ARRAY CAN ONLY BE SENT BY ADDRESS! (But structure can be passed by value)
//Passing an array isn't allowed by the compiler because it's time and space consuming.
void fun(struct Test testMember) {
	testMember.array[0] = 10; //Actual value will not change because this is call by value!

	//for (int i = 0; i < 5; i++) {
	//	std::cout << testMember.array[i] << " ";
	//}//end for
	//std::cout << std::endl;
}//end fun

//But you can change the array value if you pass the structure by value!
void funByAddress(struct Test &testMember) {
	testMember.array[0] = 10;
}//end funByAddress


//IN HEAP!
//Returns a pointer of rectangle.. ! Important
struct Rectangle* fun() {
	
	struct Rectangle* p;
	p = new Rectangle;

	p->height = 15;
	p->width = 7;

	return p;

}//end Rectangle* fun


int main(){

	struct Rectangle rect = { 10,5 };
	std::cout << areaByValue(rect) << std::endl;

	struct Rectangle rectReference = { 3,2 }; //Area: 6
	std::cout << areaByReference(rectReference) << std::endl; // Area 9 (because reference affects actual value)

	struct Rectangle rectAddress = { 1,1 }; //1
	std::cout << areaByAddress(&rectAddress) << std::endl; // 2*2 = 4

	//Something COOL!

	struct Test testMember = { {1,2,3,4,5}, 5 };
	fun(testMember);
	std::cout << "fun: " << testMember.array[0] << std::endl;

	funByAddress(testMember);
	std::cout << "funByAddress: " << testMember.array[0] << std::endl;


	//WILD!

	struct Rectangle* ptr = fun();
	std::cout << ptr->width << " " << ptr->height;

									
}//end main

