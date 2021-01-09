/* Find Multiple Missing Element */
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

//  6   7   8   9   11  12  15  16  17  18  19          -> Given Array
//  0   1   2   3   4   5   6   7   8   9   10          -> Index
//                                                      -> Difference (Given Array - Index)
void multipleMissing(Array arr) {
    int difference;
    difference = arr.A[0] - 0;                  // First element can't be missing

    for (int i = 0; i < arr.length; i++) {
        if (difference != (arr.A[i] - i)) {
            while (difference < arr.A[i] - i){  // while difference is less than
                std::cout << (i+difference) << " ";
                difference++;
            } // end while
        } // end if
    } // end for
} // end multipleMissing();

// 3 7 4 9 12 6 1 11 2 10
void multipleMissing2(Array arr){               // Requires another array!

    Array arrHash;
    arrHash.length = arr.length;

    for(int i = 0; i < arr.length; i++){
        arrHash.A[arr.A[i]] = 1;
    }

    for(int i = 1; i < arrHash.length; i++){    // 1 is the minimum element
        if(arrHash.A[i] != 1)
            std::cout << " " << i;
    }
}

int main() {

    Array arr;
    arr.length = 10;
    arr.A[0] = 1;
    arr.A[1] = 2;
    arr.A[2] = 3;
    arr.A[3] = 4;
    arr.A[4] = 5;
    arr.A[5] = 6;                               // 7 is missing
    arr.A[6] = 8;
    arr.A[7] = 9;
    arr.A[8] = 10;
    arr.A[9] = 12;

    //multipleMissing(arr);

    Array arr2;
    arr2.length = 10;
    arr2.A[0] = 3;
    arr2.A[1] = 7;
    arr2.A[2] = 4;
    arr2.A[3] = 39;
    arr2.A[4] = 12;
    arr2.A[5] = 6;
    arr2.A[6] = 1;
    arr2.A[7] = 11;
    arr2.A[8] = 2;
    arr2.A[9] = 10;

    multipleMissing2(arr2);


    return 0;
}