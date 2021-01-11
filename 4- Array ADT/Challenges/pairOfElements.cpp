/* Pair of elements in a sorted, unsorted array! */
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

// 6 3 8 10 16 7 5 2 9 14
// a + b = 10

void findPair(Array arr, int sum) {                                                         // O(n^2)

    int first, second;

    for (int i = 0; i < arr.length - 1; i++) {
        first = arr.A[i];

        for (int j = i; j < arr.length; j++) {
            if (sum - first == arr.A[j]) {
                second = arr.A[j];
                std::cout << "Numbers are: " << first << " and " << second << std::endl;
            }
        } // end for
    } // end for
}//end findPair()

void findPairFaster(Array arr, int sum){                                                    // O(n), but takes a lot of time.
/* Psuedocode
 *
 * for(int i = 0; i < arr.length; i++){
 *
 *      if(arrHash.A[ sum-arr.A[i]] != 0)         // if there's 1 in the hash array
 *          std::cout << A[i] << " " << k-A[i];
 *      arrHash.A[arr.A[i]]++
 *  }
 * */

} // end findPairFaster()


int main() {

    Array arr;
    arr.length = 10;

    arr.A[0] = 6;
    arr.A[1] = 3;
    arr.A[2] = 1;
    arr.A[3] = 10;
    arr.A[4] = 16;
    arr.A[5] = 7;                               // 7 is missing
    arr.A[6] = 5;
    arr.A[7] = 2;
    arr.A[8] = 9;
    arr.A[9] = 14;

    findPair(arr, 15);
    return 0;
}