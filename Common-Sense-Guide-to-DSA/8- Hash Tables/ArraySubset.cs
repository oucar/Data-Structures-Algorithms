using System.Collections;

class Program
{

    static bool IsSubset(int[] arr1, int[] arr2)
    {
        int[] largerArray;
        int[] smallerArray;
        var hashTable = new Hashtable();

        // Determine which array is smaller
        if(arr1.Length > arr2.Length)
        {
            largerArray = arr1;
            smallerArray = arr2;
        }
        else
        {
            largerArray = arr2;
            smallerArray = arr1;
        }

        // Store all elements from largerArray inside the HashTable
        foreach(int item in largerArray)
        {
            hashTable.Add(item, true);
        }

        // Iterate thru each item in smallerArray and return false if that's the case
        foreach(int item in smallerArray)
        {
            if (hashTable[item] == null) return false;
        }

        return true;

    }

    static void Main(string[] args)
    {
        int[] numbers = { 61, 30, 91, 11, 54, 38, 72 };
        int[] arr1 = { 91, 54, 72 };
        int[] arr2 = { 61, 30, 91, 11, 54, 38, 72 };
        int[] arr3 = { 91, 30 };
        int[] arr4 = { };
        int[] arr5 = { 100, 200 };

        Console.WriteLine(IsSubset(numbers, arr1));
        Console.WriteLine(IsSubset(numbers, arr2));
        Console.WriteLine(IsSubset(numbers, arr3));
        Console.WriteLine(IsSubset(numbers, arr4));
        Console.WriteLine(IsSubset(numbers, arr5));

    }
}