class Program
{

    // O(n^2)
    static int[] BubbleSort(int[] arr)
    {
        int[] newArr = new int[arr.Length];
        for(int i = 0; i < arr.Length; i++)
        {
            for(int j = 0; j < arr.Length - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        return arr;
    }


    static void Main(string[] args)
    {
        int[] arr = { 50, 85, 32, 60, 84, 92, 89, 37, 69, 42, 14, 62, 97, 72, 0, 49, 79, 6, 68, 24, 71, 4, 11, 88, 70, 30, 22 };
        int[] sortedArray = BubbleSort(arr);

        for(int i = 0; i < sortedArray.Length; i++)
        {
            Console.Write($"{sortedArray[i]} ");
        }

    }
}