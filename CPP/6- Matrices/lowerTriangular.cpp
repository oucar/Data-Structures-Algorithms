#include <iostream>
class lowerTriangular{
private:
    int *A;
    int n;
public:
    // Constructor and Destructors
    lowerTriangular(){
        n = 5;
        A = new int[5*(5+1)/2];                 // Amount of non-zero elements
    }

    lowerTriangular(int size){
        n = size;
        A = new int[size*(size+1)/2];           // Amount of non-zero elements
    }

    ~lowerTriangular(){
        delete []A;
    }

    // Methods
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void lowerTriangular::set(int i, int j, int x) {
    if(i>=j){
        int index = (i*(i-1)/2)+(j-1);
        A[index] = x;
    } // end if
} // end set()

int lowerTriangular::get(int i, int j) {
    if(i>=j){
        int index = (i*(i-1)/2)+(j-1);
        return A[index];
    } else{
        return 0;
    } // end conditional
} // end get()

void lowerTriangular::display() {
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i>=j){
                int index = i*(i-1)/2 + (j-1);
                std::cout << A[index] << " ";
            } else {
                std::cout << 0 << " ";
            } // end conditionals
        } // end for
        std::cout << std::endl;
    } // end for
} // end display

int main() {

    int d;
    std::cout << "Dimension:";
    std::cin >> d;

    lowerTriangular lt(d);

    int x;
    std::cout << "Enter all the elements:";

    for(int i = 1; i<=d; i++){
        for(int j=1; j<=d; j++){
            std::cin >> x;
            lt.set(i,j,x);
        } // end inner loop
    } // end outer loop

    lt.display();
    return 0;
}
