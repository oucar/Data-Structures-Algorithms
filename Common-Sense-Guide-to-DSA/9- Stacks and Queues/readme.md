### Stacks and Queues

- Simply array with restrictions and these restrictions make them special.

- The reason why we'd like to work with abstract data structures that have restrictions is we can prevent potential bugs.

- They are tools for handling temporary data.

---

### Stacks: Last In First Out (LIFO)

#### Have 3 constraints.

1. Data can be inserted only at the end of a stack.

2. Data can be deleted only from the end of a stack.

3. Only the last element of a stack can be read.

- End of a stack is known as **top**.

- Beginning of a stack is known as the **bottom**.

- Stacks are especially useful when we need to implement some sort of **Undo** operation.

---

### Queues: First In First Out (FIFO)

#### Have 3 constraints.

1. Data can be inserted only at the end of a queue (same as stacks).

2. Data can be deleted only from the front of a queue (oppsite of stack).

3. Only the element at the front of a queue can be read (opposite of a stack).

- Beginning is known as the **front**.

- End is known as the **back**.

- Queues are perfect abstract data structures for handling asynchronous requests.
