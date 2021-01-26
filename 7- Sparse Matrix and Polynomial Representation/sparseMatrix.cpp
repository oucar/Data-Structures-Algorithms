#include <iostream>
using namespace std;
class Element{
public:
    int i;          // row
    int j;          // column
    int x;          // element
};

class Sparse{

private:
    int m;          // totalRow
    int n;          // totalColumn
    int num;        // totalNonZeros
    Element *ele;   // array of integers

public:
    Sparse(int m, int n, int num){
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[this->num];
    }

    ~Sparse(){
        delete [] ele;
    }

    void read(){
        cout << "Enter non-zero elements" << endl;
        for (int i = 0; i < num; i++){
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
        }
    }

    void display(){
        int k = 0;
        for (int i = 0; i < m; i++){                    // row
            for (int j = 0; j < n; j++){                // column
                if (ele[k].i == i && ele[k].j == j){
                    cout << ele[k].x << " ";
                    k++;
                }

                else{
                    cout << "0 ";
                }

            }
            cout << endl;
        }
    }

};


int main()

{

    Sparse s1(3, 3, 3);

    s1.read();

    s1.display();

    return 0;

}