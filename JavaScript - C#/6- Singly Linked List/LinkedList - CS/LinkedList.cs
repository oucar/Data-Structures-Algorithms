using System;
using System.Collections.Generic;
using System.Diagnostics.Metrics;
using static System.Runtime.InteropServices.JavaScript.JSType;

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

            if (this._size == 0)
            {
                this._head = null;
                this._tail = null;
            }

            return current;
        }

        /// <summary>
        /// Removes an element from the beginning
        /// </summary>
        /// <returns></returns>
        public Node Shift()
        {
            if (isEmpty()) return null;

            Node currentHead = this._head;
            this._head = currentHead.Next;
            this._size--;

            if (isEmpty()) this._tail = null;

            return currentHead;
        }

        /// <summary>
        /// Adds an element to the beginning
        /// </summary>
        /// <param name="data">Value that we will be inserting</param>
        /// <returns></returns>
        public Node Unshift(int data)
        {
            Node newNode = new Node(data);

            if (isEmpty())
            {
                this._head = newNode;
                this._tail = newNode;
            } else
            {
                newNode.Next = this._head;
                this._head = newNode;
            }

            newNode.Data = data;
            this._size++;
            
            return newNode;
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

            while(counter != index)
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
        public bool Set(int index, int value) {

            Node node = this.Get(index);

            if (node != null)
            {
                node.Data = value;
                return true;
            }

            return false;
        }

    }
}

