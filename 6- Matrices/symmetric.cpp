#include<iostream>

using namespace std;

class Symmetric {
private:
    int n, *A;
public:
    Symmetric() {
        int n = 2;
        A = new int[2 * 2];
    }

    Symmetric(int n) {
        this->n = n;
        A = new int[n * n];
    }

    ~Symmetric() {
        delete[]A;
    }

    void set(int i, int j, int x);

    int get(int i, int j);

    void Display();
};

void Symmetric::set(int i, int j, int x) {
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = x;
}

int Symmetric::get(int i, int j) {
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    else
        return A[j * (j - 1) / 2 + i - 1];
}

void Symmetric::Display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j)
                cout << A[i * (i - 1) / 2 + j - 1] << " ";
            else
                cout << A[j * (j - 1) / 2 + i - 1] << " ";
        }
        cout << endl;
    }
}

int main() {
    int d;
    cout << "enter dimension";
    cin >> d;
    Symmetric sm(d);
    int x, i, j;
    cout << "enter the elements";
    for (i = 1; i <= d; i++) {
        for (j = 1; j <= d; j++) {
            cin >> x;
            sm.set(i, j, x);
        }
    }
    sm.Display();
    return 0;
}