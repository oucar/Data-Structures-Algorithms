using Playground;

class Program
{

    // O(N log N)
    static int[] QuickSort(int[] array, int leftIndex, int righIindex)
    {
        int i = leftIndex;
        int j = righIindex;
        int pivot = array[leftIndex];

        while(i <= j)
        {
            // If the elements to the left of the pivot are less than the pivot element,
            // we skip their positions
            while (array[i] < pivot)
            {
                i++;
            }

            // If the elements to the right of the pivot are greater than the pivot element,
            // we skip their positions as we loop through the right subarray.
            while (array[j] > pivot)
            {
                j--;
            }

            if (i <= j)
            {
                // swap
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
            }
        }

        // Since the quicksort algorithm is recursive, the method calls itself to sort the left and
        // right subarrays and returns a sorted array when the process is complete:
        if (leftIndex < j) QuickSort(array, leftIndex, j);

        if (righIindex > i) QuickSort(array, i, righIindex);

        return array;

    }


    static void Main(string[] args)
    {
        int[] arr = { 50, 85, 32, 60, 84, 92, 89, 37, 69, 42, 14, 62, 97, 72, 0, 49, 79, 6, 68, 24, 71, 4, 11, 88, 70, 30, 22 };
        int[] sortedArray = QuickSort(arr, 0, arr.Length -1);

        for (int i = 0; i < sortedArray.Length; i++)
        {
            Console.Write($"{sortedArray[i]} ");
        }

    }
}