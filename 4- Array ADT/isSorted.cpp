/* Check if an array is sorted, Inserting in a sorted array, Arranging negatives on the left hand side  */
#include <iostream>

struct Array {

	int A[10];
	int size;
	int length;

};

void display(struct Array arrGiven) {

	for (int i = 0; i < arrGiven.length; i++)							// Printing elements
		std::cout << "A[" << i << "] = " << arrGiven.A[i] << std::endl;
	std::cout << std::endl;

}//end display()

void swap(int* x, int* y) { 
	int temp = *x;     
	*x = *y;     
	*y = temp; 
}//end swap()


/*				Inserting in a sorted array    ---> Start from the LAST!          */            // O(n)  
void insert(struct Array* arr, int num) {

	int i = arr->length - 1;
	if (arr->length == arr->size)																// if there's no free space
		return;

	while (i >= 0 && arr->A[i] > num) {
		
		arr->A[i + 1] = arr->A[i];																//swap the element to the right if it's greater than given key.		
		i--;
	}
	
	arr->A[i + 1] = num; 
	arr->length++;
	
}//end insert()

													
/*		Checking if an array is sorted          ---> Start checking from the beginning */      // O(n)  

bool isSorted(struct Array arr) {
	
	for (int i = 0; i < arr.length - 1; i++) {													// [... 10, 2, 5] -> stop at 2.  
		
		if (arr.A[i] > arr.A[i + 1])
			return false;
	}//end for

	return true;

}//end isSorted()

void rearrange(struct Array* arr) {
	
	int i = 0;
	int j = arr->length - 1;

	while (i < j) {
	
		while (arr->A[i] < 0)
			i++;
		while (arr->A[j] >= 0)
			j--;

		if (i < j)
			swap(&arr->A[i], &arr->A[j]);

	}//end while

}
													
/*	Arranging negatives on the left hand side            //https://ibb.co/SmSF1tL */

int main(){

	struct Array arr = { {10,20,-5,30,40,50,-6,-1 }, 10, 8 };

	display(arr);
	std::cout << isSorted(arr) << std::endl;
	//insert(&arr, 31);
	//display(arr);
	//std::cout << isSorted(arr) << std::endl;
	rearrange(&arr);
	display(arr);
	std::cout << "Note that this program is not for sorting! " << isSorted(arr) << std::endl;

	return 0;
}