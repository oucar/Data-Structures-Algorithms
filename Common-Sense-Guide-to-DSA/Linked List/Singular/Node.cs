using System;
namespace Playground
{
	public class Node
	{
		private int _data;
		private Node _next;

		// constructor (given a data value)
		public Node(int _data)
		{
			this._data = _data;
			this._next = null;
		}

		public int Data { get; set; }

		public Node Next { get; set; }
	}
}

