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

    Array arr(10);

    arr.append(1);
    arr.append(2);
    arr.append(3);
    arr.append(4);
    arr.append(5);
    arr.append(6);
    arr.append(7);
    arr.append(8);
    arr.append(9);
    arr.insert(9,10);




    arr.display();

    //arr.display();

    std::cout << arr.getSize() <<  " " << arr.getLength() << " " << arr.max() ;




    return 0;
}