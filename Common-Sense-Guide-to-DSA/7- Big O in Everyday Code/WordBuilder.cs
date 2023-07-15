class Program
{
    // Every Combination of Two character strigns
    // O(n^2)
    static List<string> WordBuilder(string[] arr)
    {

        List <string> words = new List <string>();
        
        // Goes thru N times 
        for (int i = 0; i < arr.Length; i++)
        {
            // N times
            for (int j = 0; j < arr.Length; j++)
            { 
            
                if (i != j)
                {
                    words.Add($"{arr[i]}{arr[j]}");
                }
            
            }
        }

        return words;


    }

    static void Main(string[] args)
    {

        string[] arr = { "a", "b", "c", "d"}; 
        
        List<string> words = WordBuilder(arr);
        foreach (string word in words)
        {
            Console.Write($"{word}, ");
        }

    }
}