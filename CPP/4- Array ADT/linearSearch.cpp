/* Linear Search */
#include <iostream>

struct Array{

	int A[10];
	int size;
	int length;

};

void Display(struct Array arr)
{
	for (int i = 0; i < arr.length; i++)	// Printing elements
		std::cout << "\nA[" << i << "] = " << arr.A[i] << std::endl;
}


void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}


int LinearSearch(struct Array* arr, int key){	//For transposition

	for (int i = 0; i < arr->length; i++){
		if (key == arr->A[i]){
			swap(&arr->A[i], &arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

int main(){

	struct Array arr1 = { {2, 23, 14, 5, 6, 9, 8, 12}, 10, 8 };
	std::cout << LinearSearch(&arr1, 23);
	Display(arr1);
	return 0;
}