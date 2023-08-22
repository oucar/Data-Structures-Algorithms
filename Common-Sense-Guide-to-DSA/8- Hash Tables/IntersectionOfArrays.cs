using System.Collections;

class Program
{

    static int[] FindIntersectionArray(int[] arr1, int[] arr2)
    {
        var hashTable1 = new Hashtable();
        var hashTable2 = new Hashtable();

        int[] largerArray;

        var intersectionArray = new List<int>();

        largerArray = (arr1.Length > arr2.Length) ? arr1 : arr2;

        // add each elements in the array to the hash tables
        foreach (var item in arr1) hashTable1.Add(item, true);

        foreach (var item in arr2) hashTable2.Add(item, true);

        // if true in both hash tables, add them to the intersection array
        // and return it
        foreach(var item in largerArray)
        {
            if (hashTable1[item] != null && hashTable2[item] != null)
            {
                intersectionArray.Add(item);
            }
        }

        return intersectionArray.ToArray();
    }

    static void Main(string[] args)
    {
        int[] arr1 = { 1, 2, 3, 4, 5 };
        int[] arr2 = { 0, 2, 4, 6, 8 };

        int[] intersectionArray = FindIntersectionArray(arr1, arr2);

        foreach(var item in intersectionArray)
        {
            Console.Write($"{item} ");
        }

    }
}