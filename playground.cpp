#include <iostream>

struct Rectangle {
    int length, width;

    int getLength(){
        return length;
    }

    int getWidth(){
        return width;
    }

};

int main(){
    
    Rectangle r;
    r.length = 1;
    r.width = 3;

    std::cout << r.getLength() << " " << r.getWidth();


    return 0;
}