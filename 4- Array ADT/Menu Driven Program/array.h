#ifndef UNTITLED_ARRAY_H
#define UNTITLED_ARRAY_H

class Array {

private:
    int* A;
    int size;
    int length;

    void swap(int* x, int* y);							// Swap two numbers (Helper function, that's why it's private.)

public:

    Array() {											// Constructor without parameter
        size = 10;
        length = 0;
        A = new int[size];
    }

    Array(int sizeGiven) {								// Constructor with a given size
        size = sizeGiven;
        length = 0;
        A = new int[size];
    }

    Array(int arrGiven[], int sizeGiven) {			   // Constructor with a given size and array
        size = sizeGiven;
        length = sizeof(arrGiven) / sizeof(int);
        A = new int[size];

        for (int i = 0; i < size; i++)
            A[i] = arrGiven[i];
    }

    ~Array() {											// Destructor
        delete[]A;
    }

    void set(int index, int x);							// Set an index to a given element
    int get(int index);									// Get the value of a given index
    void display();										// Display

    int getSize();										// Get the size
    void setSize(int x);								// Set the size
    int getLength();									// Get the length
    void setLength(int x);								// Set the length

    void append(int x);									// Insert an element at the end of the list.
    void insert(int index, int x);						// Insert an element to a given index                   --> Elements after index will be shifted.
    void remove(int index);                             //@TODO Delete an element from the given index.

    int linearSearch(int key);							            // Linear search
    int binarySearch(int key);							            // Binary search
    int recursiveBinarySearch(int key, int low, int high);          // **Recursive** binary search

    int max();											// Maximum element
    int min();											// Minimum element
    int sum();											// Sum of all the elements
    float average();										// Average of all the elements

    void reverse();										// Reverse the given array
    void reverse2();									// Another way to reverse an array

    void insertSorted(int x);							// Insert an element to a sorted array
    void sortAndInsert(int x);							// Sort the array and insert the given array

    Array* mergeOperation(Array* arrGiven);				// Merges two array and returns it as an array
    Array* unionOperation(Array* arrGiven);				// Finds the union of two array and returns it as an array
    Array* intersectionOperation(Array* arrGiven);		// Finds the intersection of two array and returns it as an array
    Array* differenceOperation(Array* arrGiven);		// Finds the difference of two array and returns it as an array


    //TODO 1 Create as many instances as you want and make them accessible through the menu.
};









#endif
