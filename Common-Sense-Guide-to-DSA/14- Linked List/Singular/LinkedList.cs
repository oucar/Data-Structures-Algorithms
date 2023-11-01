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

        public bool IsEmpty()
        {
            return (this._head == null) ? true : false;
        }

        public int GetSize()
        {
            return this._size;
        }

        /// <summary>
        /// Print the linked list.
        /// </summary>
		public void Traverse()
        {
            // starting from the head of the linked list 
            Node current = this._head;
            while (current != null)
            {
                Console.Write($"{current.Data} --> ");
                current = current.Next;
            }

            Console.Write("null\n");
        }

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
            }
            else
            {
                this._tail.Next = node;
                this._tail = node;
            }

            this._size++;
        }


        /// <summary>
        /// Inserts a new node after a given position at the linked list.
        /// </summary>
        /// <param name="index">Index that we will be inserting into</param>
        /// <param name="data">Value that we will be inserting</param>
        public void InsertAfterGiven(int index, int data)
        {
            if (index < 0 || index >= this._size) return;

            Node node = new Node(data);
            node.Data = data;

            Node previousNode = Get(index);

            node.Next = previousNode.Next;

            previousNode.Next = node;

            this._size++;
        }



        /// <summary>
        /// Removes an item from end of the linked list.
        /// </summary>
        /// <returns></returns>
        public void Pop()
        {
            if (IsEmpty()) return;

            Node current = this._head;
            Node newTail = this._head;

            // keep going until the you reach the last element
            while (current.Next != null)
            {
                newTail = current;
                current = current.Next;
            }

            this._tail = newTail;
            this._tail.Next = null;
            this._size--;

            if (this._size == 0)
            {
                this._head = null;
                this._tail = null;
            }
        }


        /// <summary>
        /// Delete a node at a given position
        /// </summary>
        /// <param name="index">Index that we will removing a node from</param>
        public void DeleteFromIndex(int index)
        {
            if (index < 0 || index >= this._size) return;

            Node previousnNode = Get(index - 1);
            Node node = Get(index);

            previousnNode.Next = node.Next;

            node.Next = null;

            this._size--;
        }



        /// <summary>
        /// Returns a node from the given index
        /// </summary>
        /// <param name="index">Index that we will be returning</param>
        /// <returns></returns>
        public Node Get(int index)
        {
            if (index < 0 || index >= this._size) return null;

            int counter = 0;
            Node current = this._head;

            while (counter != index)
            {
                current = current.Next;
                counter++;
            }

            return current;
        }


        /// <summary>
        /// Sets the value of a given index
        /// </summary>
        /// <param name="index">Index that we will be setting the value of</param>
        /// <param name="value">Value that we will be setting for the corresponding index</param>
        /// <returns>True if succesfully set the value, false otherwise</returns>
        public void Set(int index, int value)
        {
            Node node = this.Get(index);

            if (node != null)
            {
                node.Data = value;
            }
        }

        /// <summary>
        /// Returns a node, given a value
        /// </summary>
        /// <param name="value">Value that we will be searching</param>
        /// <returns></returns>
		public bool Search(int value)
        {
            Node current = this._head;
            while (current != null)
            {
                if (current.Data == value)
                {
                    return true;
                }

                current = current.Next;
            }

            return false;
        }
    }
}

