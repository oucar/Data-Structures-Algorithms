// Structure as parameter
#include <iostream>

struct Rectangle{
    int height;
    int width;
};

int area(struct Rectangle *rect){
    return (rect->height*rect->width);
} // end area();

int areaByReference(struct Rectangle &rect){
    int width_ = rect.width = 20;
    int height_ = rect.height = 20;
    return(width_*height_);
} // end areaByReference();

int areaByAddress(struct Rectangle *rect){
    int width_ = rect->width = 10;
    int height_ = rect->height = 10;
    return(width_*height_);
} // end areaByAddress();


// IMPORTANT! - Create a new instance of rectangle in the heap.
struct Rectangle* createRect(){

    struct Rectangle* rect = new Rectangle;
    rect->width = 30;
    rect->height = 30;

    return rect;
} // end createRect();

int main(void){

    struct Rectangle rect;
    rect.height = 10;
    rect.width = 10;

    int areaByRef_ = areaByReference(rect); //should return 20*20 = 400!
    std::cout << areaByRef_ << std::endl;

    int areaByAdd_ = areaByAddress(&rect);      // has been changed back to 10*10 = 100!
    std::cout << areaByAdd_ << std::endl;

    // *****************************
    struct Rectangle* rect_heap = createRect();
    std::cout << "New rectangle that is created in the heap by a function: " << rect_heap->height << ", " << rect_heap->width << " --> " << area(rect_heap);

}//end main