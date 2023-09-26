class Program
{
    static List<int> tempList = new List<int>{ };

    // Use recursion to write a function that accepts an array of numbers and return a new
    // array containing just the even numbers

    static int[] JustTheEvenNumbers(int[] arr)
    {
        if (arr.Length == 0) return tempList.ToArray();

        else if (arr[0] % 2 == 0)
        {
            tempList.Add(arr[0]);
            return JustTheEvenNumbers(arr.ToList().GetRange(1, arr.Length - 1).ToArray());
        }

        else
        {
            return JustTheEvenNumbers(arr.ToList().GetRange(1, arr.Length - 1).ToArray());
        }

    }



    static void Main(string[] args)
    {
        int[] list = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        var a = JustTheEvenNumbers(list);

        foreach(var item in tempList)
        {
            Console.WriteLine($"{item} ");
        }
    }
}