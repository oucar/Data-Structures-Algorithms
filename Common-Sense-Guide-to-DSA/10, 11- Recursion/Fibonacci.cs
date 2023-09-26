class Program
{
    static List<int> F = new List<int> { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

    // What is the definition of the Fibonacci number at location X in the sequence?
    // Answer: fib(x) = fib(x-1) + fib(x-2);
    // Lets write a recursive function to compute the Nth number in the Fibonacci sequence.


    // 0 1 1 2 3 5 8 13 
	// every term is addition of previous 2 terms.
    // fib(n) = fib(n-2) + fib(n-1)            ---->   n>1
	// fib(n) = 1					           ---->   n=1
	// fib(n) = 0                              ---->   n=0

    static int Fibonacci(int n)
    {
        if (n <= 1) return n;

        else
        {
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        }

    }

    // MEMOIZATION -- Storing the results
    // In Fibonacci() we're calculating same values over and over again.
    // So, declare and array and hold the values you calculated.
    static int BetterFibonacci(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        else
        {

            if (F[n - 2] == - 1) F[n - 2] = BetterFibonacci(n - 2);
            if (F[n - 1] == - 1) F[n - 1] = BetterFibonacci(n - 1);

            return F[n - 2] + F[n - 1];
        }
    }

    static void Main(string[] args)
    {
        int list = 10;
        var a = Fibonacci(list);

        Console.WriteLine(a);


        var b = BetterFibonacci(list);
        Console.WriteLine(b);

    }
}