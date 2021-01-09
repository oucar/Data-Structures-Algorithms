/* Find Duplicates in a Sorted Array */
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

// SORTED ARRAY

//  3   6   8   8   10  12  15  15  15  20
void findDuplicates(Array arr) {

    int lastDuplicate = 0;
    int count = 2;
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicate) {
            lastDuplicate = arr.A[i];
            std::cout << arr.A[i] << " ";
        }
    }
}

//  3   6   8   8   10  12  15  15  15  20
//                          i           j               --> 6   9   --> 9-6 = 3 times
void findDuplicatesAndCount(Array arr) {
    int j = 0;
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] == arr.A[i + 1]) {
            j = i + 1;
            while (arr.A[i] == arr.A[j]) j++;
            std::cout << arr.A[i] << " has been found " << j - i << " times.\n";
            i = j - 1;
        }
    }
}


int main() {

    Array arr;
    arr.length = 10;

    arr.A[0] = 3;
    arr.A[1] = 6;
    arr.A[2] = 8;
    arr.A[3] = 8;
    arr.A[4] = 10;
    arr.A[5] = 12;                               // 7 is missing
    arr.A[6] = 15;
    arr.A[7] = 15;
    arr.A[8] = 15;
    arr.A[9] = 20;

    //findDuplicates(arr);
    //findDuplicatesAndCount(arr);

    return 0;
}