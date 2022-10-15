#include<iostream>

using namespace std;

class Matrix {
private:
    int *A;
    int n;
public:
    Matrix(int n);

    void Set(int i, int j, int x);

    int Get(int i, int j);

    void Display();

    ~Matrix();
};

Matrix::Matrix(int n) {
    this->n = n;
    A = new int[3 * n - 2];
}

void Matrix::Set(int i, int j, int x) {
    if (i - j == 1)
        A[i - 2] = x;
    else if (i - j == 0)
        A[n + i - 2] = x;
    else if (i - j == -1)
        A[2 * n + i - 2] = x;
}

int Matrix::Get(int i, int j) {
    if (i - j == 1)
        return A[i - 2];
    else if (i - j == 0)
        return A[n + i - 2];
    else if (i - j == -1)
        return A[2 * n + i - 2];
    else
        return 0;
}

void Matrix::Display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i - j == 1)
                cout << A[i - 2] << " ";
            else if (i - j == 0)
                cout << A[n + i - 2] << " ";
            else if (i - j == -1)
                cout << A[2 * n + i - 2] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

Matrix::~Matrix() {
    delete[]A;
}

int main() {
    int dim;
    cout << "Enter the dimension ";
    cin >> dim;
    Matrix m(dim);
    int element;
    cout << "Enter the elements of matrix" << endl;
    for (int i = 1; i <= dim; i++) {
        for (int j = 1; j <= dim; j++) {
// cout<<"Enter element "<<i<<j<<":";
            cin >> element;
            m.Set(i, j, element);
        }
    }
    cout << endl << "Tridiagonal matrix is" << endl;
    m.Display();
    cout << endl << m.Get(1, 5);
    cout << endl << m.Get(2, 3);
    cout << endl << m.Get(5, 4);
    cout << endl << m.Get(4, 2);
    return 0;
}