class Program
{
    static bool LinearSearch(int[] arr, int value)
    {
        int steps = 0;

        for(int i = 0; i < arr.Length; i++)
        {
            steps++;
            if (arr[i] == value)
            {
                Console.WriteLine($"Linear Search took {steps} steps to find {value} in the array. Big O Complexity: O(n)");
                return true;
            }
        }
        return false;
    }

    static bool BinarySearch(int[] arr, int value)
    {
        int steps = 0;

        int low = 0;
        int high = arr.Length - 1;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            steps++;

            if(value == arr[mid])
            {
                Console.WriteLine($"Binary Search took {steps} steps to find {value} in the array. Big O Complexity: O(log n)");
                return true;
            }

            else if (arr[mid] > value)
            {
                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }

        }
        return false;
    }


    static void Main(string[] args)
    {
        int[] arr = { 28, 88, 128, 141, 166, 175, 305, 337, 395, 419, 433, 435, 455, 487, 494, 535, 603, 610, 657, 671, 722, 724, 835, 858, 893, 913, 960, 964, 989, 991, 995, 1104, 1105, 1127, 1133, 1146, 1149, 1349, 1362, 1418, 1471, 1473, 1474, 1485, 1517, 1527, 1533, 1557, 1574, 1579, 1583, 1584, 1643, 1644, 1672, 1688, 1701, 1715, 1722, 1732, 1768, 1774, 1790, 1886, 1899, 1937, 1949, 1990, 2004, 2024, 2026, 2032, 2039, 2060, 2099, 2136, 2142, 2178, 2182, 2221, 2270, 2281, 2285, 2291, 2330, 2335, 2341, 2372, 2412, 2449, 2481, 2494, 2501, 2504, 2523, 2549, 2551, 2558, 2566, 2570, 2571, 2607, 2661, 2664, 2666, 2678, 2687, 2726, 2806, 2810, 2832, 2833, 2841, 2855, 2890, 2907, 2908, 2922, 2953, 2974 };

        int valueToBeSearched = 2974;

        LinearSearch(arr, valueToBeSearched);
        BinarySearch(arr, valueToBeSearched);

    }
}