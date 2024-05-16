// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value.
// Any answer with a calculation error less than 10-5 will be accepted.

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000

// Constraints:

// n == nums.length
// 1 <= k <= n <= 105
// -104 <= nums[i] <= 104

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function (nums, k) {
  let maxAverage = -Infinity;
  let currSum = 0;
  let start = 0;

  if (nums.length < k) return null;

  for (let end = 0; end < nums.length; end++) {
    // Add current element to the current sum
    currSum += nums[end];

    // If we have hit the window size
    if (end - start + 1 === k) {
      maxAverage = Math.max(maxAverage, currSum / k); // Update maxAverage if current average is greater
      currSum -= nums[start]; // Subtract the element going out of the window
      start++; // Slide the window to the right
    }
  }

  return maxAverage;
};

console.log(findMaxAverage([1, 12, -5, -6, 50, 3], 4)); // 12.75
console.log(findMaxAverage([5], 1)); // 5
console.log(findMaxAverage([1, 12, -5, -6, 50, 3], 1)); // 50
console.log(findMaxAverage([1, 12, -5, -6, 50, 3], 2)); // 22.5
