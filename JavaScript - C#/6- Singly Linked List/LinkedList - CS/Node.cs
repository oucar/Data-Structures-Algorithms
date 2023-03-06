using System;
namespace LinkedList___CS
{
	public class Node
	{
        private int _data;
		private Node _next;

        public Node(int _data)
		{
			this._data = _data;
			this._next = null;
		}

        public int Data { get; set; }
		public Node Next { get; set; }

    }
}

