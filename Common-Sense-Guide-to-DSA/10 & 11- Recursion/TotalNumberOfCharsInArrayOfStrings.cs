class Program
{

    // Write a function that accepts an array of strings and returns the total number of
    // chars accrsos all the strings

    static int TotalNumberOfChars(string[] arr)
    {
        if (arr.Length == 1) return arr[0].Length;

        else
        {
            return arr[0].Length + TotalNumberOfChars(arr.ToList().GetRange(1, arr.Length - 1).ToArray());
        }

    }



    static void Main(string[] args)
    {
        string[] list = { "ab", "c", "def", "ghj" };
        var a = TotalNumberOfChars(list);

        Console.WriteLine(a);
    }
}