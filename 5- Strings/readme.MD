





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




> Challenges

:star: [Finding Length of a String]()<br>
:star: [Changing Case of a String]()<br>
:star: [Counting Words and Vowelis in a String]()<br>
:star: [Validating a String]()<br>
:star: [Reversing a String]()<br>
:star: [Comparing String and Checking Palindrome]()<br>
:star: [Finding Duplicates in a String]()<br>
:star: [Finding Duplicates in a String using Bitwise Operations]()<br>
:star: [Checking if 2 Strings are Anagram (Distinct Letters)]()<br>
:star: [Permutation of a String]()<br>


![Difference Between ASCII and Unicode - Pediaa.Com](https://pediaa.com/wp-content/uploads/2018/07/Difference-Between-ASCII-and-Unicode-Comparison-Summary.jpg)

