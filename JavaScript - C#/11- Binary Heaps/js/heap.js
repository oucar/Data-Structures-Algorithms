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

    // Bigger element is moved to the top
    while (idx > 0) {
      let parentIdx = Math.floor((idx - 1) / 2);
      let parent = this.values[parentIdx];

      // if parent is greater than the element, stop
      if (element <= parent) break;

      //otherwise swap the element with its parent
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
    const extractedElement = this.values[0];

    while (true) {
      let leftChildIdx = 2 * idx + 1;
      let rightChildIdx = 2 * idx + 2;
      let swap = null;

      // Find the index of the child with the greater value
      if (
        leftChildIdx < length &&
        this.values[leftChildIdx] > extractedElement
      ) {
        swap = leftChildIdx;
      }
      if (
        rightChildIdx < length &&
        (swap === null || this.values[rightChildIdx] > this.values[swap])
      ) {
        swap = rightChildIdx;
      }

      // If no swap needed, stop
      if (swap === null) break;

      // Swap the element with its greater child
      [this.values[idx], this.values[swap]] = [
        this.values[swap],
        extractedElement,
      ];
      idx = swap;
    }
  }
}

// Example usage:
let heap = new MaxBinaryHeap();
console.log("Inserting elements:");
[41, 39, 33, 18, 27, 12, 55].forEach((element) => {
  heap.insert(element);
  console.log(`Inserted ${element}, Heap:`, heap.values);
});

console.log("\nExtracting maximum element:");
while (heap.values.length > 0) {
  const max = heap.extractMax();
  console.log(`Extracted ${max}, Heap:`, heap.values);
}
