class Node {
  constructor(val) {
    this.val = val;
    this.next = null;
  }
}

class SinglyLinkedList {
  constructor() {
    this.length = 0;
    this.head = null;
    this.tail = null;
  }

  // Add a new node at the end of the linked list.
  // O(1)
  push(val) {
    let node = new Node(val);

    if (!this.head) {
      this.head = node;
      this.tail = node;
    } else {
      this.tail.next = node;
      this.tail = node;
    }

    this.length++;
    return this;
  }

  // Removes the tail element
  // O(n)
  pop() {
    if (!this.head) return null;

    let curr = this.head;
    let newTail = this.tail;

    // while my current has a next, new tail should be the one before that
    // until you reach the end
    while (curr.next) {
      newTail = curr;
      curr = curr.next;
    }

    this.tail = newTail;
    this.tail.next = null;
    this.length--;

    if (this.length === 0) {
      this.head = null;
      this.tail = null;
    }
    return curr;
  }

  // Removes an element from the beginning
  // O(1)
  shift() {
    if (!this.head) return null;

    let currHead = this.head;
    this.head = currHead.next;
    this.length--;

    if (this.length === 0) this.tail = null;

    return currHead;
  }

  // Adds an element to the beginning
  // O(1)
  unshift(val) {
    var node = new Node(val);

    if (!this.head) {
      this.head = node;
      this.tail = node;
    } else {
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

    let counter = 0;
    let curr = this.head;

    while (counter !== index) {
      curr = curr.next;
      counter++;
    }

    return curr;
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
      prev.next = newNode;

      this.length++;

      return this.get(index);
    }
  }

  // Removes a node from a given index
  // O(n)
  remove(index) {
    if (index < 0 || index >= this.length) return null;
    else if (index === 0) this.shift();
    else if (index === this.length - 1) this.pop();

    let prev = this.get(index - 1);
    let removedNode = prev.next;

    prev.next = removedNode.next;
    this.length--;

    return removedNode;
  }

  // !!IMPORTANT!!
  // Reversing the linked list.
  // O(n)
  reverse() {
    let curr = this.head;
    this.head = this.tail;
    this.tail = curr;

    let prev = null;
    let next = null;

    for (let i = 0; i < this.length; i++) {
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }
  }

  // Helper print function to visualize the Linked list
  // O(n)
  print(message) {
    let curr = this.head;
    while (curr) {
      process.stdout.write(`${curr.val} --> `);
      curr = curr.next;
    }
    console.log(`null \nCurrent state of the linked list after ${message}`);
    console.log(`Length: ${this.length}\n`);
  }
}

var linkedList = new SinglyLinkedList();
linkedList.push("Onur");
linkedList.push("Ucar");
linkedList.push("Hello");
linkedList.push("!");
linkedList.print("4 pushes");

linkedList.pop();
linkedList.print("pop");

linkedList.unshift("Unshift");
linkedList.print("unshift");

linkedList.shift();
linkedList.print("shift");

linkedList.set(2, "REPLACED");
linkedList.print("set at index 2");

linkedList.insert(3, "World");
linkedList.print("insert at index 3");

linkedList.remove(1);
linkedList.print("removing index 1");

linkedList.reverse();
linkedList.print("reversing the linked list");

console.log(
  `Head: ${linkedList.head.val}\nTail: ${linkedList.tail.val}\nLength: ${linkedList.length}`
);
