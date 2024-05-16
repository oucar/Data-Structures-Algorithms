// Write a function called maxSubarraySum which accepts an array of integers and a number called n.
// The function should calculate the maximum sum of n sensecutive elements in the array.
// Fixed sized sliding window
function maxSubarraySumON2(arr, num) {
  if (num > arr.length) {
    return null;
  }
  var max = -Infinity;
  for (let i = 0; i < arr.length - num + 1; i++) {
    temp = 0;
    for (let j = 0; j < num; j++) {
      temp += arr[i + j];
    }
    if (temp > max) {
      max = temp;
    }
  }
  return max;
}

// SLIDING WINDOW, REFACTORED --> O(N)
function maxSubarraySum(arr, num) {
  if (arr.length < num) return null;

  let max = Number.NEGATIVE_INFINITY;
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];

    if (i >= num - 1) {
      max = Math.max(max, sum);
      sum -= arr[i - (num - 1)];
    }
  }
  return max;
}

console.log(maxSubarraySum([1, 2, 5, 2, 8, 1, 5], 2)); // 10
console.log(maxSubarraySum([100, 200, 300, 400], 2)); // 700
console.log(maxSubarraySum([2, 3], 3)); // null
console.log(maxSubarraySum([3, -2, 7, -4, 1, -1, 4, -2, 1], 2)); // 5
