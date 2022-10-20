## Sliding Window Pattern
#### Explanation: [Link](https://medium.datadriveninvestor.com/javascript-algorithm-2-sliding-window-66622c7cb4f8)
#### Video: [Link](https://www.youtube.com/watch?v=MK-NZ4hN7rs)
* Great fit for if there's some kind of iteration
* Good with array, strings, linked lists etc.
* Min, max, longest, shortest, containes followings, etc.

> This pattern involves creating a window which can either be an array or number from one position to another. Depending on a certain condition, the window either increases or closes (and a new window is created.) Very useful for keeping track of a subset of data in array/string etc.
> Examples:

:star: Write a function called maxSubarraySum which accepts an array of integers and a number called n. The function should calculate the maximum sum of n sensecutive elements in the array. maxSubarraySum.js<br>

:star: Same as previos question, find the maximum sum of a contigious subarray of size 3. maxSubarray3.js

:star: Find the smallest subarray with given sum. This time the window size is dynamic. We will try to find the smallest subarray for smallest sum >= 8. smallestSum.js

:star: Find the smallest subarray with given sum. This time the window size is dynamic. We will try to find the smallest subarray for smallest sum >= 8. Same question as the previous one. minSubArrayLen.js

:star: Write a function called findLongestSubstring, which accepts a string and returns the length of the longest substring with all distinct characters. findLongestSubstring.js