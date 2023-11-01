using System;
namespace Playground
{
    public class Node
    {
        // constructor (given a data value)
        public Node(int _data)
        {
            Data = _data;
            Next = null;
        }

        public int Data { get; set; }

        public Node Next { get; set; }
    }
}

