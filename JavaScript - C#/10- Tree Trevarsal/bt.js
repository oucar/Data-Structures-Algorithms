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
    return root.value + Math.max(this.MaxRootToLeafSum(root.left), this.MaxRootToLeafSum(root.right));
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

console.log(tree.BFS(tree.root)); // [10, 6, 15, 3, 8, 20]
console.log(tree.DFSPreOrder(tree.root)); // [10, 6, 3, 8, 15, 20]
console.log(tree.DFSPostOrder(tree.root)); // [3, 8, 6, 20, 15, 10]
console.log(tree.DFSInOrder(tree.root)); // [3, 6, 8, 10, 15, 20]

console.log("Is 15 in the tree: " + tree.TreeIncludes(tree.root, 15)); // true
console.log(tree.TreeSum(tree.root)); // 62
tree.remove(15);

console.log(tree.DFSInOrder(tree.root)); // [3, 6, 8, 10, 20]
console.log("Is 15 in the tree: " + tree.TreeIncludes(tree.root, 15)); // false
console.log(tree.TreeSum(tree.root)); // 47

// Tests for MaxRootToLeafSum
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 30 (from root 10 -> right 20)

// Tests for TreeMinValue
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 3 (smallest value in the tree)

// Remove the node with value 10 and test again
tree.remove(10);
console.log("After removing 10:");
console.log(tree.BFS(tree.root));
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 23 (from root 6 -> left 3)
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 3 (smallest value in the tree, unchanged)

// Add a new node with value 1 and test again
tree.insert(1);
console.log("After adding 1:");
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 24 (from root 6 -> left 3 -> left 1)
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 1 (smallest value in the tree, updated)

// Add another node with value 25 and test again
tree.insert(25);
console.log("After adding 25:");
console.log("Max root to leaf sum:", tree.MaxRootToLeafSum(tree.root)); // Output: 35 (from root 6 -> right 8 -> right 25)
console.log("Minimum value in the tree:", tree.TreeMinValue(tree.root)); // Output: 1 (smallest value in the tree, unchanged)
