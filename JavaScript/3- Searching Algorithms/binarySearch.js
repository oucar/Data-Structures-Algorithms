// DIVIDE AND CONQUER!
// Worst and Average case --> O(log n)
// Best Cae --> O(1)

function binarySearch(arr, val) {
  let start = 0;
  let end = arr.length - 1;
  let middle = Math.floor((start + end) / 2);

  while (start <= end) {
    if (arr[middle] === val) return middle;
    // value is on the left
    else if (val < arr[middle]) {
      end = middle - 1;
      middle = Math.floor((start + end) / 2);
    }

    // value is on the right
    else if (val > arr[middle]) {
      start = middle + 1;
      middle = Math.floor((start + end) / 2);
    }
  }

  return -1;
}

let arr = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];

console.log(binarySearch(arr, 20));
console.log(binarySearch(arr, 100));
console.log(binarySearch(arr, 10));
console.log(binarySearch(arr, 31));
console.log(binarySearch(arr, 50));
