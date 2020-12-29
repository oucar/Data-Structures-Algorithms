/* Binary Search */

/*

PSUEDOCODE

 1-) ITERATIVE

binarySearch(l, h, key){

	while (l <= h){

		mid = floor((l+h)/2);

		if(key == A[mid])
			return mid;

		else if (key < A[mid])
			h = mid -1;

		else
			l = mid +1;

	}//end while
	return -1;
}//end binarySearch

2-) RECURSIVE -> Tail recursion. So it's a better idea to prefer iterative version instead.

binarySearch(l, h, key){

	if(low <= h){

		mid = floor((l+h)/2)

		if(key == A[mid])
			return mid;

		else if(key<A[mid])
			return binarySearch(l, mid-1, key);				-> high becomes mid minus 1.

		else
			return binarySearch(mid+1, h, key);				-> low becomes mid plus 1.

	}//end if

	return -1;
}//end bianrySearch

*/
#include <iostream>

struct Array {

	int A[10];
	int size;
	int length;

};

void display(struct Array arr)
{
	for (int i = 0; i < arr.length; i++)	// Printing elements
		std::cout << "\nA[" << i << "] = " << arr.A[i] << std::endl;
}


// Iterative
int binarySearch(struct Array arr, int key) {

	int l, mid, h;
	l = 0;
	h = arr.length - 1;

	while (l <= h) {

		mid = (l + h) / 2;

		if (key == arr.A[mid])
			return mid;

		else if (key < arr.A[mid])			// key < mid
			h = mid - 1;

		else								// key > mid
			l = mid + 1;

	}//end while

	return -1;
}//end binarySearch()


int binarySearchRec(struct Array arr, int l, int h, int key) {					// int a[]

	int mid = 0;

	if (l <= h) {
	
		 mid = (l + h) / 2;

		if (key == arr.A[mid])
			return mid;

		else if (key < arr.A[mid])			// h = mid -1				
			return binarySearchRec(arr, l, mid - 1, key);

		else
			return binarySearchRec(arr, mid + 1, h, key);
	
	}//end if

	return -1;
}//end binarySearchRec()

int main(){

	struct Array arr = { {1,2,3,4,5,6,7,8,9,10}, 10, 10 };
	std::cout << "Iterative: " << binarySearch(arr, 9);
	std::cout << "\nRecursion: " << binarySearchRec(arr, 0, arr.length, 9);			//arr.A ---> binarySearchRec(int a[] ... )

}