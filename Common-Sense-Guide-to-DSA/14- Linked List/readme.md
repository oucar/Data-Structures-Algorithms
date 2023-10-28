### Linked List

- A node in a linked list typically consists of two components called data and a pointer to the next node. Data holds the actual value or data associated with the node. The nxet pointer stores the memory address (reference) of the next node in the sequence.
- Instead of being a contiguous memory, the data from linked lists can be scattered across different cells througout the computer's memory. Connected data that is dispersed throughout the memory are known as nodes, and they are connected to each other with pointers

--- 
### Why Linked list?
- Dynamic Data structure: The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.
- Efficient Memory Utilization: As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory. 
- Insertion and deletion is easy. 
--- 
### Single Linked List
- In a singly linked list, each node contains a reference to the next node in the sequence. Traversing a singly linked list is done in a forward direction.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220712172013/Singlelinkedlist.png)

### Double Linked List
- In a doubly linked list, each node contains references to both the next and previous nodes. This allows for traversal in both forward and backward directions, but it requires additional memory for the backward reference.
![](https://media.geeksforgeeks.org/wp-content/uploads/20220712180755/Doublylinkedlist.png)

### Circular Linked List
-  In a circular linked list, the last node points back to the head node, creating a circular structure. It can be either singly or doubly linked.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220712181336/Circularlinkedlist.png)
---
### Different operations on a linked list 
- **Insertion:** Adding a new node to a linked list involves adjusting the pointers of the existing nodes to maintain the proper sequence. Insertion can be performed at the beginning, end, or any position within the list
- **Deletion:** Removing a node from a linked list requires adjusting the pointers of the neighboring nodes to bridge the gap left by the deleted node. Deletion can be performed at the beginning, end, or any position within the list.
- **Searching:** Searching for a specific value in a linked list involves traversing the list from the head node until the value is found or the end of the list is reached.
---
![](https://i.stack.imgur.com/d1jQc.png)