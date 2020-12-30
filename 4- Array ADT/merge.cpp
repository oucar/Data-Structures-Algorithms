/* Merging List : Merging can only be done in sorted list!
* 
* You definetly need a third array.
* 
* A : # # # # # i  --> m elements
* B : # # # # # j  --> n elements
* 
* C : # # # # # # # # # # k
* 
* PSUEDOCODE:
* 
* i=0, j=0, k=0;
* 
* while(i<m && j<n)
	* if(A[i] < B[j])
	*	C[k++] = A[i++]
	*
	* else
	*	C[k++] = B[j++]
	*
  for( i<m; i++)							//Copy the remaining elements
	C[k++] = A[i];
  for( j<n; j++)							
	C[k++] = B[j];

*/
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

struct Array* merge(struct Array *arr1, struct Array *arr2) {

	int i, j, k;
	i = j = k = 0;

	struct Array* arrMerged;
	arrMerged = new Array;
	arrMerged->length = (arr1->length + arr2->length);
	arrMerged->size = 10;

	while (i < arr1->length && j < arr2->length) {
	
		if (arr1->A[i] < arr2->A[j])
			arrMerged->A[k++] = arr1->A[i++];

		else
			arrMerged->A[k++] = arr2->A[j++];

	}//end while

	for (;i < arr1->length;i++) 
		arrMerged->A[k++] = arr1->A[i];

	for (;j < arr2->length;j++)
		arrMerged->A[k++] = arr2->A[j];
	

	return arrMerged;

}//end merge()


int main(){

	struct Array arr1 = { {2,6,10,15,25},10,5 };
	struct Array arr2 = { {3,4,7,18,20},10,5 };
	struct Array *arrMerged;

	arrMerged = merge(&arr1, &arr2);

	display(*arrMerged);

	return 0;
}