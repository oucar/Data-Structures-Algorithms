/* Changing Case of A String
 *
 *  A- 65           a- 97             -->   97  -   65  =   32
 *  B- 66           b- 98             -->   98  -   66  =   32
 *  ...             ...                                    ...
 *
 *
 * */
#include <iostream>

void toUpperCase(std::string &stringGiven) {

    for (int i = 0; stringGiven[i] != '\0'; i++)
        if (stringGiven[i] >= 97 && stringGiven[i] <= 122) {            // if it's lower cased
            stringGiven[i] = stringGiven[i] - 32;
        }//end if

}//end toUpperCase()

void toLowerCase(std::string &stringGiven) {

    for (int i = 0; stringGiven[i] != '\0'; i++)
        if (stringGiven[i] >= 65 && stringGiven[i] <= 90) {             // if it's upper cased
            stringGiven[i] = stringGiven[i] + 32;
        }//end if

}//end toLowerCase()

void
toggle(std::string &str) {                                    // if it's upperCase make it lowerCase and if it's lowerCase make it upperCase

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 65 && str[i] <= 90) {                  // ABC......XYZ
            str[i] = str[i] + 32;
        } else if (str[i] >= 97 && str[i] <= 122) {         // abc.....xyz
            str[i] = str[i] - 32;
        }//end conditionals
    }//end for

}//end toggle()

int main() {

    std::string s = "WELCOME";                                  // C++

    toLowerCase(s);
    std::cout << s << std::endl;
    toUpperCase(s);
    std::cout << s << std::endl;


    std::string america = "UniTeD sTatEs oF mURicA";
    std::cout << "Before: " << america << std::endl;

    toggle(america);
    std::cout << "Toggle: " << america << std::endl;

    toLowerCase(america);
    std::cout << "toLowerCase(): " << america << std::endl;

    toUpperCase(america);
    std::cout << "toUpperCase(): " << america << std::endl;

    return 0;
}