// Write a function called findLongestSubstring, which accepts a string and returns
// the length of the longest substring with all distinct characters.
function findLongestSubstring(str) {
  let lastSeenIndex = {};
  let longestSize = 0;
  let windowStart = 0;

  for (let windowEnd = 0; windowEnd < str.length; windowEnd++) {
    let rightChar = str[windowEnd];

    if (rightChar in lastSeenIndex) {
      windowStart = Math.max(windowStart, lastSeenIndex[rightChar] + 1);
    }

    lastSeenIndex[rightChar] = windowEnd;
    longestSize = Math.max(longestSize, windowEnd - windowStart + 1);
  }

  return longestSize;
}

console.log(findLongestSubstring("")); // 0
console.log(findLongestSubstring("rithmschool")); // 7
console.log(findLongestSubstring("thisisawesome")); // 6
console.log(findLongestSubstring("thecatinthehat")); // 7
console.log(findLongestSubstring("bbbbbb")); // 1
console.log(findLongestSubstring("longestsubstring")); // 8
console.log(findLongestSubstring("thisishowwedoit")); // 6
