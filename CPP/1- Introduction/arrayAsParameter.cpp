/* Array as parameter:
* Notice how you can use integer pointer or just array as formal parameters!
  void function(int *arr){} OR void function(int arr[]){} is valid since it's just can be passed by address
*/
#include <iostream>

//DON'T GIVE A FIXED SIZE IF YOU'RE USING ARRAY
//This is actually a pointer to array
//Arrays cannot be passed by value. They always passsed by address. 
void printArray(int arr[], int size) { //dynamically accesses to array (int *A ) or (int A[])
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " " ;
	}//end for
	std::cout << std::endl;
}//end printArray

void changeArray(int *arr, int size) { //Notice how you can use integer pointer or just array as formal parameters!
	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}//end for
}//end changeArray

//RETURNING AN ARRAY
int* fullArray(int size) {
	int* pointer = new int[size]; //declaring and assigning (created in heap)

	for (int i = 0; i < size; i++) { 
		pointer[i] = (i * 10);
	}//end for
	
	return pointer;
}//end fullArray



int main()
{
	int A[] = {10,20,30,40,50};
	int sizeFirst = sizeof(A) / sizeof(int);
	changeArray(A, sizeFirst); //When you pass array as parameter, also pass its size.
	printArray(A, sizeFirst); //Else it will give you wrong size if you try to use int size = sizeof(arr) / sizeof(int);

	/*
	for(int x:A){
		std::cout << x << std::endl; //You CANNOT use a for each loop in a pointer though.
	}//end for
	*/

	// ! IMPORTANT!
	int* ptr; // pointer to int
	int size = 10;
	ptr = fullArray(size);

	printArray(ptr, size);
	//for (int i = 0; i < size; i++) {
	//	std::cout << ptr[i] << " ";
	//}//end for
									
}//end main

