using System;

public class Node
{
    public int Value { get; set; }
    public Node Next { get; set; }

    public Node(int value)
    {
        Value = value;
        Next = null;
    }
}

public class Queue
{
    private Node first;
    private Node last;
    private int size;

    public Queue()
    {
        first = null;
        last = null;
        size = 0;
    }

    // Add to the end of the list
    // This is O(1) time complexity
    public int Enqueue(int val)
    {
        var newNode = new Node(val);
        if (first == null)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last.Next = newNode;
            last = newNode;
        }
        // increment and return the size
        return ++size;
    }

    // Remove from the beginning of the list
    // This is O(1) time complexity
    public int? Dequeue()
    {
        if (first == null)
            return null;

        var temp = first;
        if (first == last)
        {
            last = null;
        }
        first = first.Next;
        size--;
        return temp.Value;
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Example usage:
        var queue = new Queue();
        queue.Enqueue(1);
        queue.Enqueue(2);
        queue.Enqueue(3);

        Console.WriteLine(queue.Dequeue()); // Output: 1
        Console.WriteLine(queue.Dequeue()); // Output: 2
        Console.WriteLine(queue.Dequeue()); // Output: 3
    }
}
