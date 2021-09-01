// A class constructor is a special member function of a class that is executed whenever we create new objects of that class.
// A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

#include <iostream>
class Dog {
private:
    std::string name;
    std::string gender;
    std::string color;
    int age;

public:
    // Constructors, Destructor
    Dog();
    Dog(std::string name, std::string gender, std::string color, int age);
    ~Dog();

    // Getter functions
    std::string getName() { return this->name; };
    std::string getGender() { return this->gender; };
    std::string getColor() { return this->color; };
    int getAge() { return this->age; };

    // Setter functions
    void setName(std::string name) { this->name = name; };
    void setGender(std::string gender) { this->gender = gender; };
    void setColor(std::string color) { this->color = color; };
    void setAge(int age) { this->age = age; };

    // Statics
    static int totalCount;      // Static variables share the same value for all objects of a class.
    static int thisMany() { return totalCount; };
};

Dog::Dog() {
    this->name = "N/A";
    this->gender = "N/A";
    this->color = "N/A";
    this->age = 0;
    totalCount++;
}

Dog::Dog(std::string name, std::string gender, std::string color, int age){
    this->name = name;
    this->gender = gender;
    this->color = color;
    this->age = age;
    totalCount++;
}

Dog::~Dog() {
    totalCount--;
}

int Dog::totalCount = 0;

int main() {

    Dog arr[5];

    for (int i = 0; i < 5; i++){
        Dog dog;
        arr[i] = dog;
        arr[i].setAge(i);
        arr[i].getAge();
    }

    arr[0].setAge(34);
    std::cout << "New age of arr[0]: " << arr[0].getAge() << std::endl;

    std::cout << Dog::thisMany() << " instances have been found!";

    return 0;
}
