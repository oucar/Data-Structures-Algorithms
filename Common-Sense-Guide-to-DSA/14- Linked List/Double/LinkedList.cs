namespace Playground
{
    /// <summary>
    /// Represents a doubly linked list.
    /// </summary>
    public class DoublyLinkedList
    {
        private Node head;
        private Node tail;
        private int length;

        /// <summary>
        /// Initializes a new instance of the <see cref="DoublyLinkedList"/> class.
        /// </summary>
        public DoublyLinkedList()
        {
            head = null;
            tail = null;
            length = 0;
        }

        /// <summary>
        /// Adds a new node with the specified value to the end of the doubly linked list.
        /// </summary>
        /// <param name="val">The value to be added.</param>
        public void Push(int val)
        {
            Node node = new Node(val);

            if (head == null)
            {
                head = node;
                tail = node;
            }
            else
            {
                tail.Next = node;
                node.Prev = tail;
                tail = node;
            }

            length++;
        }

        /// <summary>
        /// Removes the last node from the doubly linked list and returns it.
        /// </summary>
        /// <returns>The last node removed from the list.</returns>
        public Node Pop()
        {
            if (head == null)
                return null;

            Node poppedNode = tail;

            if (head == tail)
            {
                head = null;
                tail = null;
            }
            else
            {
                tail = poppedNode.Prev;
                tail.Next = null;
                poppedNode.Prev = null;
            }

            length--;
            return poppedNode;
        }

        /// <summary>
        /// Removes the first node from the doubly linked list and returns it.
        /// </summary>
        /// <returns>The first node removed from the list.</returns>
        public Node Shift()
        {
            if (head == null)
                return null;

            Node oldHead = head;
            if (length == 1)
            {
                head = null;
                tail = null;
            }
            else
            {
                head = oldHead.Next;
                head.Prev = null;
                oldHead.Next = null;
            }

            length--;
            return oldHead;
        }

        /// <summary>
        /// Adds a new node with the specified value to the beginning of the doubly linked list.
        /// </summary>
        /// <param name="val">The value to be added.</param>
        public void Unshift(int val)
        {
            Node node = new Node(val);

            if (head == null)
            {
                head = node;
                tail = node;
            }
            else
            {
                head.Prev = node;
                node.Next = head;
                head = node;
            }

            length++;
        }

        /// <summary>
        /// Returns the node at the specified index in the doubly linked list.
        /// </summary>
        /// <param name="index">The zero-based index of the node to retrieve.</param>
        /// <returns>The node at the specified index, or <c>null</c> if the index is out of range.</returns>
        public Node Get(int index)
        {
            if (index < 0 || index >= length)
                return null;

            int count = 0;
            Node current = head;

            if (index <= length / 2)
            {
                count = 0;
                current = head;
                while (count != index)
                {
                    current = current.Next;
                    count++;
                }
            }
            else
            {
                count = length - 1;
                current = tail;
                while (count != index)
                {
                    current = current.Prev;
                    count--;
                }
            }
            return current;
        }

        /// <summary>
        /// Sets the value of the node at the specified index in the doubly linked list.
        /// </summary>
        /// <param name="index">The zero-based index of the node.</param>
        /// <param name="val">The value to set.</param>
        /// <returns><c>true</c> if the value is set successfully; otherwise, <c>false</c>.</returns>
        public bool Set(int index, int val)
        {
            Node node = Get(index);
            if (node != null)
            {
                node.Data = val;
                return true;
            }
            return false;
        }

        /// <summary>
        /// Inserts a new node with the specified value at the specified index in the doubly linked list.
        /// </summary>
        /// <param name="index">The zero-based index at which the node should be inserted.</param>
        /// <param name="val">The value to insert.</param>
        /// <returns>The updated doubly linked list.</returns>
        public DoublyLinkedList Insert(int index, int val)
        {
            if (index < 0 || index > length)
                return null;
            else if (index == 0)
            {
                Unshift(val);
            }
            else if (index == length)
            {
                Push(val);
            }
            else
            {
                Node prev = Get(index - 1);
                Node newNode = new Node(val);

                newNode.Next = prev.Next;
                newNode.Prev = prev;
                prev.Next = newNode;
                newNode.Next.Prev = newNode;

                length++;
            }
            return this;
        }

        /// <summary>
        /// Removes the node at the specified index from the doubly linked list.
        /// </summary>
        /// <param name="index">The zero-based index of the node to remove.</param>
        /// <returns>The removed node, or <c>null</c> if the index is out of range.</returns>
        public Node Remove(int index)
        {
            if (index < 0 || index >= length)
                return null;
            else if (index == 0)
            {
                return Shift();
            }
            else if (index == length - 1)
            {
                return Pop();
            }
            else
            {
                Node removedNode = Get(index);
                Node prev = removedNode.Prev;
                Node next = removedNode.Next;

                prev.Next = next;
                next.Prev = prev;
                removedNode.Next = null;
                removedNode.Prev = null;

                length--;
                return removedNode;
            }
        }

        /// <summary>
        /// Reverses the order of nodes in the doubly linked list.
        /// </summary>
        public void Reverse()
        {
            Node current = head;
            head = tail;
            tail = current;

            Node next;
            Node prev = null;

            for (int i = 0; i < length; i++)
            {
                next = current.Next;
                current.Next = prev;
                current.Prev = next;
                prev = current;
                current = next;
            }
        }

        /// <summary>
        /// Prints the current state of the doubly linked list.
        /// </summary>
        /// <param name="message">Additional message to display.</param>
        public void Print(string message)
        {
            Node curr = head;
            while (curr != null)
            {
                Console.Write($"{curr.Data} <--> ");
                curr = curr.Next;
            }
            Console.WriteLine($"null \nCurrent state of the linked list after {message}");
            Console.WriteLine($"Length: {length}\n");
        }
    }
}