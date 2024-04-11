namespace Playground
{
    class Program
    {

        static void Main(string[] args)
        {

            LinkedList list = new LinkedList();

            list.Push(10);
            list.Push(20);
            list.Push(30);
            list.Print();

            list.Pop();
            list.Pop();
            list.Print();

            list.Pop();

            list.Print();

            // Starting with an empty list
            list.Push(1);
            list.Push(2);
            list.Push(3);
            list.Shift();
            list.Print();

            list.Shift();
            list.Shift();
            list.Print();

            // Shouldn't run since the LL is empty
            list.Shift();

            list.Unshift(31);
            list.Print();
            list.Unshift(30);
            list.Print();

            Node first = list.Get(0);
            Node second = list.Get(1);
            Console.WriteLine($"First: {first._Data}, Second: {second._Data}\n");
            list.Set(0, 50);
            list.Set(1, 51);
            list.Print();

            list.Insert(0, 1);
            list.Insert(2, 15);
            list.Print();
            list.Insert(4, 400);
            list.Print();

            list.Remove(0);
            list.Print();
            list.Remove(3);
            list.Print();

            list.Push(100);
            list.Push(123);

            list.Print();
            list.Reverse();
            list.Print();
        }

    }
}