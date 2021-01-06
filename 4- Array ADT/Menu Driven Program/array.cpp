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

void Array::remove(int index) {                                                          // Remove

    if (index >= 0 && index <= length) {
        for (int i = index; i < length; i++)                                               // will be shifted backwards
            A[i] = A[i + 1];

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

        else return recursiveBinarySearch(key, mid + 1, high);
    }//end if
};

//                               MAX, MIN, SUM, AVG                                 //

int Array::max() {                                                                   // Max

    int max = A[0];
    for (int i = 0; i < length; i++)
        if (A[i] > max) {
            max = A[i];
        }
    return max;
};

int Array::min() {                                                                   // Min

    int min = A[0];
    for (int i = 0; i < length; i++)
        if (A[i] < min) {
            min = A[i];
        }
    return min;

};

int Array::sum() {                                                                   // Sum

    int sum = 0;

    for (int i = 0; i < length; i++)
        sum += A[i];

    return sum;
};

float Array::average() {                                                             // Average

    return sum() / length;
};

//                                      REVERSE                                     //

void Array::reverse() {                                                             // Reverse 1

    int reversedArray[length];

    for (int i = 0, j = length - 1; j >= 0; i++, j--)
        reversedArray[j] = A[i];

    std::cout << "Reversed array: ";
    for (int i = 0; i < length; i++)
        std::cout << reversedArray[i] << " ";

};

void Array::reverse2() {                                                            // Reverse - using swap()
    // A[0] <-> A[length-1], A[1] <-> A[length-2]
    for (int i = 0, j = length - 1; i <= j; i++, j--)
        swap(&A[i], &A[j]);

}

/*                              INSERT SORTED and SORT AND INSERT                   */

void Array::insertSorted(int numGiven) {                                            // Insert Sorted

    if (length == size)
        return;

    int i = length - 1;
    while (i >= 0 && A[i] > numGiven) {
        A[i + 1] = A[i];
        i--;
    }

    A[i + 1] = numGiven;
    length++;

}

bool Array::isSorted() {                                                            // Check if sorted

    for (int i = 0;
         i < length - 1; i++) {                                              // length = 10, A[10] --> 9th element
        if (A[i] > A[i + 1])
            return false;
    }
    return true;
}

void Array::rearrangeNegatives() {                                                  // Rearrange Negatives

    int i = 0;              // represents positive
    int j = length - 1;     // represents negative

    while (i < j) {

        while (A[i] < 0) i++;   // until you find the positive

        while (A[j] >= 0) j--;

        if (i < j)
            swap(&A[i], &A[j]);

    } // end while

}

/*                      MERGE, UNION INTERSECTION and DIFFERENCE                 */
// dynamically allocated object will be returned --> If you're gonna return an object, follow this!
Array *Array::mergeOperation(Array arrGiven) {                                    // Merge
    int i, j, k;                                    // i -> iter of arr, j -> iter of arrGiven, k -> iter of arrMerged
    i = j = k = 0;

    Array *arrMerged = new Array(length + arrGiven.length);

    while (i < length && j < arrGiven.length) {

        if (A[i] < arrGiven.A[j])
            arrMerged->A[k++] = A[i++];
//            k++; i++;
        else
            arrMerged->A[k++] = arrGiven.A[j++];
//            k++; j++;
    }// end while

    for (; i < length; i++)                     // Whichever has more value
        arrMerged->A[k++] = A[i];

    for (; j < arrGiven.length; j++)
        arrMerged->A[k++] = A[j];

    arrMerged->length = length + arrGiven.length;

    return arrMerged;
}

// Similar to merge, but you don't copy if it's already in arrMerged.
Array *Array::unionOperation(Array arrGiven) {                                      // Union - Must be sorted

    int i, j, k;
    i = j = k = 0;

    Array *arrUnion = new Array(length + arrGiven.length);

    while (i < length && j < arrGiven.length) {

        if (A[i] < arrGiven.A[j])               // first array has the smallest
            arrUnion->A[k++] = A[i++];

        else if (A[i] > arrGiven.A[j])           // second array has the smallest
            arrUnion->A[k++] = arrGiven.A[j++];

        else {                                  // they are equal
            arrUnion->A[k++] = A[i++];          // either one would work
            j++;
        }
    }
    for (; i < length; i++)
        arrUnion->A[k++] = A[i];

    for (; j < arrGiven.length; j++)
        arrUnion->A[k++] = arrGiven.A[j];

    arrUnion->length = k;
    arrUnion->size = k;
    
    return arrUnion;
}

Array *Array::intersectionOperation(
        Array arrGiven) {                                   // Intersection - Must be sorted as well

    int i, j, k;
    i = j = k = 0;

    Array *arrInter = new Array(length + arrGiven.length);

    while (i < length && j < arrGiven.length) {

        if (A[i] < arrGiven.A[j])
            i++;

        else if (A[i] > arrGiven.A[j])
            j++;

        else if (A[i] == arrGiven.A[j]) {
            arrInter->A[k++] = A[i++];
            j++;
        }// end else if
    }//end while

    arrInter->length = k;
    arrIntern->size = k;

    return arrInter;
}

Array *
Array::differenceOperation(Array arrGiven) {                                         // Difference - Must be sorted

    int i, j, k;
    i = j = k = 0;

    Array *arrDiff = new Array(length + arrGiven.length);

    while (i < length && j < arrGiven.length) {

        if (A[i] < arrGiven.A[j])
            arrDiff->A[k++] = A[i++];

        else if (A[i] > arrGiven.A[j])
            j++;

        else{
            i++;
            j++;
        }
    }//end while

    for(; i < length; i++)
        arrDiff->A[k++] = A[i];

    arrDiff->length = k;
    arrDiff->size = k;
    return arrDiff;
}
