/* Pair of elements in a sorted array */
#include <iostream>

struct Array {

    int A[10];
    int size;
    int length;

};

void display(struct Array arrGiven) {

    for (int i = 0; i < arrGiven.length; i++)    // Printing elements
        std::cout << "A[" << i << "] = " << arrGiven.A[i] << std::endl;

}//end display()

// 1    3   4   5   6   8   9   10  12  14
// a + b = 10

void findPair(Array arr, int sum){

    int i = 0;
    int j = arr.length-1;

    while(i < j){

        if( arr.A[i] + arr.A[j] == sum ){

            std::cout << arr.A[i] << " and " << arr.A[j] << std::endl;
            i++;
            j--;

        } else if( arr.A[i] + arr.A[j] < sum){
            i++;
        } else if ( arr.A[i] + arr.A[j] > sum) {
            j--;
        } // end conditional

    } // end while loop

} // end findPair()


int main() {

    Array arr;
    arr.length = 10;

    arr.A[0] = 1;
    arr.A[1] = 3;
    arr.A[2] = 4;
    arr.A[3] = 5;
    arr.A[4] = 6;
    arr.A[5] = 8;
    arr.A[6] = 9;
    arr.A[7] = 10;
    arr.A[8] = 12;
    arr.A[9] = 14;

    findPair(arr, 10);
    return 0;
}