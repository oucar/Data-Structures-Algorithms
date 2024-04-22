class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }
  insert(value) {
    var newNode = new Node(value);
    // if there is no root, the new node becomes the root
    if (this.root === null) {
      this.root = newNode;
      return this;
    }

    // if there is a root, check if the value of the new node is greater or less than the value of the root
    var current = this.root;

    while (true) {
      // or we can use a frequency counter and display something like 10 (2)
      if (value === current.value) return undefined;
      if (value < current.value) {
        if (current.left === null) {
          current.left = newNode;
          return this;
        }
        current = current.left;
      } else {
        if (current.right === null) {
          current.right = newNode;
          return this;
        }
        current = current.right;
      }
    }
  }

  find(value) {
    // if there is no root, return false
    if (this.root === null) return false;

    var current = this.root;
    var found = false;

    // while we haven't found the value and there is still a current node
    while (current && !found) {
      if (value < current.value) {
        current = current.left;
      } else if (value > current.value) {
        current = current.right;
      } else {
        found = true;
      }
    }

    if (!found) return undefined;
    return current;
  }

  BFS() {
    var node = this.root;
    var data = [];
    var queue = [];

    // place the root node in the queue
    queue.push(node);

    // while there is something in the queue
    while (queue.length) {
      // FIFO - shift the first node in the queue
      node = queue.shift();
      // removed the node from the queue and push it to the data array
      data.push(node.value);

      // if there is a left or right node, push it to the queue
      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }

    return data;
  }
}

//       10
//    5        13
//  2   7    11   16
var tree = new BinarySearchTree();
tree.insert(10);
tree.insert(5);
tree.insert(13);
tree.insert(11);
tree.insert(2);
tree.insert(16);
tree.insert(7);


console.log(tree.BFS()); // [10, 5, 13, 2, 7, 11, 16]