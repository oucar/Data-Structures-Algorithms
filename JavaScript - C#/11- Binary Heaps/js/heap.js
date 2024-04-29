class MaxBinaryHeap {
  constructor() {
    // Array to store elements of the heap
    this.values = [];
  }

  // Insertion of a new element into the heap
  insert(element) {
    this.values.push(element);
    this.bubbleUp(); // Reorder the heap after insertion
  }

  // Reorder the heap by moving the inserted element to its correct position (parent > child)
  bubbleUp() {
    let idx = this.values.length - 1;
    const element = this.values[idx];

    while (idx > 0) {
      let parentIdx = Math.floor((idx - 1) / 2);
      let parent = this.values[parentIdx];

      if (element <= parent) break; // Stop when the element is in its correct position
      // Swap the element with its parent
      this.values[parentIdx] = element;
      this.values[idx] = parent;

      idx = parentIdx;
    }
  }

  // Extract the maximum element (root) from the heap
  extractMax() {
    const max = this.values[0];
    const end = this.values.pop(); // Remove the last element
    if (this.values.length > 0) {
      this.values[0] = end; // Move the last element to the root
      this.sinkDown(); // Reorder the heap after removal
    }
    return max;
  }

  // Reorder the heap after removing the root element (parent < child)
  sinkDown() {
    let idx = 0;
    const length = this.values.length;
    const element = this.values[0];
    while (true) {
      let leftChildIdx = 2 * idx + 1;
      let rightChildIdx = 2 * idx + 2;
      let leftChild, rightChild;
      let swap = null;

      if (leftChildIdx < length) {
        leftChild = this.values[leftChildIdx];
        if (leftChild > element) {
          swap = leftChildIdx;
        }
      }
      if (rightChildIdx < length) {
        rightChild = this.values[rightChildIdx];
        if (
          (swap === null && rightChild > element) ||
          (swap !== null && rightChild > leftChild)
        ) {
          swap = rightChildIdx;
        }
      }
      if (swap === null) break; // Stop when the element is in its correct position
      // Swap the element with its child
      this.values[idx] = this.values[swap];
      this.values[swap] = element;
      idx = swap;
    }
  }
}

// Example usage:
let heap = new MaxBinaryHeap();
heap.insert(41);
heap.insert(39);
heap.insert(33);
heap.insert(18);
heap.insert(27);
heap.insert(12);
heap.insert(55);
