/* Parameter Passing Methods:
*
* Pass by value: Any changes are done to formal parameters will not reflect in actual parameters.
*                -Use it when you don't need to change actual parameters
* Pass by address: Any changes is done inside a function will modify actual parameters.
*                  -Suitable for modifying the actual parameters!
* Pass by reference:
*                   -References don't take any memory!  (only in cpp)
*                   -Performance is same with pass/call by address
*/
#include <iostream>

// PASS BY VALUE
// Formal parameters swap but the actual parameters stays the same!
void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
} // end swapByValue();

// PASS BY ADDRESS
void swapByAddress(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} // end swapByAddress();

// PASS BY REFERENCE (ONLY IN C++!)
void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
} // end swapByReference();

int main(void){

    // Value
    int aValue = 1;
    int bValue = 2;
    swapByValue(1,2);
    std::cout << "By value: " << aValue << ", " << bValue << std::endl;

    // Address
    int aAddress = 1;
    int bAddress = 2;
    swapByAddress(&aAddress, &bAddress);
    std::cout << "By address: " << aAddress << ", " << bAddress << std::endl;

    // Reference
    int aRef = 1;
    int bRef = 2;
    swapByReference(aRef, bRef);
    std::cout << "By reference " << aRef << ", " << bRef << std::endl;

}//end main