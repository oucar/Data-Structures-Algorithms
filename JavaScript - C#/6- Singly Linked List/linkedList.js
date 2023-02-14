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

  // Removes the tail element
  pop() {

    if (!this.head) return null;

    var curr = this.head;
    var newTail = this.head;

    while (curr.next) {
      newTail = curr;
      curr = curr.next;
    }

    this.tail = newTail
    this.tail.next = null;
    this.length--;

    if (this.length === 0) {
      this.head = null;
      this.tail = null;
    }

    return curr;
  }

  // Removes an element from the beginning
  shift() {

    if (!this.head) return null;

    var currHead = this.head;
    this.head = currHead.next;
    this.length--;

    if (this.length === 0) this.tail = null;

    return currHead;
  }

  unshift(val) {
    var newNode = new Node(val);

    if(!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }

    this.length++;
    return this;
  }


}

var linkedList = new SinglyLinkedList();
console.log(linkedList.push("Onur"));
console.log(linkedList.push("Ucar"));
console.log(linkedList.push("Hello"));
console.log(linkedList.push("!"));

console.log(linkedList.pop());

console.log(linkedList.unshift("Unshift"));
console.log(linkedList.shift());


console.log(` Head: ${linkedList.head.val}\n Tail: ${linkedList.tail.val}\n Length: ${linkedList.length}`);


