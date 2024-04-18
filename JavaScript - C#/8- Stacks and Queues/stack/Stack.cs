using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

class Stack
{
    static readonly int MAX = 10;
    private int _topElement;
    private int[] _stack = new int[MAX];

    // Constructor
    public Stack()
    {
        _topElement = -1;
    }

    // Is the Stack Empty
    public bool IsEmpty()
    {
        if (_topElement < 0)
            return true;
        return false;
    }

    // Insert a new element at the end (PUSH)
    public bool Push(int data)
    {
        if (_topElement >= MAX)
        {
            Console.WriteLine("Stack Overflow!");
            return false;
        }
        else
        {
            _stack[_topElement + 1] = data;
            _topElement++;
            Console.WriteLine($"Added '{data}' to position {_topElement + 1}");
            return true;
        }
    }

    // Remove an element from the end (POP)
    public int Pop()
    {
        if (_topElement < 0)
        {
            Console.WriteLine("Stack Underflow!");
            return 0;
        }
        else
        {
            int value = _stack[_topElement];
            _topElement--;
            return value;
        }
    }

    // Get the Top Element
    public int TopElement()
    {
        if (_topElement < 0)
        {
            Console.WriteLine("Stack Underflow!");
            return -1;
        }
        else
        {
            return _stack[_topElement];
        }
    }

    // Helper Method: Print Stack
    public void Print()
    {
        if (_topElement < 0)
        {
            Console.WriteLine("Stack Underflow!");
            return;
        }
        else
        {
            for (int i = _topElement; i >= 0; i--)
            {
                Console.Write($"{_stack[i]} ");
            }
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Stack stack = new Stack();
        stack.Push(10);
        stack.Push(20);
        stack.Push(30);
        stack.Push(40);

        stack.Print();

        var top = stack.TopElement();
        Console.WriteLine($"\nTop element: {top}");

        Console.WriteLine($"Item popped from the stack: {stack.Pop()}");
        stack.Print();
    }
}
