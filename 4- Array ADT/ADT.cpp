/* 

Array ADT
Always pass using reference or pointer if you're actually modifying something!

First part is an actual C program if you change the #include statement and std::cout's to printf(); (I was to busy to fix this lol)
Second part is C++

*/
#include <iostream>


/*															1- CLANG														*/
struct Array {

	int* A;
	int size;
	int length;

};

void display(struct Array arrGiven) {

	for (int i = 0; i < arrGiven.length; i++)	// Printing elements
		std::cout << "A[" <<i << "] = " << arrGiven.A[i] << std::endl;

}//end display()

void append(struct Array *arrGiven, int givenNumber) {

	if (arrGiven->length < arrGiven->size) {
		arrGiven->A[arrGiven->length] = givenNumber;
		arrGiven->length++;
	}//end if

}//end append()

// givenNumber will be inserted to index. elements after index will be shifted.
void insert(struct Array *arrGiven, int givenNumber, int index) {			// JUST REPLACE AN ELEMENT!

	if (index >= 0 && index <= arrGiven->length) {
		for (int i = arrGiven->length ; i > index; i--)
			arrGiven->A[i] = arrGiven->A[i-1];			// Shifting elements         5 X X X X -> 5 5 X X X -> 12 5 X X X 

		arrGiven->A[index] = givenNumber;
	}//end if

}//end insert()

// element in given index will be removed and elements after given index will be shifted backwards so there will be no empty spaces left.
void remove(struct Array *arrGiven, int index) {

	if (index>=0 && index <= arrGiven->length) {

		//int x = arrGiven->A[index];
		for (int i = index; i < arrGiven->length - 1; i++)
			arrGiven->A[i] = arrGiven->A[i + 1];

		arrGiven->length--;

		//return x;
	}
	//return 0;
}//end remove()

int main() {

	/*															1- CLANG														*/
	struct Array arr;					// Inheritance
	std::cout << "Array size: ";
	std::cin >> arr.size;

	arr.A = new int[arr.size+1];			// Declaring the array
	arr.length = 0;

	append(&arr,5);						// Append						-> O(1)
	append(&arr, 13);					// Append 
	append(&arr, 14);					// Append 
	append(&arr, 15);					// Append 
	append(&arr, 16);					// Append 
	insert(&arr, 41, 4);				// insert						-> O(n) 
	remove(&arr, 4);					// Deleting						-> O(n)




	display(arr);						// Display						-> O(1)


	delete[]arr.A;						// Cleaning th heap



	// 12 5 13

	return 0;
}


