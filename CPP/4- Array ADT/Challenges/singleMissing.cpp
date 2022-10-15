/* Find a Single Missing Element */
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

void
missing(Array arr) {                                                                                        // N natural numbers

    int sum = 0;
    for (int i = 0; i < arr.length; i++)
        sum = sum + arr.A[i];

    int legitSum = arr.A[arr.length - 1] * (arr.A[arr.length - 1] + 1) / 2;       // 11*12/2

    std::cout << "Missing number is " << legitSum - sum;
}

void anyMissing(Array arr) {                                                                                             // Any missing number
    // element minus its index always equal to... -> 6!

   int lowest = arr.A[0];
   int difference = lowest - 0;

    for (int i = 0; i < 10; i++){

        if( (arr.A[i]-i) != difference ) {
            std::cout << "Missing number: " << (i+difference);
            break;
        }// end if
    } // end for

}// end anyMissing


int main() {

    Array arr;
    arr.A[0] = 1;
    arr.A[1] = 2;
    arr.A[2] = 3;
    arr.A[3] = 4;
    arr.A[4] = 5;
    arr.A[5] = 6;                               // 7 is missing
    arr.A[6] = 8;
    arr.A[7] = 9;
    arr.A[8] = 10;
    arr.A[9] = 11;

    arr.size = 10;
    arr.length = 10;

    missing(arr);
    std::cout << std::endl;

    
    Array arr2;
    arr2.A[0] = 6;
    arr2.A[1] = 7;
    arr2.A[2] = 8;
    arr2.A[3] = 9;
    arr2.A[4] = 10;
    arr2.A[5] = 11;
    arr2.A[6] = 13;                             // 12 is missing
    arr2.A[7] = 14;
    arr2.A[8] = 15;
    arr2.A[9] = 16;

    arr2.size = 10;
    arr2.length = 10;

    anyMissing(arr2);

    return 0;
}