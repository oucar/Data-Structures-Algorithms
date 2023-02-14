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
  pop(){

    if(!this.head) return null;
    
    var curr = this.head;
    var newTail = this.head;

    while(curr.next !== null){
      newTail = curr;
      curr = curr.next;
    }
    
    this.tail = newTail
    this.length--;

    if(this.length === 0){
      this.head = null;
      this.tail = null;
    }

    return curr;
  }


}

var linkedList = new SinglyLinkedList();
console.log(linkedList.push("Onur"));
console.log(linkedList.push("Ucar"));
console.log(linkedList.push("Hello"));
console.log(linkedList.push("!"));

console.log(linkedList.pop());

console.log(linkedList);