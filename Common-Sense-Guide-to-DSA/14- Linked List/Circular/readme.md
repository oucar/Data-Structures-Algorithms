````cs
using System;

namespace Playground
{
    public class LinkedList
    {
        private Node _head;
        private Node _tail;
        private int _size;

        public LinkedList()
        {
            this._head = null;
            this._tail = null;
            this._size = 0;
        }

        // ... (other methods remain the same)

        /// <summary>
        /// Inserts a new node at the end of the linked list.
        /// </summary>
        /// <param name="data">Value that we will be inserting</param>
        public void Push(int data)
        {
            Node node = new Node(data);
            node.Data = data;

            if (IsEmpty())
            {
                this._head = node;
                this._tail = node;
                this._tail.Next = this._head; // Make it circular
            }
            else
            {
                node.Prev = _tail;
                this._tail.Next = node;
                this._tail = node;
                this._tail.Next = this._head; // Make it circular
            }

            this._size++;
        }

        // ... (other methods remain the same)
    }
}```
````
