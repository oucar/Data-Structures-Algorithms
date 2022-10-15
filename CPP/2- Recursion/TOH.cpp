/* Tower of Hanoi
 *
 * Source Tower, Helper Tower, Destination Tower
 * https://www.youtube.com/watch?v=q6RicK1FCUs
 */

/*
	n : number of disks
	A : Source Tower
	B : Helper Tower
	C : Destination Tower
*/

#include <iostream>
// O(2^n)
void TOH(int n, int A, int B, int C){ 

	static int counter = 1;

	if (n > 0){

		// Move n-1 discs from A to B using C
		TOH(n - 1, A, C, B);
		std::cout << counter << " : from " << A << " to " << C << std::endl;
		counter++;
		// Move n-1 dicsc from B to C using A
		TOH(n - 1, B, A, C);

	} // end if
} // end function

int main(){

	// O(2^n)
	TOH(3, 1, 2, 3);

	return 0;
}
