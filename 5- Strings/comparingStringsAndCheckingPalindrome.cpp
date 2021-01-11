/* Comparing Two Strings, Checking iif Palindrome */
#include <iostream>

void swap(char *x, char *y) {                              // Swapping characters
    char temp = *x;
    *x = *y;
    *y = temp;
}

bool checkTwo(std::string word1, std::string word2) {

    for (int i = 0, j = 0; (word1[i] != '\0' || word2[j] != '\0'); i++, j++) {
        if (word1[i] != word2[j]) {
            return false;
        } // end if
    } //end for
    return true;

} // end checkTwo()

void checkPalindrome(std::string word1, std::string word2) {

    int i, j;
    for (i = 0, j = 0; (word1[i] != '\0' && word2[j] != '\0'); i++, j++) {

        if (word1[i] != word2[j])
            break;
    }//end for

    if (word1[i] == word2[j])
        std::cout << "Equal";

    else if (word1[i] < word2[j])
        std::cout << word1 << " is SMALLER than " << word2;
    else if (word1[i] > word2[j]) {
        std::cout << word1 << " is GREATER than " << word2;
    }//end conditionals

} // end checkPalindrome()

int main() {

    std::string word1 = "OnurA";
    std::string word2 = "OnurZ";

    std::cout << checkTwo(word1, word2) << std::endl;
    checkPalindrome(word1, word2);


}