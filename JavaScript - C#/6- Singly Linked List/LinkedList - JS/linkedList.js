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
    var node = new Node(val);

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

    var curr = this.head;
    var newTail = this.head;

    while (curr.next) {
      // while my current has a next, new tail should be the one before that
      // until you reach the end
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

    var currHead = this.head;
    this.head = currHead.next;
    this.length--;

    if (this.length === 0) this.tail = null;

    return currHead;
  }

  // Adds an element to the beginning
  // O(1)
  unshift(val) {
    var newNode = new Node(val);

    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }

    this.length++;
    return this;
  }

  // Returns a node from the given index
  // O(n)
  get(index) {
    if (index < 0 || index >= this.length) return null;

    var counter = 0;
    var curr = this.head;

    while (counter !== index) {
      curr = curr.next;
      counter++;
    }

    return curr;
  }

  // Sets the value of a given index
  // O(n)
  set(index, val) {
    var foundNode = this.get(index);
    if (foundNode) {
      foundNode.val = val;
      return true;
    }
  }

  // Inserts a value into a given index
  // O(n)
  insert(index, val) {
    if (index < 0 || index > this.length) return null;
    else if (index === this.length) this.push(val);
    else if (index === 0) this.unshift(val);
    else {
      var prev = this.get(index - 1);
      var newNode = new Node(val);

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
    if (index === 0) return this.shift();
    if (index === this.length - 1) return this.pop();

    var prev = this.get(index - 1);
    var removed = prev.next;

    prev.next = removed.next;
    this.length--;

    return removed;
  }

  // Reverses the linked list
  // O(n)
  reverse() {
    var curr = this.head;
    this.head = this.tail;
    this.tail = curr;

    var prev = null;
    var next = null;

    for (var i = 0; i < this.length; i++) {
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return this;
  }

  // Helper print function to visualize the Linked list
  // O(n)
  print(message) {
    var curr = this.head;
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
