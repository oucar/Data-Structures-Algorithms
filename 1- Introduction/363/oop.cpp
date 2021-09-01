// Class: User-defined data-type which has data members and member functions
// Encapsulation: Encapsulation is a process of "combining data members and functions in a single unit called class." This is to prevent the access to the data directly, the access to them is provided through the functions of the class. It is one of the popular feature of Object Oriented Programming(OOPs) that helps in data hiding.
// Abstraction: Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.
    // we can group data members in c++ classes.
// Polymorphism: Typically, polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.
    // function and operator overloading
// Inheritance: Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.
    // animal class and cat class that inherits from animal class
#include <iostream>

// FIRST EXAMPLE
// base class
class Vehicle{
public:
    Vehicle()
    {
        std::cout << "This is a Vehicle" << std::endl;
    }
};
class Car: public Vehicle{};
class Bus: public Vehicle{};

int main() {

    Car obj1;
    Bus obj2;
return 0;
}
