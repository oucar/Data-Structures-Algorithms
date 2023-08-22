using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

class Program
{

    static string MissingLetter(string sentence)
    {
        char[] alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".ToLower().ToCharArray();
        char[] sentenceArray = sentence.ToLower().ToCharArray();

        var alphabetHashTable = new Hashtable();
        var sentenceHashTable = new Hashtable();

        foreach (var letter in alpha) alphabetHashTable.Add(letter, true);
        foreach (var letter in sentenceArray) sentenceHashTable.Add(letter, true);

        foreach (var item in alphabetHashTable.Keys)
        {
            if (sentenceHashTable[item] == null)
            {
                return item.ToString();
            }
        }

        return "-1";

    }

    static void Main(string[] args)
    {
        var ml1 = "ABCDEFGHIJKLMNOPQRSTUVWXY";
        var ml2 = "BCDEFGHIJKLMNOPQRSTUVWXYZ";
        var ml3 = "ABCDFGHIJKLMNOPQRSTUVWXYZ";
        var ml4 = "ABCDEFGHIJKLNOPQRSTUVWXYZ";
        var ml5 = "ABCDEFGHIJKLMNOPQRSTUVWXZ";
        var ml6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        Console.WriteLine(MissingLetter(ml1));
        Console.WriteLine(MissingLetter(ml2));
        Console.WriteLine(MissingLetter(ml3));
        Console.WriteLine(MissingLetter(ml4));
        Console.WriteLine(MissingLetter(ml5));
        Console.WriteLine(MissingLetter(ml6));
    }
}