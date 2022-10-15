/* Finding Duplicates in a String --> Similar to finding duplicates in an array */
#include <iostream>

//  f   i   n   d   i   n   g   \0
// Method 1: Compare it with other letters
void findDuplicates(std::string str){

    int i,j;

    for(i = 0; str[i]!='\0'; i++){
        int count = 1;

        if(str[i] != -1){
            for(j = i+1; str[j]!= '\0'; j++){
                if(str[i] == str[j]){
                    count++;
                    str[j] = -1;                                            // if you found the same letter, replace it with -1 so that it will be counted only one time
                } // end if
            } // end for
        }// end if

        if(count > 1)
            std::cout << str[i] << " has been duplicated " << count << " times.\n";

    } // end for
}

// Method 2 : HashTable or Counting
void findDuplicateHashing(std::string str){

    // 99 - 122     -->     a, z    -->      0 25   -->  26 letters
    // Make sure you convert it to lower case for a real word application
    int i;
    int hash[26]={0};

    // Make them all 0.
    for(i=0; i<26; i++){
        hash[i] = 0;
    }

    // Insert to the hash array
    for(int j = 0; str[j]!='\0'; j++){
        hash[str[j] - 97] += 1;
    }// end for

    // Scan the hash array
    for(int k = 0; k < 26; k++){
        if(hash[k] > 1) {
            char asCharacter = '0' + k + '1' ;
            std::cout << asCharacter << " has been duplicated " << hash[k] << " times.\n";
        }
    }//end for

}

int main() {
    //findDuplicates("onurucar");
    findDuplicateHashing("onurucarali");
}