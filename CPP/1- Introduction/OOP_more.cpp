/* 
*/
#include <iostream>
#include <vector>


class Bunny {

private:
	std::string name;
	std::string gender;
	std::string colour;
	int age;


public:


	//Constructor and destructor
	Bunny();
	Bunny(std::string name, std::string gender, std::string coluor, int age);
	~Bunny();

	//Getter functions
	int getAge() { return this->age; } 
	static int totalCount; //Static variables share the same value for all objects of the class
	static int thisMany() { return totalCount; }

	//Setter functions
	void setName(std::string name) { this->name = name; }
	void setGender(std::string gender) { this->gender = gender; }
	void setColor(std::string color) {this->colour = colour;}
	void setAge(int age) { this->age = age; }
	

	
	
};

Bunny::Bunny() {
	this->name = "N/A";
	this->gender = "N/A";
	this->colour = "N/A";
	this->age = -1;
	totalCount++;

}//end constructor

Bunny::Bunny(std::string name, std::string gender, std::string colour, int age) {
	this->name = name;
	this->gender = gender;
	this->colour = colour;
	this->age = age;
	totalCount++;
	
}//end constructor

Bunny::~Bunny() {
	totalCount--;
};//end destructor

int Bunny::totalCount = 0;

int main() {
	Bunny arr[5];

	for (int i = 0; i < 5; i++) {
		Bunny bunny;
		arr[i] = bunny;
		bunny.setAge(i);
		std::cout << i << ": " << bunny.getAge() << std::endl;
	}//end for

	arr[1].setAge(15);
	std::cout << "New age of arr[1]: " << arr[1].getAge() << std::endl;
	

	std::cout << Bunny::thisMany() << " instances found!"; 

	return 0;

}//end main

