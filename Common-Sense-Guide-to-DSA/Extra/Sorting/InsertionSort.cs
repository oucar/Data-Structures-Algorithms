class Program
{
    static int[] InsertionSort(int[] arr)
    {
        // iterate thru the array
        for (int i = 0; i < arr.Length; i++)
        {
            int tempValue = arr[i];
            int position = i - 1;

            while(position >= 0)
            {
                if (arr[position] > tempValue)
                {
                    // move the smaller value to the left
                    arr[position + 1] = arr[position];
                    position = position - 1;
                }
                else break;

                // move the temp value to the right
                arr[position + 1] = tempValue;
            }
        }

        return arr;
    }



    static void Main(string[] args)
    {
        int[] arr = { 1, 42, 0, 15, 10, 5, 6, 2, 100, 6, 176 };

        int[] sortedArr = InsertionSort(arr);

        for (int i = 0; i < sortedArr.Length; i++)
        {
            Console.Write($"{sortedArr[i]}, ");
        }

    }
}