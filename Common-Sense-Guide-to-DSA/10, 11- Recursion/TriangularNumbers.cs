class Program
{
    static List<int> triangularNumbers = new List<int>{ 1, 3, 5, 10, 15, 21, 28, 36, 45 };

    // 1, 3, 6, 10, 15, 21
    // 1 + 2 = 3
    // 3 + 3 + 6
    // 6 + 4 = 10
    // 10 + 5 = 15
    // 15 + 6 = 21
    // 21 + 7 = 28 ...

    // Write a function that accepts a number for N and returns the correct number from the series.
    // If the function was passed the number 7, it should return 28.
    // Recursion would make this way more complex 
    static int TriangularNumbers(int number)
    {
        for (int i = 0; i < triangularNumbers.ToArray().Length; i++)
        {
            if (i == number) return triangularNumbers[i - 1];
        }

        return -1;

    }



    static void Main(string[] args)
    {
        var a = TriangularNumbers(7);

        Console.WriteLine(a);

    }
}