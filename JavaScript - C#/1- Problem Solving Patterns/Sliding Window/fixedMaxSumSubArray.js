// Function to find the maximum sum of a subarray with a fixed size `k` in a given array.
// Sliding window pattern with a fixed window size.

function maxSumSubArray(arr, k) {
  let maxSum = Number.NEGATIVE_INFINITY;
  let currSum = 0;
  let start = 0;

  for (let end = 0; end < arr.length; end++) {
    currSum += arr[end];

    if (end >= k - 1) {
      maxSum = Math.max(maxSum, currSum);
      currSum -= arr[start];
      start++;
    }
  }

  return maxSum === Number.NEGATIVE_INFINITY ? null : maxSum;
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
