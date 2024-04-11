// With a given sum, find the length of the smallest subarray.
// 4,2,2,7,8,1,2,8,10 -- k = 10 --> 1 (10)

function smallestSubarrayWithGivenSum(arr, targetSum) {
  let minWindowSize = Number.POSITIVE_INFINITY;
  let currentWindowSum = 0;
  let windowStart = 0;

  for (let windowEnd = 0; windowEnd < arr.length; windowEnd++) {
    currentWindowSum += arr[windowEnd];

    while (currentWindowSum >= targetSum) {
      minWindowSize = Math.min(minWindowSize, windowEnd - windowStart + 1);
      currentWindowSum -= arr[windowStart];
      windowStart++;
    }
  }

  return minWindowSize;
}

console.log(smallestSubarrayWithGivenSum([1, 2, 5, 2, 8, 1, 5, 6], 6)); // 1 (6)
console.log(smallestSubarrayWithGivenSum([4, 2, 2, 7, 8, 1, 2, 8, 10], 8)); // 1 (8)
console.log(smallestSubarrayWithGivenSum([1, 2, 3, 4, 5, 6, 7, 8], 10)); // 2 (5,6)
console.log(smallestSubarrayWithGivenSum([1, 2, 3, 4, 5, 6, 7, 8], 20)); // 3 (6,7,8)
console.log(smallestSubarrayWithGivenSum([4, 2, 2, 7, 8, 1, 2, 8, 10], 8)); // 1 (8)
console.log(smallestSubarrayWithGivenSum([], 20)); // 0
console.log(smallestSubarrayWithGivenSum([1, 2, 3, 4, 5, 6, 7, 8], 0)); // 0
