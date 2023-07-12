class Program
{
    static int[] SelectionSort(int[] arr)
    {
        // iterate thru the array
        for(int i = 0; i < arr.Length; i++)
        {
            int lowestNumberIndex = i;

            // inner window (goes from index i --> arr.Length) as i increases
            for(int j = i + 1; j < arr.Length; j++)
            {
                if (arr[j] < arr[lowestNumberIndex])
                {
                    lowestNumberIndex = j;
                }
            }

            // swap
            if(lowestNumberIndex != i)
            {
                int temp = arr[i];
                arr[i] = arr[lowestNumberIndex];
                arr[lowestNumberIndex] = temp;
            }

        }

        return arr;
    }



    static void Main(string[] args)
    {
        int[] arr = { 1, 42, 0, 15, 10, 5, 6, 2, 100, 6, 176 };

        int[] sortedArr = SelectionSort(arr);

        for (int i = 0; i < sortedArr.Length; i++) 
        {
            Console.Write($"{sortedArr[i]}, ");
        }

    }
}