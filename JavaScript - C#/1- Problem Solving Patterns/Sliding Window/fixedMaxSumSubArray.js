// Find the max sum subarray of a fixed size k. This time the window size is fixed.
// Sliding window pattern with a fixed window size.

function maxSumSubArray(arr, k) {
  let max = Number.NEGATIVE_INFINITY;
  let sum = 0;

  if (k > arr.length) return null;

  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];

    // if k is 3, k-1 is 2 meaning that window covers 2 elements
    if (i >= k - 1) {
      max = Math.max(max, sum);
      sum -= arr[i - (k - 1)];
    }
  }

  return max;
}

console.log(maxSumSubArray([1, 2, 3, 4, 5, 6, 7, 8], 3)); // 21
console.log(maxSumSubArray([4, 2, 1, 7, 8, 1, 2, 8, 1, 0], 3)); // 16
console.log(maxSumSubArray([1, 2, 5, 2, 8, 1, 5], 2)); // 10
console.log(maxSumSubArray([1, 2, 5, 2, 8, 1, 5], 4)); // 17
console.log(maxSumSubArray([4, 2, 1, 6], 1)); // 6
console.log(maxSumSubArray([4, 2, 1, 6, 2], 4)); // 13
console.log(maxSumSubArray([], 4)); // null
console.log(maxSumSubArray([1, 2, 3, 4, 5, 6, 7, 8], 10)); // null
console.log(maxSumSubArray([1, 2, 3, 4, 5, 6, 7, 8], 20)); // null
