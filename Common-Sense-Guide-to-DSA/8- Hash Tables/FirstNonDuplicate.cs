using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static string FirstNonDuplicate(string sentence)
    {
        List<char> nonDup = new List<char>();
        var hashTable = new Hashtable();

        // turn the sentence into a list
        var arr = sentence.ToCharArray();


        foreach (var item in arr)
        {
            // if item has already been added before, increment it by 1.
            if (hashTable[item] != null)
            {
                var currentCount = (int)hashTable[item];
                hashTable[item] = currentCount + 1;
                nonDup.Remove(item);
            }
            else
            {
                hashTable.Add(item, 1);
                nonDup.Add(item);
            }

        }

        if (nonDup.Count > 0)
        {
            // Return the first element in nonDup list
            return nonDup[0].ToString();
        }

        return $"No non-duplicate elements in '{sentence}'.";

    }

    static void Main(string[] args)
    {
        // Test case with non-duplicated character at the beginning:
        // Expected output: 'n'
        var s1 = "minimum";
        Console.WriteLine(FirstNonDuplicate(s1));

        // Test case with non-duplicated character at the end:
        // Expected output: 'a'
        var s2 = "maximum";
        Console.WriteLine(FirstNonDuplicate(s2));

        // Test case with non-duplicated character in the middle:
        // Expected output: 'h'
        var s3 = "hello";
        Console.WriteLine(FirstNonDuplicate(s3));

        // Test case with all characters duplicated:
        // Expected output: No non-duplicated character
        var s4 = "abcdefabcdef";
        Console.WriteLine(FirstNonDuplicate(s4));

        // Test case with mixed upper and lower case characters:
        // Expected output: 'A'
        var s5 = "AbcdEeFGg";
        Console.WriteLine(FirstNonDuplicate(s5));

        // Test case with an empty string:
        // Expected output: No non-duplicated character
        var s6 = "";
        Console.WriteLine(FirstNonDuplicate(s6));

        // Test case with a single character:
        // Expected output: 'a'
        var s7 = "a";
        Console.WriteLine(FirstNonDuplicate(s7));

        // Test case with a string containing numbers:
        // Expected output: 'a'
        var s8 = "a1b2c3d4e5";
        Console.WriteLine(FirstNonDuplicate(s8));

        // Test case with a longer string and multiple non-duplicated characters:
        // Expected output: 'e'
        var s9 = "racecarfast";
        Console.WriteLine(FirstNonDuplicate(s9)); 



    }
}