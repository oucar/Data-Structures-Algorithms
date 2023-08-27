class Program
{
    // Finding the maximum value in a list of numbers.
    // The maximum value in a list is either the first number or the
    // biggest of the remaining numbers.
    static int FindMax(int[] arr)
    {
        if (arr.Length == 1)
        {
            return arr[0];
        }

        int possibleMax1 = arr[0];
        int possibleMax2 = FindMax(arr.ToList().GetRange(1, arr.Length - 1).ToArray());

        if (possibleMax1 > possibleMax2) return possibleMax1;
        else return possibleMax2;
        
    }


    static void Main(string[] args)
    {
        int[] list = { 1, 2, 3, 4, 5 };
        int[] list2 = { 645546451, 22, 33, 412, 55 };

        var a = FindMax(list);
        Console.WriteLine(a);

        var b = FindMax(list2);
        Console.WriteLine(b);
    }
}