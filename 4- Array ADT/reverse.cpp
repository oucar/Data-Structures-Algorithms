/* Reversing and Shifting  */
#include <iostream>

struct Array {

	int A[5];
	int size;
	int length;

};

void display(struct Array arrGiven) {

	for (int i = 0; i < arrGiven.length; i++)							// Printing elements
		std::cout << "A[" << i << "] = " << arrGiven.A[i] << std::endl;
	std::cout << std::endl;

}//end display()

 /*            REVERSING            */

// First method: You need an extra array. Copy all the elements from A to B, starting from last element of A. Then paste all of them from B to A. -> O(n)
/*
* 
* for(i = length-1; j=0; i>=0; i--, j++)		// A[5] = B[0], A[4] = B[1] ... 
*	B[j]=A[i];
* 
* for(i=0; i<length; i++)						// A[0] = B[0], A[1] = B[1] ...
*	A[i] = B[i]
* 
*/

void reverse(struct Array* arr) {

	int i, j;
	int* B;
	B = new int[arr->length*sizeof(int)];

	for (i = arr->length - 1, j = 0; i >= 0; i--, j++) 
		B[j] = arr->A[i];


	for (int i = 0; i < arr->length; i++)
		arr->A[i] = B[i];

}//end reverse()


// Second method: swap A[0] with A[9], swap A[1] WITH A[8]...
/*
*	for(int = 0, j=length-1; i<j; i++, j--){
*		temp = A[i];
*		A[i] = A[j];
*		A[j] = temp;
*	}
* 
*/

void reverse2(struct Array* arr) {
	
	int i, j, temp;

	for (i = 0, j = arr->length - 1; i < j; i++, j--) {
		
		temp = arr->A[i];
		arr->A[i] = arr->A[j];
		arr->A[j] = temp;

	}//end for

}//end reverse2 


/*            LEFT SHIFTING & LEFT ROTATION				*/																						// O(n)   
// Shifting : You lost the element in the first index and the element in last index becomes 0.
// Rotation : First element moves to the last index, others shift one to the left.



/*            RIGHT SHIFTING & RIGHT ROTATION            */																						// O(n)
// Shifting : You lost the element in the last index and the element in first index becomes 0.
// Rotation : Last element moves to the first index, others shift one to the right.

int main(){

	struct Array arr = { {6,1,8,4,10}, 5, 5 };
	display(arr);
	reverse(&arr);
	display(arr);
	reverse2(&arr);
	display(arr);

	

	return 0;
}