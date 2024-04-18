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

public class Stack
{
    private Node first;
    private Node last;
    private int size;

    public Stack()
    {
        first = null;
        last = null;
        size = 0;
    }

    // Add to the beginning of the list
    // This is O(1) time complexity
    public int Push(int val)
    {
        var newNode = new Node(val);
        if (first == null)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            var temp = first;
            first = newNode;
            first.Next = temp;
        }
        // increment and return the size
        return ++size;
    }

    // Remove from the beginning of the list
    // This is O(1) time complexity
    public int? Pop()
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
        var stack = new Stack();
        stack.Push(1);
        stack.Push(2);
        stack.Push(3);

        Console.WriteLine(stack.Pop()); // Output: 3
        Console.WriteLine(stack.Pop()); // Output: 2
        Console.WriteLine(stack.Pop()); // Output: 1
    }
}
