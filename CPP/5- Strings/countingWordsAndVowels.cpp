/* Counting Vowels and Words */
#include <iostream>

using namespace std;

int main() {
    std::string line = "America baby";
    int vowels, consonants, digits, spaces;

    vowels = consonants = digits = spaces = 0;

    for (int i = 0; line[i] != '\0'; ++i) {

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } 
        
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            ++consonants;

        else if (line[i] >= '0' && line[i] <= '9')
            ++digits;
        
        else if (line[i] == ' ')
            ++spaces;
        
    } // end for

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;
    cout << "Words: " << spaces + 1 << endl;

    return 0;
}