/* Reversing a String */
#include <iostream>

void swap(char *x, char *y) {                              // Swapping characters
    char temp = *x;
    *x = *y;
    *y = temp;
}

std::string reverse1(std::string &str) {

    int i, j;

    for (j = 0; str[j] != '\0'; j++) {                  // Finds the length
    }

    j = j - 1;                                          // str[length -1] ---> last element

    for (i = 0; i < j; i++, j--) {
        swap(&str[i], &str[j]);
    }

    return str;

}

int main() {

    std::string willBeReversed = "Onur123";
    std::string reversed = reverse1(willBeReversed);
    std::cout << reversed;


}