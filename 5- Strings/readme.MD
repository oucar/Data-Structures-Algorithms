





## String

* **ASCII Code:** is a character [encoding standard](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/ASCII-Table-wide.svg/875px-ASCII-Table-wide.svg.png) for electronic communication.  
* **Unicode:** Universal encoding standard. (See the bottom of the page.)
* ```cpp
	char temp = 'A'; //consumes 1 byte --> MUST   use single quotes
	
	//Below arrays represent the SAME thing!
	char X[5] = {'A', 'B', 'C', 'D', 'E'}; 
	char Y[] = {'A', 'B', 'C', 'D', 'E'};
	char Z[5] = {65, 66, 67, 68, 69};

	// J O H N '\0' 0 0 0 0 0 --> String terminator 
	char name[10] = {'J', 'O', 'H', 'N'};       //array of characters
	char name[10] = {'J', 'O', 'H', 'N', '\0'}; //String --> 5 bytes
	char name[] = {"JOHN"};		      //Double quotes
	
	char *name = "JOHN";			       //Dynamic

	char name[10] = {'O', 'N', 'U', 'R', '\0'};
	printf("%s", name); 				// Even though it's not possible in arrays
	scanf("%s", name); 				// Cannot read more than one word
	gets(name);					// Can read more than one word.
	 ```
* **Reversing a string:**
* ```cpp
	int i, j;
    std::string reversed = str;

    for( i = 0; str[i] != '\0'; i++){}
    i = i -1;				// sets the length


    for(j = 0; i>=0; i--, j++){
        reversed[j] = str[i];
    }
    
    reversed[j] = '\0';
	 ```
---
### Other resources:
:star: [String](https://www.w3schools.com/cpp/cpp_strings.asp)<br>
 ```cpp
//Question: string word = "dacb" to string sortedWord ="abcd";

//There is a sorting algorithm(in the standard library, in the header `<algorithm>`. It sorts inplace, so if you do the following, your original word will become sorted.

std::sort(word.begin(), word.end());
std::string sortedWord = word;			//If you don't want to lose the original, make a copy first.
std::sort(sortedWord.begin(), sortedWord.end());

  ```


> Challenges

:star: [Finding Length of a String]()<br>
:star: [Changing Case of a String]()<br>
:star: [Counting Words and Vowelis in a String]()<br>
:star: [Validating a String]()<br>
:star: [Reversing a String]()<br>
:star: [Comparing String and Checking Palindrome]()<br>
:star: [**Finding Duplicates in a String!!**]()<br>
:star: [Checking if 2 Strings are Anagram (Distinct Letters)]()<br>
:star: [**Permutation of a String!! (not completed)**]()<br>


![Difference Between ASCII and Unicode - Pediaa.Com](https://pediaa.com/wp-content/uploads/2018/07/Difference-Between-ASCII-and-Unicode-Comparison-Summary.jpg)

