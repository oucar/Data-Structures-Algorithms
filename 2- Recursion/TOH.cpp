/* Tower of Hanoi
* 
* Source Tower, Helper Tower, Destination Tower
*/

/*
	n : number of disks
	A : Source Tower
	B : Helper Tower
	C : Destination Tower
*/

#include <iostream> 


void TOH(int n, int A, int B, int C) { // O(2^n)

	static int counter = 1; 
	
	if (n > 0) {

		TOH(n - 1, A, C, B); 
		std::cout << counter << " : from " << A << " to " << C << std::endl;
		counter++;
		TOH(n - 1, B, A, C);
		
	}//end if
}//end function

int main() {

	TOH(3, 1, 2, 3); // O(2^n)

	return 0;
}


