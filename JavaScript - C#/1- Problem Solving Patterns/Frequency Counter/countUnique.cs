using System;
using System.Collections.Generic;

class Program
{
    static int CountUniqueValues(int[] arr)
    {
        Dictionary<int, int> valueCount = new Dictionary<int, int>();

        foreach (int val in arr)
        {
            if (valueCount.ContainsKey(val))
                valueCount[val]++;
            else
                valueCount[val] = 1;
        }

        return valueCount.Count;
    }

    static void Main(string[] args)
    {
        int[] arr = { 1, 2, 3, 4, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5 };
        int uniqueCount = CountUniqueValues(arr);
        Console.WriteLine("Number of unique values: " + uniqueCount);
    }
}
