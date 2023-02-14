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
  push(val) {
    var node = new Node(val);

    // No head --> head and tail is the new node
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
}

var linkedList = new SinglyLinkedList();
linkedList.push("Onur");
linkedList.push("Ucar");

console.log(linkedList);