using System;
namespace Playground
{
    public class Node
    {
        private int _data;
        private Node _next;
        private Node _prev;

        // constructor (given a data value)
        public Node(int _data)
        {
            this._data = _data;
            this._next = null;
            this._prev = null;
        }

        public int Data { get; set; }

        public Node Next { get; set; }

        public Node Prev { get; set; }
    }
}

