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

//  8   3   6   4   6   5   6   8   2   7
void findDuplicate(Array arr){                                              // O(n^2)

    for(int i = 0; i < arr.length-1; i++) {
        int count = 1;
        if(arr.A[i] != -1){
        for(int j = i+1; j < arr.length; j++){
            if(arr.A[i] == arr.A[j]){
                count ++;
                arr.A[j] = -1;
            }
        }
        if(count > 1)
            std::cout << arr.A[i] << " has been duplicated " << count << " times.\n";
        }
    }
}


int main() {

    Array arr;
    arr.length = 10;

    arr.A[0] = 8;
    arr.A[1] = 3;
    arr.A[2] = 6;
    arr.A[3] = 4;
    arr.A[4] = 6;
    arr.A[5] = 5;                               // 7 is missing
    arr.A[6] = 6;
    arr.A[7] = 8;
    arr.A[8] = 2;
    arr.A[9] = 7;

    //findDuplicates(arr);
    //findDuplicatesAndCount(arr);
    findDuplicate(arr);

    return 0;
}