using System;
namespace LinkedList___CS
{
	public class Node
	{
        private object _data;
		private Node _next;

        public Node(object _data, Node _next)
		{
			this._data = _data;
			this._next = _next;
		}

        public object Data { get; set; }
		public Node Next { get; set; }

    }
}

