/* Some functions */
#include <iostream>

struct Array {

	int A[5];
	int size;
	int length;

};

void display(struct Array arrGiven) {

	for (int i = 0; i < arrGiven.length; i++)							// Printing elements
		std::cout << "A[" << i << "] = " << arrGiven.A[i] << std::endl;

}//end display()

/* GET  -> Returns the index */ 
int get(struct Array arr, int index) {										// int a[]

	if (index >= 0 && index < arr.length) 
		return arr.A[index];
	return -1;
}//end get()

/* SET  -> Sets an element */
void set(struct Array *arr, int index, int givenNumber) {

	if (index >= 0 && index < arr->length) 
		arr->A[index] = givenNumber;
	
}//end set()


/* MAX  -> Find the biggest value */
int max(struct Array arr) {

	int max = arr.A[0];
	
	for (int i = 0; i < arr.length; i++) {
		if (arr.A[i] > max)
			max = arr.A[i];
	}//end for
	return max;

}//end max()


/* MIN  -> Find the smallest value */
int min(struct Array arr) {

	int min = arr.A[0];

	for (int i = 0; i < arr.length; i++) {
		if (arr.A[i] < min)
			min = arr.A[i];
	}//end for
	return min;

}//end min()

/* SUM  -> Finds the sum */
int sum(struct Array arr) {

	int sum = 0;

	for (int i = 0; i < arr.length; i++)
		sum += arr.A[i];
	return sum;

}//end sum()

/* AVG  -> Finds the average */
float avg (struct Array arr) {

	return (float)sum(arr) / arr.length;

}//end avg()


int main(){

	struct Array arr = { {6,1,8,4,10}, 5, 5 };
	display(arr);
	
	std::cout << "\nGet arr[3]: " << get(arr, 3) << std::endl;
	std::cout << "Set arr[3] to 100 (check display): " << std::endl; 
	std::cout << "Max: " << max(arr) << std::endl;
	std::cout << "Min: " << min(arr) << std::endl;
	std::cout << "Sum: " << sum(arr) << std::endl;
	std::cout << "Avg: " << avg(arr) << std::endl;
	std::cout << std::endl;
	set(&arr, 3, 100);

	std::cout << "------------------------------------------" << std::endl;
	display(arr);
	std::cout << "\nGet arr[3]: " << get(arr, 3) << std::endl;
	std::cout << "Set arr[3] to 100 (check display): " << std::endl;
	std::cout << "Max: " << max(arr) << std::endl;
	std::cout << "Min: " << min(arr) << std::endl;
	std::cout << "Sum: " << sum(arr) << std::endl;
	std::cout << "Avg: " << avg(arr) << std::endl;
	std::cout << std::endl;
	

	return 0;
}