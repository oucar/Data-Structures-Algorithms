using Playground;

class Program
{

    static void Main(string[] args)
    {
        LinkedList list = new LinkedList();


        list.Push(1);
        list.Push(2);
        list.Push(3);

        list.Traverse();

        list.Pop();
        list.Traverse();


        for (int i = 1; i <= 3; i++)
        {
            list.Push(i * 10);
        }
        list.Traverse();


        var firstItem = list.Get(0);
        Console.WriteLine($"Data of first item: {firstItem.Data}");
        Console.WriteLine($"Data of the next of first item: {firstItem.Next.Data}");

        list.Set(0, 41);
        Console.WriteLine($"Data of the first item after Set: {firstItem.Data}");

        list.Traverse();

        var search1 = list.Search(41);
        var search2 = list.Search(300);

        Console.WriteLine($"Search 41: {search1}");
        Console.WriteLine($"Search 300: {search2}");






    }
}