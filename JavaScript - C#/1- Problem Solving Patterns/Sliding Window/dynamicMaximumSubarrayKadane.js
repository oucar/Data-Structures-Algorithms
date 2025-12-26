// Given an integer array nums, find the subarray
//  with the largest sum, and return its sum.

// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

// AKA: Kadane's algorithm
var maxSubArray = function (nums) {
  let maxSum = nums[0];
  let currentSum = maxSum;

  // first one is already in currentSum
  for (let i = 1; i < nums.length; i++) {
    // which one is bigger - currentSum + current element or is current element negative maybe?
    currentSum = Math.max(nums[i] + currentSum, nums[i]);
    maxSum = Math.max(currentSum, maxSum);
  }

  return maxSum;
};

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])); // 6
console.log(maxSubArray([1])); // 1
console.log(maxSubArray([5, 4, -1, 7, 8])); // 23
