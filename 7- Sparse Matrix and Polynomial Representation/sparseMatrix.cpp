// Write a function for adding them together!

#include <iostream>

class Element{
public:
    int i;      // row number
    int j;      // column number
    int x;      // element
};

class Sparse{
private:
    int m;      // dimensions
    int n;      // dimension
    int num;    //number of non-zero elements
    Element *ele;

public:
    Sparse(int m, int n, int num){
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[this->num];       // Dynamically allocated
    } // end constructor

    ~Sparse(){
        delete []ele;
    } // end destructor

    // reads all the elements
    void read(){
        std::cout << "Enter non-zero elements:\n";
        for(int i =0; i < num; i++){
            std::cin >> ele[i].i >> ele[i].j >> ele[i].x;           // row number, column number, element itself
        }
    } // end read()

    void display(){
        int k = 0;                  // keeps track of non-zero elements
        for (int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                if(ele[k].i == i && ele[k].j == j){
                    std::cout << ele[k].x << " ";
                    k++;
                } else {
                    std::cout << "0 ";
                } // end conditional
            } // end inner loop for columns
            std::cout << std::endl;
        } // end outer loop for rows
    } // end display()
    
};


int main(){
    Sparse s1(5,5,5);
    s1.read();
    s1.display();
}