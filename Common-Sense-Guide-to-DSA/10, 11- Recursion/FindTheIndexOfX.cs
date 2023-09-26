class Program
{
    static int indexCounter = 0;

    // Using recurstion - write a function that accepts a string and returns the first index that contains
    // the letter 'x'. Assume the string definitely has at least one 'x'.
    static string FindTheIndexOfX(string str)
    {
        if (str.Length == 0) return "-1";

        else if (str[0] == 'x')
        {
            return indexCounter.ToString();
        }

        else
        {
            indexCounter++;
            return FindTheIndexOfX(str.Substring(1, str.Length - 1));
        }

    }



    static void Main(string[] args)
    {
        var a = FindTheIndexOfX("abnckdoeogjgkfodjsofjdkix");
        Console.WriteLine(a);

        indexCounter = 0;
        var b = FindTheIndexOfX("asdx");
        Console.WriteLine(b);

        indexCounter = 0;
        var c = FindTheIndexOfX("xasd");
        Console.WriteLine(c);

    }
}