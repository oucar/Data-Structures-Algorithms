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

  // Helper RECURSIVE print function to visualize the Linked list
  // O(n)
  printRecursive() {
    if (!this.head) {
      console.log("null");
      return;
    }

    process.stdout.write(`${head.val} --> `);
    this.printRecursive(head.next);
  }

  // Reverse the linked list - In place
  // O(n)
  reverseList() {
    let curr = this.head;
    this.head = this.tail;
    this.tail = curr;

    let prev = null;
    let next = null;

    // stop when the current node is null

    while (curr) {
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    // new head is the previous node
    // return prev;
  }

  // Reverse the linked list - Recursive
  // O(n)
  reverseListRecursive(curr = this.head, prev = null) {
    if (!curr) {
      this.head = prev;
      this.tail = prev;
      return;
    }

    let next = curr.next;
    curr.next = prev;

    this.reverseListRecursive(next, curr);
  }

  // Zipper List - Merge two linked lists
  // O(n)
  mergeTwoLists(list1, list2) {
    let dummy = new Node();
    let tail = dummy;

    while (list1 != null && list2 != null) {
      if (list1.val < list2.val) {
        tail.next = list1;
        list1 = list1.next;
      } else {
        tail.next = list2;
        list2 = list2.next;
        this.length++;
      }
      tail = tail.next;
    }

    // Attach remaining nodes, if any
    if (list1 != null) {
      tail.next = list1;
    } else if (list2 != null) {
      tail.next = list2;
      this.length++;
    }

    // Update the tail of the merged list
    while (tail.next) {
      tail = tail.next;
    }
    this.tail = tail;

    // Set head to the next of dummy node
    this.head = dummy.next;
  }
}

let linkedList = new SinglyLinkedList();

linkedList.push(1);
linkedList.push(2);
linkedList.push(3);
linkedList.push(4);
linkedList.push(5);

linkedList.print("5 pushes");
// linkedList.printRecursive(linkedList.head);

linkedList.reverseList();
linkedList.print("Reversed linked list");

linkedList.reverseListRecursive();
linkedList.print("Reversed linked list recursively");

let linkedList2 = new SinglyLinkedList();
linkedList2.push(2.5);
linkedList2.push(3.5);
linkedList2.push(4.5);
linkedList2.push(5.5);

linkedList.mergeTwoLists(linkedList.head, linkedList2.head);
linkedList.print("Merged linked list");
console.log(linkedList.length, linkedList.head.val, linkedList.tail.val);
