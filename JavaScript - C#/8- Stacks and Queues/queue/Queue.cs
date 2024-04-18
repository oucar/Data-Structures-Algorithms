using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

class Queue
{
    static readonly int MAX = 10;
    private int _frontElement;
    private int _backElement;
    private int[] _queue = new int[MAX];

    // Constructor
    public Queue()
    {
        _frontElement = 0;
        _backElement = -1;
    }

    // Is the Queue Empty
    public bool IsEmpty()
    {
        if (_frontElement < 0)
            return true;
        return false;
    }

    // Insert a new element at the end (Enqueue)
    public void Enqueue(int data)
    {
        if (_backElement == MAX - 1)
        {
            Console.WriteLine("Queue Overflow!");
            return;
        }
        else
        {
            _backElement++;
            _queue[_backElement] = data;
        }
    }

    // Remove an element from the end (Dequeue)
    public int Dequeue()
    {
        if (_frontElement == _backElement + 1)
        {
            Console.WriteLine("Queue is Empty");
            return -1;
        }
        else
        {
            Console.WriteLine(_queue[_frontElement] + " dequeued from queue");

            _frontElement++;
            int item = _queue[_frontElement];

            Console.WriteLine($"Front item is {_queue[_frontElement]}");
            Console.WriteLine($"Rear item is {_queue[_backElement]} ");

            return item;
        }
    }

    // Helper Method: Print Queue
    public void Print()
    {
        if (_frontElement == _backElement + 1)
        {
            Console.WriteLine("Queue is Empty");
            return;
        }
        else
        {
            for (int i = _frontElement; i <= _backElement; i++)
            {
                Console.WriteLine(_queue[i] + " enqueued to queue");
            }
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Queue Q = new Queue();

        Q.Enqueue(10);
        Q.Enqueue(20);
        Q.Enqueue(30);
        Q.Enqueue(40);
        Q.Print();
        Q.Dequeue();
        Q.Print();
    }
}
