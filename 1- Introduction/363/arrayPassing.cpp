// Arrays are always passed by address!

#include <iostream>

void printArray(int arr[], int size){
    for( int i = 0; i < size; i++ )
        std::cout << arr[i] << " ";
    std::cout << std::endl;
} // end printArray()

void changeArray(int arr[], int size){
    for( int i = 0; i < size; i++ )
        arr[i] = i*i;
} // end changeArray()

// RETURNING AN ARRAY!
int* fullArray(int size) {
    int* array = new int[size];

    for( int i = 0; i < size; i++ )
        array[i] = (i*20);

    return array;
} // end fullArray()

int main(void){

    int arr[] = {10,20,30,40,50};
    int sizeFirst = sizeof(arr)/sizeof(int);
    printArray(arr, sizeFirst);
    changeArray(arr, sizeFirst);
    printArray(arr, sizeFirst);

    // FANCY STUFF!
    int size = 10;
    int *A = fullArray(size);
    printArray(A, size);

}//end main