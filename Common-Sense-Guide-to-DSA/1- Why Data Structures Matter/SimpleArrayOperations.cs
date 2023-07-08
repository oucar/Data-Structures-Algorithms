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

    static int[] Insert(int[] arr, int index, int value)
    {
        // Inserting to arr[i+1]
        if (index == arr.Length + 1)
        {
            Console.WriteLine($"Inserting the new value {value} at the end...");

            int[] newArray = new int[arr.Length + 1];

            for(int i = 0; i < arr.Length; i++)
            {
                newArray[i] = arr[i];
            }

            newArray[index - 1] = value;

            return newArray;
        }

        else if (index < 0 || index > arr.Length)
        {
            Console.WriteLine($"Array Length is: {arr.Length}, index given is: {index}! Can't be inserted.");
            return arr;
        } 

        else {
            Console.WriteLine($"Inserting {value} at Index {index}...");

            int[] newArray = new int[arr.Length + 1];

                for(int i = 0; i <= arr.Length; i++)
                {
                    
                    // all elements before stay as they are
                    if ( i < index )
                    {
                        newArray[i] = arr[i];
                    }

                    // index to be inserted
                    else if ( i == index )
                    {
                        newArray[i] = value;
                    }

                    // remaining elements, shifted by 1
                    else
                    {
                        newArray[i] = arr[i - 1];
                    }
                }
            
            return newArray;

        }
    }

    static int[] Delete(int[] arr, int index)
    {

        if (index < 0 || index > arr.Length)
        {
            Console.WriteLine($"Array Length is: {arr.Length}, index given is: {index}! Can't be deleted.");
            return arr;
        }

        else
        {
            Console.WriteLine($"Deleting from Index {index}...");

            int[] newArray = new int[arr.Length - 1];

            for (int i = 0; i < arr.Length-1; i++)
            {

                // all elements before stay as they are
                if (i < index)
                {
                    newArray[i] = arr[i];
                }

                // index to be deleted and the rest
                else if (i >= index)
                {
                    newArray[i] = arr[i+1];
                }
            }

            return newArray;

        }
    }


    // Helper Function
    static void PrintArray(int[] arr)
    {
        for(int i = 0; i < arr.Length; i++)
        {
            Console.Write($"{arr[i]} ");
        }
        Console.WriteLine();

    }

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

        // Insert Operation
        var insertBefore = Insert(numbers, -1, 99);
        PrintArray(insertBefore);

        var insertWayAfter = Insert(numbers, 100, 99);
        PrintArray(insertWayAfter);

        var insertAtTheEnd = Insert(numbers, 6, 99);
        PrintArray(insertAtTheEnd);

        var insertAtTheBeginning = Insert(numbers, 0, 99);
        PrintArray(insertAtTheBeginning);

        var insertAt1 = Insert(numbers, 1, 99);
        PrintArray(insertAt1);

        var insertAt2 = Insert(numbers, 2, 99);
        PrintArray(insertAt2);

        var insertAt3 = Insert(numbers, 3, 99);
        PrintArray(insertAt3);

        var insertAt4 = Insert(numbers, 4, 99);
        PrintArray(insertAt4);

        var insertAt5 = Insert(numbers, 5, 99);
        PrintArray(insertAt5);


        // Delete Operation
        var deleteBefore = Delete(numbers, -1);
        PrintArray(deleteBefore);

        var deleteAfter = Delete(numbers, 99);
        PrintArray(deleteAfter);

        var deleteAtTheBeginning = Delete(numbers, 0);
        PrintArray(deleteAtTheBeginning);

        var deleteAt1 = Delete(numbers, 1);
        PrintArray(deleteAt1);

        var deleteAt2 = Delete(numbers, 2);
        PrintArray(deleteAt2);

        var deleteAt3 = Delete(numbers, 3);
        PrintArray(deleteAt3);

        var deleteAt4 = Delete(numbers, 4);
        PrintArray(deleteAt4);

        var deleteAtTheEnd = Delete(numbers, 5);
        PrintArray(deleteAtTheEnd);

    }
}