class Program
{
    // Mean Average of Even Numbers of the Array
    // O(n)
    static double MeanAverageOfEvenNumbers(int[] arr)
    {
        double sum = 0;
        double countOfEvenNumbers = 0;

        // iterate thru the array
        for(int i = 0; i < arr.Length; i++)
        {
            if (arr[i] % 2 == 0)
            {
                sum += arr[i];
                countOfEvenNumbers++;
            }
        }

        return sum / countOfEvenNumbers;

    }



    static void Main(string[] args)
    {
        // 0 + 2 + 4 + 6 + 8 = 20
        // 20 / 5 = 4
        int[] arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
        Console.WriteLine(MeanAverageOfEvenNumbers(arr));


    }
}