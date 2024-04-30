### Binary Heap

- Very similar to a binary search tree, but with some different rules!
- In a MaxBinaryHeap, parent nodes are always larger than child nodes. In a MinBinaryHeap, parent nodes are always smaller than child nodes.
- Should be a complete binary tree. (All levels are filled except possibly the last level, which is filled from left to right)

#### Max Binary Heap

- Each parent has at most two child nodes
- The value of each parent node is always greater than its child nodes
- In a max Binary Heap the parent is greater than the children, but there are no guarantees between sibling nodes.
- A binary heap is as compact as possible. All the children of each node are as full as they can be and left children are filled out first

#### Min Binary Heap

- Each parent has at most two child nodes
- The value of each parent node is always smaller than its child nodes
- In a min Binary Heap the parent is smaller than the children, but there are no guarantees between sibling nodes.
- A binary heap is as compact as possible. All the children of each node are as full as they can be and left children are filled out first

#### Why do we need to know this?

- Binary Heaps are used to implement Priority Queues, which are very commonly used data structures
- They are also used quite a bit, with graph traversal algorithms

#### Representing a Binary Heap

- Very easy to represent a binary heap using a list (or array)
- For any index of an array n...
  - The left child is stored at 2n + 1
  - The right child is at 2n + 2
  - For any child node at index n...
    - Its parent is at index (n-1)/2 floored

#### Priority Queue (is an ADT)

- A data structure where each element has a priority. Elements with higher priorities are served before elements with lower priorities
- In a binary heap, the root is the highest priority element

# Binary Heap and Priority Queue Big O

| Operation           | Binary Heap (Worst Case) | Priority Queue (Worst Case) |
| ------------------- | ------------------------ | --------------------------- |
| Insertion (enqueue) | O(log n)                 | O(log n)                    |
| Deletion (dequeue)  | O(log n)                 | O(log n)                    |
| Peek                | O(1)                     | O(1)                        |
| Search              | O(n)                     | O(n)                        |
| Change Priority     | O(log n)                 | O(n)                        |
| Build Heap          | O(n)                     | O(n)                        |
| Heapify             | O(n)                     | -                           |
| Merge Heaps         | O(n log n)               | O(n log n)                  |

- **n**: Number of elements in the heap or priority queue
