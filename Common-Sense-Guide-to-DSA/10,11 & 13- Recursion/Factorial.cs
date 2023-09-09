class Program
{
    static int Factorial(int number)
    {
        if (number == 1) return 1;

        else
        {
            return number * Factorial(number - 1);
        }
    }


    static void Main(string[] args)
    {
        var result = Factorial(5);
        Console.WriteLine(result);

    }
}