#include <iostream>

struct Matrix{
    int *A;
    int n;                  // n by n
};

void set(struct Matrix *m, int i, int j, int x){
    if(i==j)
        m->A[i-1] = x;
} // end set

int get(struct Matrix m, int i, int j){
    if(i==j)
        return m.A[i-1];
    else return 0;
} // end get

void display(struct Matrix m){
    int i, j;

    for(i=0; i<m.n; i++){
        for(j=0; j<m.n; j++){
            if(i==j) {
                std::cout << m.A[i] << " ";
            } else{
                std::cout << "0 ";
            } // end conditionals
        } //end inner loop
        std::cout << std::endl;
    } // end outer loop
} // end display

int main() {

    struct Matrix m;
    m.A = new int[4];
    m.n = 4;                // 4 by 4

    set(&m, 1,1,5);
    set(&m, 2,2,1);
    set(&m, 3,3,3);
    set(&m, 4,4,6);
    display(m);

    std::cout << "M[1,1]: "<<get(m, 1,1);

    delete []m.A;

    return 0;
}
