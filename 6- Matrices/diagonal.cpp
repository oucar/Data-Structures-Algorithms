#include <iostream>

class Matrix {
private:
    int *A;
    int n;
public:

    // Constructor(s) and destructor

    Matrix() {
        n = 4;
        A = new int[4];
    }

    Matrix(int size) {
        A = new int[size];
        n = size;
    }

    ~Matrix() {
        delete[]A;
    }

    //methods
    void set(int i, int j, int x);

    int get(int i, int j);

    void display();
};


int Matrix::get(int i, int j) {
    if (i == j)
        return A[i - 1];
    else
        return 0;
} // end get

void Matrix::set(int i, int j, int x) {
    if (i == j)
        A[i - 1] = x;
}

void Matrix::display() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                std::cout << A[i] << " ";
            } else {
                std::cout << 0 << " ";
            } // end conditionals
        } // end inner for
        std::cout << std::endl;
    } // end outer for
} // end display()

int main() {

    int dimension;
    std::cout << "Dimension:";
    std::cin >> dimension;
    Matrix m(dimension);

    int x;
    std::cout << "Enter all the elements:";

    for (int i = 1; i <= dimension; i++) {
        for (int j = 1; j <= dimension; j++) {
            if (i == j) {
                std::cin >> x;
                m.set(i, j, x);
            } // end conditional
        } // end inner loop
    } // end outer loop

    m.display();

    std::cout << m.get(1, 1);

    return 0;
}
