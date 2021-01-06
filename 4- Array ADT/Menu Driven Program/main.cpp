/* Array ADT */
#include "array.h"
#include <iostream>


int main(){

//    Array* arr;										//Array *arr = new Array[10];	// Creates 10 array objects
//
//    std::cout << "size: ";
//    int sz;
//    std::cin >> sz;
//
//    arr = new Array(sz);

    Array arr(5);

    arr.append(10);
    arr.append(20);
    arr.append(34);
    arr.append(46);
    arr.append(57);


    Array arr2(3);
    arr2.append(35);
    arr2.append(64);
    arr2.append(73);

    //std::cout << arr.getSize() <<  " " << arr.getLength() << " " << arr.max() << std::endl ;
    //arr.insertSorted(6);

    Array *arrMerged;
    arrMerged = arr.mergeOperation(arr2);

    arrMerged->display();




    return 0;
}