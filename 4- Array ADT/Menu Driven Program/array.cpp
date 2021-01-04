#include "array.h"
#include <iostream>

//                                  SET, GET, DISPLAY, SWAP                               //

void Array::set(int index,
                int x) {                                                      // Set (not required, same as insert)
    A[index] = x;
};

int Array::get(int index) {                                                              // Get
    return A[index];
};

void Array::display() {                                                                  // Display
    for (int i = 0; i < size; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}


void Array::swap(int *x, int *y) {                                                        // Swap
    int temp = *x;
    *x = *y;
    *y = temp;
}

//                          GETTER AND SETTER -> SIZE AND LENGTH                        //

int Array::getSize() {                                                                  // Get size
    return size;
}

void Array::setSize(int x) {                                                            // Set size
    size = x;
}

int Array::getLength() {                                                                 // Get length
    return length;
}

void Array::setLength(int x) {                                                           // Set length
    length = x;
};

//                                 APPEND, INSERT, REMOVE                                //

void Array::append(int x) {                                                              // Append

    if (size > length) {
        A[length] = x;
        length++;
    }

}

void Array::insert(int index, int x) {                                                   // Index

    if (index >= 0 && index <= length) {                                                 // will be shifted
        for (int i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }

}

void Array::remove(int index){                                                          // Remove

    if(index >= 0 && index <= length){
        for(int i = index; i<length; i++)                                               // will be shifted backwards
            A[i] = A[i+1];

        length--;
    }
}

//                               LINEAR AND BINARY SEARCH                                //

int Array::linearSearch(int key) {                                                       // Linear search       O(n)

    for (int currNum = 0; currNum < size; currNum++) {
        if (A[currNum] == key)
            //swap(&A[currNum], &A[currNum]);                                            // Transposition -> Can be enabled
            return currNum;
    }
    return -1;

};

int
Array::binarySearch(int key) {                                                       // Binary search        O(log(n))

    int low, mid, high;
    low = 0;
    high = length - 1;

    while (low <= high) {

        mid = (high + low) / 2;

        if (key == A[mid])                                                                // Check left
            return mid;

        else if (key < A[mid])                                                           // Check right
            high = mid - 1;

        else low = mid + 1;
    }

    return -1;
};

int Array::recursiveBinarySearch(int key, int low, int high) {                  // **Recursive** binary search

    int mid = 0;
    high = length - 1;

    if (low <= high) {
        mid = (low + high) / 2;

        if (key == A[mid])
            return mid;

        else if (key < A[mid])
            return recursiveBinarySearch(key, low, mid - 1);

        else return recursiveBinarySearch(key, mid + 1,  high);
    }//end if
};

//                               MAX, MIN, SUM, AVG                               //


int Array::max(){

    int max = A[0];
    for(int i = 0; i < length; i++)
        if(A[i] > max) {
            max = A[i];
        }
    return max;
};

int Array::min(){

    int min = A[0];
    for(int i = 0; i< length; i++)
        if(A[i] < min ) {
            min = A[i];
        }
    return  min;

};

int Array::sum(){

    int sum = 0;

    for(int i = 0; i<length; i++)
        sum += A[i];

    return sum;
};

float Array::average(){

    return sum()/length;
};

