# Trees and Binary Search Trees

- If we are going to want our data sorted often, it would be sensible to always keep our data in sorted order in the first place so that we never need to resort it.
- Even though hash tables are great for faster operations. They do not maintain order.
- As in a family tree, a node can have descendants and ancestors. A node's descendants are all the nodes that stem from a node, while a node's ancestors are all the nodes that it stems from.
- A tree is called **balanced** when its nodes' subtrees have the same number of nodes in it.

---

## Binary Search Trees

- A binary search tree is a binary tree that also abides by the following rules:
  - Each node has zero, one or two children.
  - Each node can have at most one "left" child and one "right" child.
  - A node's "left" descendants can only contain values that are less than the node itself. Likewise, a node's "right" descendants can only contain values that are greater than the node itself.
- Searching, inserting and deleting in a binary search tree is O(log N) in best scenario, which is the apt description for any algorithm that eliminates half of the remaining values with each step. **That's only for a perfectly balanced binary search tree though.** Because of this, if you ever want to convert an ordered array into a binary search tree, you'd better first randomize the order of the data so that you don't end up with an unbalanced tree.
- When deleting a node with two children, replace the deleted node with the successor node. **The successor node** is the child node whose value is the least of all values that are greater than the deleted node.
  - Finding the successor node: Visit the right child of the deleted value, and then keep on visiting the left child of each subsequent child until there are no more left children. The bottom value is the successor node.
  - Successor node is the smallest value that is greater than the parent.
  - If the successor node has a right child, after plugging the successor node into the spot of the deleted node, take the former right child of the successor node and turn it into the left child of the former parent of the successor node.

---

#### Inorder Traversal --> Ascending

#### Preorder Traversal --> Root, Left, Right

#### Postorder Traversal --> Left, Right, Root
