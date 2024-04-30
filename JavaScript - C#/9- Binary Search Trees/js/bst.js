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

  remove(value) {
    const removeNode = (node, value) => {
      if (node === null) {
        return null;
      }

      if (value < node.value) {
        node.left = removeNode(node.left, value);
        return node;
      } else if (value > node.value) {
        node.right = removeNode(node.right, value);
        return node;
      } else {
        // If the node has no children
        if (node.left === null && node.right === null) {
          return null;
        }

        // If the node has no left child
        if (node.left === null) {
          return node.right;
        }

        // If the node has no right child
        if (node.right === null) {
          return node.left;
        }

        // If the node has both left and right children
        let tempNode = node.right;
        while (tempNode.left !== null) {
          tempNode = tempNode.left;
        }

        node.value = tempNode.value;
        node.right = removeNode(node.right, tempNode.value);
        return node;
      }
    };

    this.root = removeNode(this.root, value);
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

  // Breadth First Search
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

  // DFS - PreOrder
  // Preorder Traversal --> Root, Left, Right
  DFSPreOrder(root) {
    if (root === null) return [];

    const leftValues = this.DFSPreOrder(root.left);
    const rightValues = this.DFSPreOrder(root.right);
    return [root.value, ...leftValues, ...rightValues];
  }

  // DFS - PostOrder
  // Postorder Traversal --> Left, Right, Root
  DFSPostOrder(root) {
    if (root === null) return [];

    const leftValues = this.DFSPostOrder(root.left);
    const rightValues = this.DFSPostOrder(root.right);
    return [...leftValues, ...rightValues, root.value];
  }

  // DFS - InOrder
  // Inorder Traversal --> Left, Root, Right
  DFSInOrder(root) {
    if (root === null) return [];

    const leftValues = this.DFSInOrder(root.left);
    const rightValues = this.DFSInOrder(root.right);
    return [...leftValues, root.value, ...rightValues];
  }
}

//       10
//    6       15
//  3   8         20
var tree = new BinarySearchTree();
tree.insert(10);
tree.insert(6);
tree.insert(15);
tree.insert(3);
tree.insert(8);
tree.insert(20);

console.log(tree.BFS()); // [10, 6, 15, 3, 8, 20]
console.log(tree.DFSPreOrder(tree.root)); // [10, 6, 3, 8, 15, 20]
console.log(tree.DFSPostOrder(tree.root)); // [3, 8, 6, 20, 15, 10]
console.log(tree.DFSInOrder(tree.root)); // [3, 6, 8, 10, 15, 20]

tree.remove(15);
console.log(tree.DFSInOrder(tree.root)); // [3, 6, 8, 10, 20]
