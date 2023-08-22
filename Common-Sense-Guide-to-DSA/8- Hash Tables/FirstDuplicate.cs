using System.Collections;
using System.Collections.Generic;

class Program
{

    static string FirstDuplicate(string[] arr)
    {
        var hashTable = new Hashtable();

        foreach (var item in arr)
        {
            if (hashTable[item] != null) return item.ToString();
            else hashTable.Add(item, true);
        }

        return "-1";
    }

    static void Main(string[] args)
    {
        string[] arr1 = { "1", "2", "3", "4", "5", "1", "2", "3"};
        string[] arr2 = { "a", "b", "c", "d", "c" };
        string[] arr3 = { "1", "2" };

        var dp1 = FirstDuplicate(arr1);
        var dp2 = FirstDuplicate(arr2);
        var dp3 = FirstDuplicate(arr3);


        Console.WriteLine(dp1);
        Console.WriteLine(dp2);
        Console.WriteLine(dp3);
    }
}