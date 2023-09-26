class Program
{
    // Finding the minimum value in a list of numbers.
    // The minumum value in a list is either the first number or the
    // smallest of the remaining numbers.
    static int FindMin(int[] arr)
    {
        if (arr.Length == 1)
        {
            return arr[0];
        }

        int possibleMin1 = arr[0];
        int possibleMin2 = FindMin(arr.ToList().GetRange(1, arr.Length - 1).ToArray());

        if (possibleMin1 < possibleMin2) return possibleMin1;
        else return possibleMin2;
        
    }


    static void Main(string[] args)
    {
        int[] list = { 1, 2, 3, 4, 5 };
        int[] list2 = { 645546451, 22, 33, 412, 55 };

        var a = FindMin(list);
        Console.WriteLine(a);

        var b = FindMin(list2);
        Console.WriteLine(b);
    }
}