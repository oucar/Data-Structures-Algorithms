/* Validating a String  -- Special characters are not allowed */
#include <iostream>

bool checkIfValid(std::string str) {

    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 48 && str[i] <= 57))
            return false;
    }   //end for
    return true;
}//end checkIfValid()

int main() {

    std::string valid = "Onur123";
    std::string invalid = "Onur123*";

    std::cout << "Onur123: " << checkIfValid(valid) << std::endl;
    std::cout << "Onur123*: " << checkIfValid(invalid) << std::endl;


}