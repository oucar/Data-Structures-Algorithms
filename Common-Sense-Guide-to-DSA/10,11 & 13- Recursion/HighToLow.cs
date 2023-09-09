class Program
{

    // Print numbers from high to low using Recursion
    static void HighToLow(int low, int high)
    {
        if (high == 0)
        {
            Console.WriteLine(0);
            return;
        }

        else
        {
            Console.WriteLine(high);
            HighToLow(low, high - 2);
        }
    }


    static void Main(string[] args)
    {
        HighToLow(0, 10);
    }
}