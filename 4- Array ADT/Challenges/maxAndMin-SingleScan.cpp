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

// 5    8   3   9   6   2   10  7   -1  4
void maxMin(Array arr){                                                     // O(n)

    int min = arr.A[0];
    int max = arr.A[0];

    for(int i = 1; i < arr.length; i++){

        if (arr.A[i] < min)
            min = arr.A[i];

        else if( arr.A[i] > max )
            max = arr.A[i];

    } // end for

    std::cout << "Max : " << max << "\nMin: " << min;

} // end maxMin()





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

    maxMin(arr);
    return 0;
}