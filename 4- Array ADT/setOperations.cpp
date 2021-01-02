/* Set operations on Array
* 
* Union:
*	Copy first array and paste it to third.
*	DON'T Directly copy second element. First search if numbers exist in third array or not. ---> O(n^2) 
* 
* Union on sorted arrays. (Similar to merging)												 ---> O(n)
*	Fill the third array with non-repeating numbers
* 
* Difference:
*	If A1's elements don't appear in A2, copy them into A3.									---> O(n^2)
*
* Difference on sorted arrays. (Similar to merging)											---> O(n)
* 
* 
* Intersection: 
*	Check if A1's elements are in A2. If they do, copy them into A3.		                   ---> O(n^2)
* 
* Intersection on sorted arrays. (Similar to merging) ---									   ---> O(n)
* 
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

struct Array* unionFunc(struct Array *arr1, struct Array *arr2) {

	int i, j, k;
	i = j = k = 0;

	struct Array* arrMerged;			//arrUnion
	arrMerged = new Array;


	while (i < arr1->length && j < arr2->length) {
	
		if (arr1->A[i] < arr2->A[j])
			arrMerged->A[k++] = arr1->A[i++];

		else if (arr2->A[j] < arr1->A[i])
			arrMerged->A[k++] = arr2->A[j++];

		else {
			arrMerged->A[k++] = arr1->A[i++];
			j++;
		}
	}//end while

	for (;i < arr1->length;i++) 
		arrMerged->A[k++] = arr1->A[i];

	for (;j < arr2->length;j++)
		arrMerged->A[k++] = arr2->A[j];

	arrMerged->length = k;
	arrMerged->size = 10;
	
	return arrMerged;

}//end union()


struct Array* intersection(struct Array* arr1, struct Array* arr2) {

	int i, j, k;
	i = j = k = 0;

	struct Array* arrMerged;			//intersection
	arrMerged = new Array;


	while (i < arr1->length && j < arr2->length) {

		if (arr1->A[i] < arr2->A[j])
			i++;

		else if (arr2->A[j] < arr1->A[i])
			j++;

		else if(arr1->A[i] == arr2->A[j]){
			arrMerged->A[k++] = arr1->A[i++];
			j++;
		}
	}//end while

	arrMerged->length = k;
	arrMerged->size = 10;

	return arrMerged;

}//end intersection()


struct Array* difference(struct Array* arr1, struct Array* arr2) {

	int i, j, k;
	i = j = k = 0;

	struct Array* arrMerged;			//intersection
	arrMerged = new Array;


	while (i < arr1->length && j < arr2->length) {

		if (arr1->A[i] < arr2->A[j])
			arrMerged->A[k++] = arr1->A[i++];

		else if (arr2->A[j] < arr1->A[i])
			j++;

		else{
			i++;
			j++;
		}
	}//end while

	for (;i < arr1->length;i++)
		arrMerged->A[k++] = arr1->A[i];

	arrMerged->length = k;
	arrMerged->size = 10;

	return arrMerged;

}//end merge()



int main(){

	struct Array arr1 = { {2,6,10,15,25},10,5 };			// Sorted array
	struct Array arr2 = { {3,6,7,15,20},10,5 };
	struct Array *unionArr;
	struct Array *intersectionArr;
	struct Array* differenceArr;


	unionArr = unionFunc(&arr1, &arr2);
	intersectionArr = intersection(&arr1, &arr2);
	differenceArr = difference(&arr1, &arr2);

	//display(*unionArr);
	//display(*intersectionArr);
	display(*differenceArr);

	return 0;
}