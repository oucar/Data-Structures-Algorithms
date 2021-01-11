/* Finding length of a string */
#include <iostream>

int main() {

    std::string s = "welcome";                                  // C++
    //char *s = "welcome";                                      // CLANG
    int count;

    while (s[count] != '\0')
        count++;

    std::cout << "Length is: " << count;

    return 0;
}