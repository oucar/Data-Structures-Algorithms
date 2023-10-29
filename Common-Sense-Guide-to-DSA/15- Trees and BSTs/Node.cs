using System;
namespace Playground
{
    public class Node
    {
        public int Data { get; set; }

        public Node Right { get; set; }

        public Node Left { get; set; }

        // Constructor to create a new node with the given data
        public Node(int data)
        {
            Data = data;
            Right = null;
            Left = null;
        }
    }
}

