using System;
namespace Playground
{
	public class LinkedList
	{
		private Node? _Head { get; set; }

		private Node? _Tail { get; set; }

		private int _Length { get; set; }


		public LinkedList()
		{
			_Head = null;
			_Tail = null;
			_Length = 0;
		}

		// Helper Function(s)
		public bool IsEmpty()
		{
			return (_Head == null) ? true : false;
		}

		public void Print()
		{
			Node curr = _Head;

			while (curr != null)
			{
				Console.Write($"{curr._Data} --> ");
				curr = curr._Next;
			}

			Console.WriteLine("null");
			Console.WriteLine($"Length: {_Length}\n");
		}



		// Push: Add a new node at the end of the linked list
		// O(n)
		public Node Push(int val)
		{
			Node node = new Node(val);

			if (IsEmpty())
			{
				_Head = node;
				_Tail = node;
			} else
			{
				_Tail._Next = node;
				_Tail = node;
			}

			_Length++;

			return _Tail;
		}

		// Pop: Removes the tail element
		// O(n)
		public Node Pop()
		{
			if (IsEmpty()) return null;

			Node current = _Head;
			Node newTail = _Head;

			while (current._Next != null)
			{
				newTail = current;
				current = current._Next;
			}

			_Tail = newTail;
			_Tail._Next = null;
			_Length--;

			if(_Length == 0)
			{
				_Tail = null;
				_Head = null;
			}

			return newTail;

		} 

		// Shift: Removes an element from the beginning
		// O(1)
		public Node Shift()
		{
			if (IsEmpty()) return null;

			Node currentHead = _Head;

			// setting the new head
			_Head = currentHead._Next;
			_Length--;

			if(_Length == 0)
			{
				_Tail = null;
			}

			return _Head;
		}

		// Unshift: Adds an element to the beginning
		// O(1)
		public Node Unshift(int val)
		{
			Node node = new Node(val);

			if (IsEmpty())
			{
				_Head = node;
				_Tail = node;
			} else
			{
				node._Next = _Head;
				_Head = node;
			}

			_Length++;

			return _Head;
		}

        // Get: Returns a node from a given index
		// O(n)
		public Node Get(int index)
		{
			if (index < 0 || index >= _Length) return null;

			int counter = 0;
			Node current = _Head;

			while (counter != index)
			{
				current = current._Next;
				counter++;
			}

			return current;
		}


        // Set: Sets the value of a given index
		// O(n)
		public Node Set(int index, int val)
		{
			Node node = Get(index);

			node._Data = val;

			return node;
		}


		// Insert: Inserts a value into a given index
		// O(n)
		public Node Insert(int index, int val)
		{
			if (index < 0 || index > _Length) return null;

			else if (index == 0) return Unshift(val);

			else
			{
                Node newNode = new Node(val);

                Node previous = Get(index - 1);

                newNode._Next = previous._Next;

                previous._Next = newNode;

                _Length++;

                return newNode;
            }
		}


		// Remove: Removes a node from a given index
		// O(n)
		public Node Remove(int index)
		{
			if (index < 0 || index >= _Length) return null;

			else if (index == 0) return Shift();

			else if (index == _Length - 1) return Pop();

			else
			{
				Node previous = Get(index - 1);
				Node removedNode = previous._Next;

				previous._Next = removedNode._Next;
				removedNode._Next = null;

				this._Length--;

				return removedNode;
			}
		}


		// !!!
		// Reverse
		// O(n)
		public void Reverse()
		{
			Node current = _Head;
			_Head = _Tail;
			_Tail = current;

			Node prev = null;
			Node next = null;

			for(int i = 0; i < _Length; i++)
			{
				next = current._Next;
				current._Next = prev;
				prev = current;
				current = next;
			}
		}

    }
}

