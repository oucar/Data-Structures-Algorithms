using System;
namespace LinkedList___CS
{
	public class Node
	{
        #region Fields
        private object _data;
		private Node _next;
        #endregion

        #region Constructor
        public Node(object _data, Node _next)
		{
			this._data = _data;
			this._next = _next;
		}
        #endregion

        #region Public Getter and Setters
        public object Data { get; set; }
		public Node Next { get; set; }
        #endregion

    }
}

