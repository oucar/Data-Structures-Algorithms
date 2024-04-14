using Playground;

class Program
{

    static void Main(string[] args)
    {
        DoublyLinkedList list = new DoublyLinkedList();

        // Test Push method
        list.Push(1);
        list.Push(2);
        list.Push(3);

        // Test Print method
        Console.WriteLine("Traversing the list:");
        list.Print("After 3 pushes");

        // Test Pop method
        list.Pop();
        Console.WriteLine("After popping an element:");
        list.Print("After 1 pop");

        // Test Shift method
        var shiftedItem = list.Shift();
        Console.WriteLine($"Shifted item: {shiftedItem.Data}");
        Console.WriteLine("After shifting an element:");
        list.Print("After 1 shift");

        // Test Unshift method
        list.Unshift(10);
        Console.WriteLine("After unshifting 10:");
        list.Print("After unshifting 10");

        // Test Insert method
        list.Insert(1, 400);
        Console.WriteLine("After inserting 400 after index 1:");
        list.Print("After inserting 400 after index 1");

        // Test Get and Set methods
        var firstItem = list.Get(0);
        Console.WriteLine($"Data of first item: {firstItem.Data}");
        list.Set(0, 41);
        Console.WriteLine($"Data of the first item after Set: {firstItem.Data}");

        // Test Remove method
        Console.WriteLine("Deleting item at index 2:");
        list.Remove(2);
        list.Print("After deleting item at index 2");

        // Test Reverse method
        list.Reverse();
        Console.WriteLine("After reversing the list:");
        list.Print("After reversing the list");

        // Test Search method
        var search1 = list.Get(0);
        var search2 = list.Get(1);
        var searchDNE = list.Get(99);
        Console.WriteLine($"Get element 0 : {search1.Data}");
        Console.WriteLine($"Get element 1: {search2.Data}");
        Console.WriteLine($"Get element 2: {(searchDNE == null ? "NULL" : searchDNE.Data.ToString())}");
    }
}