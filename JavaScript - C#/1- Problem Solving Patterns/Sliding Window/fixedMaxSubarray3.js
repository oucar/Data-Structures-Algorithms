// Find the max sum subarray of a fixed sized K
// [4, 2, 1, 7, 8, 1, 2, 8, 1, 0]

// O(N)
function maxSubarraySum(arr, num) {
  let maxSum = -Infinity;
  let currSum = 0;
  let start = 0;

  if (arr.length < num) return null;

  for (let end = 0; end < arr.length; end++) {
    // Add current element to the current sum
    currSum += arr[end];

    // If we have hit the window size
    if (end - start + 1 === num) {
      maxSum = Math.max(maxSum, currSum);
      currSum -= arr[start];
      start++;
    }
  }

  return maxSum;
}

console.log(maxSubarraySum([1, 2, 5, 2, 8, 1, 5], 2)); // 10
console.log(maxSubarraySum([100, 200, 300, 400], 2)); // 700
console.log(maxSubarraySum([2, 3], 3)); // null
console.log(maxSubarraySum([3, -2, 7, -4, 1, -1, 4, -2, 1], 2)); // 5
console.log(maxSubarraySum([2, 3, 1], 3)); // 6
