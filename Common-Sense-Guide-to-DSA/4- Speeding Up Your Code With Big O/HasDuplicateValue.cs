class Program
{
    // HAS DUPLICATE VALUES 

    // Quadratic Solution O(n^2)
    static bool QuadraticHasDuplicateValue(int[] arr)
    {
        for(int i = 0; i < arr.Length; i++)
        {
            for(int j = 0; j < arr.Length; j++)
            {
                if (i != j && arr[i] == arr[j]) return true;
            }
        }
        return false;
    }


    // Linear Solution O(n)
    static bool LinearHasDuplicateValue(int[] arr)
    {
        // worst case scenario, all entries in the array are the same.
        int[] existingNumbers = new int[arr.Length];
        

        for (int i = 0; i < arr.Length; i++)
        {

            // Assuming 99 won't be used in the given array parameter...
            if (existingNumbers[arr[i]] == 99)
            {
                return true;
            }

            else
            {
                existingNumbers[arr[i]] = 99;
            }
        }
        return false;
    }


    static void Main(string[] args)
    {
        int[] arr = { 1, 2, 3, 1, 4, 5 };
        Console.WriteLine(QuadraticHasDuplicateValue(arr));
        Console.WriteLine(LinearHasDuplicateValue(arr));

    }
}