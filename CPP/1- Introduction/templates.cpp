/* Templates
* 
* Generic functions: template functions
* Generic classes: Generic Template classes
* 
* Always write the class first then generate it to generic
*/
#include <iostream>

//T becomes anything you need! (represents data type)
template <class T>
class Mathematics {
private:
	T first;
	T second;

public:
	Mathematics(T first, T second);
	T add();
	T sub();
};//end Class

		//Whenever you use Template, you also need to use it as class name.
		template<class T>
		Mathematics<T>::Mathematics(T first, T second) {

			//"this" refers to members of class
			this->first = first;
			this->second = second;
		}//end constructor

		template<class T>
		T Mathematics<T>::add() {

			T sum;
			sum = first + second;
			return sum;
		}//end add

		template<class T>
		T Mathematics<T>::sub() {

			T sub;
			sub = first - second;
			return sub;
		}//end sub


int main() {

	Mathematics mathObject(13.1, 4.89); //works for int, char also..

	std::cout << "Add: " << mathObject.add() << std::endl << "Subs: " << mathObject.sub(); 

	return 0;

}//end main

