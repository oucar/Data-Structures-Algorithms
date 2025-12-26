# Trees and Binary Search Trees

- **If we are going to want our data sorted often**, it would be sensible to always keep our data in sorted order in the first place so that we never need to resort it.
- Even though hash tables are great for faster operations. They do not maintain order.
- As in a family tree, a node can have descendants and ancestors. A node's descendants are all the nodes that stem from a node, while a node's ancestors are all the nodes that it stems from.
- A tree is called **balanced** when its nodes' subtrees have the same number of nodes in it.

---

## Binary Search Trees

![](https://cdn-images-1.medium.com/max/720/1*60-nsjwjRGU292No_K3lMg.png)

- A binary search tree is a binary tree that also abides by the following rules:
  - Each node has zero, one or two children.
  - Each node can have at most one "left" child and one "right" child.
  - A node's **"left"** descendants can only contain values that **are less than the node** itself. Likewise, a node's **"right"** descendants can only contain values that **are greater than the node** itself.
- Searching, inserting and deleting in a binary search tree is O(log N) in best scenario, which is the apt description for any algorithm that eliminates half of the remaining values with each step. **That's only for a perfectly balanced binary search tree though.** Because of this, if you ever want to convert an ordered array into a binary search tree, you'd better first randomize the order of the data so that you don't end up with an unbalanced tree.
- When deleting a node with two children, replace the deleted node with the successor node. **The successor node** is the child node whose value is the least of all values that are greater than the deleted node.
  - Finding the successor node: Visit the right child of the deleted value, and then keep on visiting the left child of each subsequent child until there are no more left children. The bottom value is the successor node.
  - Successor node is the smallest value that is greater than the parent.
  - If the successor node has a right child, after plugging the successor node into the spot of the deleted node, take the former right child of the successor node and turn it into the left child of the former parent of the successor node.

---

## Depth First Search

- DFS is a traversal algorithm that explores as far as possible along each branch before backtracking.

#### Inorder Traversal --> Ascending --> Left, Root, Right

- Easier recursively.
  - Traverse the left subtree.
  - Visit the root.
  - Traverse the right subtree.
- Create a variable to store the values of nodes visited.
- Store the root of the BST in a variable called `current`.
- Write a helper function that takes a node as an argument.
  - If the node has a left child, call the helper function with the left child as an argument.
  - Push the value of the node to the variable that stores the values of nodes visited.
  - If the node has a right child, call the helper function with the right child as an argument.

#### Preorder Traversal --> Root, Left, Right

- Easier recursively.
  - Traverse the left subtree.
  - Visit the root.
  - Traverse the right subtree.
- Create a variable to store the values of nodes visited.
- Store the root of the BST in a variable called `current`.
- Write a helper function that takes a node as an argument.
  - Push the value of the node to the variable that stores the values of nodes visited.
  - If the node has a left child, call the helper function with the left child as an argument.
    - Push the value of the node to the variable that stores the values of nodes visited.
  - If the node has a right child, call the helper function with the right child as an argument.
    - Push the value of the node to the variable that stores the values of nodes visited.

#### Postorder Traversal --> Left, Right, Root

- Easier recursively.
  - Traverse the left subtree.
  - Traverse the right subtree.
  - Visit the root.
- Create a variable to store the values of nodes visited.
- Store the root of the BST in a variable called `current`.
- Write a helper function that takes a node as an argument.
  - If the node has a left child, call the helper function with the left child as an argument.
  - If the node has a right child, call the helper function with the right child as an argument.
  - Push the value of the node to the variable that stores the values of nodes visited.

---

## Breadth First Search

- BFS is a level-order traversal. It visits all the nodes on a level before moving to the next level.
- Create a queue (FIFO) and add an array to store the values of nodes visited.
- Start with the root node and add it to the queue.
- While the queue is not empty, dequeue the node and add its value to the variable that stores the values of nodes visited.
- If the node has a left child, add it to the queue.
- If the node has a right child, add it to the queue.
- Return the variable that stores the values of nodes visited.

---

## When to use DFS or BFS?

- If the tree is **very wide**, use **BFS**.
- If fewer nodes are at each level, use **BFS**.
- If the tree is **very deep and solutions are rare**, use **BFS**.
- Finding the **shortest path**, use **BFS**.
- If the tree is **very deep and solutions are frequent**, use **DFS**.
- Determining **whether a path exists between two nodes**, use **DFS**.
- **DFS - Inorder** --> Used commonly with binary search trees.
  - Notice we get all nodes in the tree in their **ascending** order.
- **DFS - Preorder** --> Can be used to **export a tree structure** so that it is easily reconstructed or copied.
- **DFS - Postorder** --> Can be used to **delete a tree**.
  - Children are deleted before the parent node.

---

## Some examples of Trees:

- **HTML DOM**: The Document Object Model (DOM) is a programming interface for web documents. It represents the structure of a document as a tree of nodes.
- **Network Routing**: The internet is a network of routers that forward data packets to their destinations. The routers are organized in a tree structure.
- **File Systems**: A file system is a tree of directories and files. The root directory is the top of the tree.
