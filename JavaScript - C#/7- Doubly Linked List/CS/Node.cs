using System;
namespace Playground
{
    public class Node
    {
        internal int _Data { get; set; }

        internal Node? _Next { get; set; }
        
        public Node(int _data)
        {
            this._Data = _data;
            this._Next = null;
        }
    }
}

