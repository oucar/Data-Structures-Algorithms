/* Static and Global Variables in Recursion */
#include <iostream>

int func_recursion(int nGiven){
    while(nGiven > 0) return func_recursion(nGiven-1) + nGiven;
    return 0;
}

int func_recursion_static(int nGiven){
    int static x = 0;
    while(nGiven > 0) {
        x++;
        return func_recursion_static(nGiven - 1) + x;
    }

    return 0;
}

int main() {

    // Regular recursion
	int nGiven = 5;
    // Should print 15 (5 + 4 + 3 + 2 + 1)
    int recursive_call = func_recursion(nGiven);
    std::cout << recursive_call << std::endl;

    // Recursion with static
    int nGivenStatic = 10;
    // Should print 100 (10 + 10 + 10 + ... + 10)
    int recursive_call_static = func_recursion_static(nGivenStatic);
    std::cout << recursive_call_static << std::endl;

	return 0;
}



