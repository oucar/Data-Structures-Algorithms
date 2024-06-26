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

  // Breadth First Search
  // Implements a simple queue
  BFS(root) {
    if (root === null) return [];

    const values = [];
    const queue = [root];

    // if there is a node in the queue
    while (queue.length > 0) {
      const node = queue.shift();
      values.push(node.value);

      if (node.left !== null) queue.push(node.left);
      if (node.right !== null) queue.push(node.right);
    }

    return values;
  }

  // ### NOTE: Below algorithms are not part of the Binary Search Tree class - they are part of the Binary Tree class

  // target: (value)
  // if the tree includes the target value, return true
  // otherwise, return false
  // note that this is a BINARY TREE and not a BINARY SEARCH TREE for this example.
  // if it was a BST, we could simply compare the target value to the root value and traverse the tree accordingly
  // Logical OR operator (||) is used to check if the target value is in the left or right subtree
  // If either of the subtrees contains the target value, the function will return true
  TreeIncludes(root, target) {
    if (root === null) return false;
    if (root.value === target) return true;
    return (
      this.TreeIncludes(root.left, target) ||
      this.TreeIncludes(root.right, target)
    );
  }

  // TreeSum
  // Returns the sum of all the values in the tree
  // The function uses recursion to traverse the tree and add the values
  TreeSum(root) {
    if (root === null) return 0;
    return root.value + this.TreeSum(root.left) + this.TreeSum(root.right);
  }

  // Define a method called TreeMinValue that takes a root node as input
  TreeMinValue(root) {
    // If the root node is null (i.e., the tree is empty), return positive infinity
    if (root === null) return Infinity;

    const smallestLeftValue = this.TreeMinValue(root.left);
    const smallestRightValue = this.TreeMinValue(root.right);

    // Return the minimum value among the root value, smallest value in the left subtree, and smallest value in the right subtree
    return Math.min(root.value, smallestLeftValue, smallestRightValue);
  }

  // Define a method called MaxRootToLeafSum that takes a root node as input
  // The function calculates the maximum sum of values from the root node to a leaf node
  MaxRootToLeafSum(root) {
    if (root === null) return -Infinity;
    if (root.left === null && root.right === null) return root.value;
    return (
      root.value +
      Math.max(
        this.MaxRootToLeafSum(root.left),
        this.MaxRootToLeafSum(root.right)
      )
    );
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

// Testing breadth-first search (BFS)
console.log(tree.BFS(tree.root)); // Output: [10, 6, 15, 3, 8, 20] - Visits nodes level by level

// Testing depth-first search pre-order (DFSPreOrder)
console.log(tree.DFSPreOrder(tree.root)); // Output: [10, 6, 3, 8, 15, 20] - Visits root, left, right

// Testing depth-first search post-order (DFSPostOrder)
console.log(tree.DFSPostOrder(tree.root)); // Output: [3, 8, 6, 20, 15, 10] - Visits left, right, root

// Testing depth-first search in-order (DFSInOrder)
console.log(tree.DFSInOrder(tree.root)); // Output: [3, 6, 8, 10, 15, 20] - Visits left, root, right

// Testing TreeIncludes method
console.log("Is 15 in the tree: " + tree.TreeIncludes(tree.root, 15)); // Output: true

// Testing TreeSum method
console.log(tree.TreeSum(tree.root)); // Output: 62 - Sums all values in the tree

// Additional Tests for MaxRootToLeafSum
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 45 (from root 10 -> right 15 -> right 20)

// Additional Tests for TreeMinValue
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 3 (smallest value in the tree)

// Adding a new node with value 1 and testing again
tree.insert(1);
console.log("After adding 1:");
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 45 (from root 10 -> right 15 -> right 20)
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 1 (smallest value in the tree, updated)

// Adding another node with value 25 and testing again
tree.insert(25);
console.log("After adding 25:");
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 70 (from root 10 -> right 15 -> right 20 -> right 25)
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 1 (smallest value in the tree, unchanged)
