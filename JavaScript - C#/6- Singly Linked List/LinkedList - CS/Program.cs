﻿namespace LinkedList___CS
{
    class Program
    {
        static void Main(string[] args)
        {
            LinkedList list = new LinkedList();
            
            
            list.Push(1);
            list.Push(2);
            list.Push(3);

            list.Pop();

            list.Shift();
            list.Shift();

            for(int i = 1; i <= 10; i++)
            {
                list.Push(i * 10);
            }

            list.Unshift(31);

            var firstItem = list.Get(0);
            Console.WriteLine($"Data of the first item is: {firstItem.Data}");
            list.Set(0, 32);
            Console.WriteLine($"Data of the first item after Set operation is: {firstItem.Data}");

            list.Print();

        }
    }
}