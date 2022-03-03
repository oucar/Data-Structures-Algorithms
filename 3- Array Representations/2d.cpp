/* 2D */
#include <iostream>

int main() {


	/*                      1                                 */
	int A[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	A[1][2] = 15;					//1st row, 2nd column

	std::cout << A[1][2] << std::endl;

	/*                      2                                 */
	/*            ARRAY OF INTEGER POINTERS                   */

	/*
		# --> O O O O
		# --> O O O O
		# --> O O O O

		# -> These arrays pointer to their own arrays
	*/

	int* B[3];						//Easiest way!

	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];
	B[1][2] = 15;					//Syntax is the same -- Use a for loop to set the values






	/*                          3                              */
	/*			       		DOUBLE POINTER                     */

	/*
	# --> O O O O O
	# --> O O O O O
	# --> O O O O O


	# -> These arrays pointer to their own arrays
	*/



	int** C;			//This is in stack, others on heap			
	C = new int*[3];

	C[0] = new int [5];
	C[1] = new int [5];
	C[2] = new int [5];


	for (int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			//...
		}//end for
	}//end for

	return 0;
}


