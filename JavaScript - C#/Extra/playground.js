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

    // linked list is empty
    if (this.head == null) {
      this.head = node;
      this.tail = node;
    }

    // linked list is not empty
    else {
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

    // iterate until you reach the last element
    var curr = this.head;
    var newTail = this.head;

    while(curr.next){
        newTail = curr;
        curr = curr.next;
    }

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
