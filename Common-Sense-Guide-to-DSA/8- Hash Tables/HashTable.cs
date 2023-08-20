using System.Collections;

class Program
{

    static void Demo()
    {
        Hashtable hashTable1 = new Hashtable();

        // Adding Key value pair Using Add() method
        hashTable1.Add("A1", "Hello");
        hashTable1.Add("A2", "from");
        hashTable1.Add("A3", "HahTable");

        Console.WriteLine("Key Value pairs from hashTable1:");

        foreach (DictionaryEntry ht1 in hashTable1)
        {
            Console.WriteLine("{0}: {1} ", ht1.Key, ht1.Value);
        }

        Hashtable hashTable2 = new Hashtable() { 
            {1, "hello"},
            {2, 234},
            {3, 230.45},
            {4, null}
        };

        Console.WriteLine("\nKey Value pairs from hashTable2:");

        foreach (var ht2 in hashTable2.Keys)
        {
            Console.WriteLine("{0}: {1}", ht2, hashTable2[ht2]);
        }

    }

    static void SpeedLookUp(int[] arr, int itemToLookFor)
    {
        var numbers = new Hashtable();

        foreach(int item in arr)
        {
            numbers.Add(item, true);
        }


        bool result = (numbers[itemToLookFor] == null) ? false : true;
        Console.WriteLine("Does {0} exist in the hash table: {1}", itemToLookFor, result);


    }


    static void Main(string[] args)
    {
        int[] numbers = { 61, 30, 91, 11, 54, 38, 72 };

        Demo();

        SpeedLookUp(numbers, 61);
        SpeedLookUp(numbers, 72);
        SpeedLookUp(numbers, 1000);
    }
}