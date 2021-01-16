/* USE char[] as strings if you're dealing with data structures and algorithms!
 *
 * Permutation of a string
 * Given string: ABC, There are 6 possible permutations (n!).
 * Recursion, Brute Force, Backtracking
 *
 * for loop -> stack = brute force, backtracking
 * recursion --> logic = brute force, backtracking
 * */
#include <iostream>

void perm(char strGiven[], int k){           // k is for result!
    static int usedCharacters[10] = {0};
    static char result[10];
    int i;

    if(strGiven[k] == '\0') {
        result[k] ='\0';
        std::cout << result << ", ";
    } else {
        for (i = 0; strGiven[i] != '\0'; i++) {
            if (usedCharacters[i] == 0) {                 // alphabet is available
                result[k] = strGiven[i];
                usedCharacters[i] = 1;
                perm(strGiven, k + 1);
                usedCharacters[i] = 0;
            } // end if
        } // end for
    }   // end conditionals
}

int main() {
    char strGiven[] = "ABC";
    perm(strGiven, 0);
}
