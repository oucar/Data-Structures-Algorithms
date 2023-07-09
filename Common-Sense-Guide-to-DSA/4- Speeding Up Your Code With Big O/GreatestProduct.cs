class Program
{
    // Given an array - find greatest product of any pair of two elements from the array

    // Quadratic Solution O(n^2)
    static int QuadraticGreatestProduct(int[] arr)
    {
        // assuming size of the array is always greater than 2
        int greatestProduct = arr[0] * arr[1];

        for(int i = 0; i < arr.Length; i++)
        {
            for(int j = (i+1); j < arr.Length; j++)
            {
                if(i != j && arr[i] * arr[j] > greatestProduct) 
                {
                    greatestProduct = arr[i] * arr[j];
                }
            }
        }
        return greatestProduct;
    }

    // Linear Solution O(n)
    static int LinearGreatestProduct(int[] arr)
    {
        // TODO


    }




    static void Main(string[] args)
    {
        int[] arr = { 1, 42, 0, 15, 10, 5, 6, 2, 100, 6, 176 };
        Console.WriteLine(QuadraticGreatestProduct(arr));

    }
}