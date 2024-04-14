class Node {
  constructor(val) {
    this.val = val;
    this.next = null;
    this.prev = null;
  }
}

class DoublyLinkedList {
  constructor() {
    this.length = 0;
    this.head = null;
    this.tail = null;
  }

  // Add a new node at the end of the doubly linked list.
  // O(1)
  push(val) {
    let node = new Node(val);

    if (!this.head) {
      this.head = node;
      this.tail = node;
    } else {
      this.tail.next = node;
      node.prev = this.tail;
      this.tail = node;
    }

    this.length++;
    return this;
  }

  // Removes the tail element
  // O(n)
  pop() {
    if (!this.head) return null;

    let poppedNode = this.tail;

    // If there's only one element in the list
    if (this.head === this.tail) {
      this.head = null;
      this.tail = null;
    } else {
      this.tail = poppedNode.prev;
      this.tail.next = null;
      poppedNode.prev = null; // Remove reference to previous node
    }

    this.length--;

    return poppedNode;
  }

  // Removes an element from the beginning
  // O(1)
  shift() {
    if (!this.head) return null;

    let oldHead = this.head;
    if (this.length === 1) {
      this.head = null;
      this.tail = null;
    } else {
      this.head = oldHead.next;
      this.head.prev = null;
      oldHead.next = null;
    }

    this.length--;
    return oldHead;
  }

  // Adds an element to the beginning
  // O(1)
  unshift(val) {
    var node = new Node(val);

    if (!this.head) {
      this.head = node;
      this.tail = node;
    } else {
      this.head.prev = node;
      node.next = this.head;
      this.head = node;
    }

    this.length++;
    return this;
  }

  // Returns a node from the given index
  // O(n)
  get(index) {
    if (index < 0 || index >= this.length) return null;

    // depending on the index, we can start from the head or the tail
    // if the index is closer to the end, we start from the tail

    let count = 0;
    let current = this.head;

    if (index <= this.length / 2) {
      count = 0;
      current = this.head;
      while (count !== index) {
        current = current.next;
        count++;
      }
    } else {
      count = this.length - 1;
      current = this.tail;
      while (count !== index) {
        current = current.prev;
        count--;
      }
    }
    return current;
  }

  // Sets the value of a given index
  // O(n)
  set(index, val) {
    let node = this.get(index);
    // if node is found
    if (node) {
      node.val = val;
      return true;
    }
    return false;
  }

  // Inserts a value into a given index
  // O(n)
  insert(index, val) {
    if (index < 0 || index > this.length) return null;
    else if (index === 0) this.unshift(val);
    else if (index === this.length) this.push(val);
    else {
      let prev = this.get(index - 1);
      let newNode = new Node(val);

      newNode.next = prev.next;
      newNode.prev = prev;
      prev.next = newNode;
      newNode.next.prev = newNode;

      this.length++;
      return this;
    }
  }

  // Removes a node from a given index
  // O(n)
  remove(index) {
    if (index < 0 || index >= this.length) return null;
    else if (index === 0) this.shift();
    else if (index === this.length - 1) this.pop();
    else {
      let removedNode = this.get(index);
      let prev = removedNode.prev;
      let next = removedNode.next;

      prev.next = next;
      next.prev = prev;
      removedNode.next = null;
      removedNode.prev = null;

      this.length--;
      return removedNode;
    }
  }

  // !!IMPORTANT!!
  // Reversing the linked list.
  // O(n)
  reverse() {
    let current = this.head;
    this.head = this.tail;
    this.tail = current;

    let next;
    let prev = null;

    for (let i = 0; i < this.length; i++) {
      next = current.next;
      current.next = prev;
      current.prev = next;
      prev = current;
      current = next;
    }

    return this;
  }

  // Helper print function to visualize the Linked list
  // O(n)
  print(message) {
    let curr = this.head;
    while (curr) {
      process.stdout.write(`${curr.val} <--> `);
      curr = curr.next;
    }
    console.log(`null \nCurrent state of the linked list after ${message}`);
    console.log(`Length: ${this.length}\n`);
  }
}

var linkedList = new DoublyLinkedList();
linkedList.push("Onur");
linkedList.push("Ucar");
linkedList.push("Hello");
linkedList.push("!");
linkedList.print("4 pushes");

linkedList.pop();
linkedList.pop();
linkedList.pop();
linkedList.pop();
linkedList.print("4 pops");

linkedList.unshift("Unshift1");
linkedList.unshift("Unshift2");
linkedList.print("unshift");

linkedList.shift();
linkedList.shift();
linkedList.print("2 shifts");

linkedList.push("Onur");
linkedList.push("Ucar");
linkedList.push("Hello");
linkedList.push("!");
linkedList.print("4 pushes");

linkedList.set(2, "REPLACED");
linkedList.print("set at index 2");

linkedList.insert(3, "World");
linkedList.print("insert at index 3");
linkedList.insert(3, "Hello");
linkedList.print("insert at index 3");

linkedList.remove(1);
linkedList.print("removing index 1");

linkedList.reverse();
linkedList.print("reversing the linked list");

console.log(
  `Head: ${linkedList.head.val}\nTail: ${linkedList.tail.val}\nLength: ${linkedList.length}`
);
