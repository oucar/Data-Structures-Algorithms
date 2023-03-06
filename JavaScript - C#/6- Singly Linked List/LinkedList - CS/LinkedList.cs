using System;
using System.Collections.Generic;
using System.Diagnostics.Metrics;

namespace LinkedList___CS
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

        public bool isEmpty()
        {
            return this._head == null ? true : false;
        }

        public int Count()
        {
            return this._size;
        }

        /// <summary>
        /// Helper Function. Lets you print the linked list.
        /// </summary>
        public void Print()
        {
            Node current = this._head;
            while (current != null)
            {
                Console.Write($"{current.Data} --> ");
                current = current.Next;
            }
            Console.WriteLine("null");
            Console.WriteLine($"Size: {Count()}");
        }

        /// <summary>
        /// Inserts a new node at the end of the linked list.
        /// </summary>
        /// <param name="data">Value that we will be inserting</param>
        /// <returns></returns>
        public Node Push(int data)
        {
            // if (index < 0 || index > this._size + 1) throw new IndexOutOfRangeException($"Index can't be smaller than 0 or larger than (this._size + 1). Given index: {index}");

            Node node = new Node(data);
            if (isEmpty())
            {
                this._head = node;
                this._tail = node;
            }
            else
            {
                this._tail.Next = node;
                this._tail = node;
            }

            node.Data = data;
            this._size++;

            return this._tail;
        }

        /// <summary>
        /// Removes an item from end of the linked list.
        /// </summary>
        /// <returns></returns>
        public Node Pop()
        {
            if (isEmpty()) return null;

            Node current = this._head;
            Node newTail = this._head;

            while (current.Next != null)
            {
                newTail = current;
                current = current.Next;
            }

            this._tail = newTail;
            this._tail.Next = null;
            this._size--;

            if(this._size == 0)
            {
                this._head = null;
                this._tail = null;
            }

            return current;

        }
    }
}

