using System;
using System.Collections.Generic;
using System.Reflection;

class Program
{

    static int Read(int[] arr, int index)
    {
        if (index < arr.Length || index >= arr.Length) {
            return -1;
        }

        return arr[index];
    }

    static bool Search(int[] arr, int search)
    {
        for(int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == search)
            {
                return true;
            }
        }
        return false;
    }

    //Array Insert()
    //{

    //}

    //Array Delete()
    //{

    //}


    static void Main(string[] args)
    {
        int[] numbers = { 1, 2, 3, 4, 5 };
       
        // Read Operation
        int indexToBeRead = 4;
        int readResult = Read(numbers, indexToBeRead);

        Console.WriteLine("Read index {0}: {1}", indexToBeRead, readResult);

        // Search Operation
        int indexToBeSearchedAndFound = numbers[4];
        int indexToBeSearchedAndNotFound = 99;
        bool foundResult = Search(numbers, indexToBeSearchedAndFound);
        bool notFoundResult = Search(numbers, indexToBeSearchedAndNotFound);

        Console.WriteLine("Search {0}: {1}", indexToBeSearchedAndFound, foundResult);
        Console.WriteLine("Search {0}: {1}", indexToBeSearchedAndNotFound, notFoundResult);


    }
}