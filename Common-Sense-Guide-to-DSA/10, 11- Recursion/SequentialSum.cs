class Program
{
    // Print the sum of numbers from low to high
    // low + (low + 1) + (low + 2) + ... + high
    static int SequentialSum(int low, int high)
    {
        if (high == low) return low;

        else
        {
            return (high + SequentialSum(low, high - 1));
        }

    }


    static void Main(string[] args)
    {
        var result = SequentialSum(1, 10);
        Console.WriteLine(result);

    }
}