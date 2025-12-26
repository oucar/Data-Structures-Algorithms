// FREQUENCY COUNTER PATTERN
// Given two strings. The task is to check whether the given strings are anagrams of each other or not.
// An anagram of a string is another string that contains the same characters, only the order of
// characters can be different. For example, “abcd” and “dabc” are an anagram of each other.
// Input: str1 = “listen”  str2 = “silent”
// Output: “Anagram”
// Explanation: All characters of “listen” and “silent” are the same.

// Input: str1 = “gram”  str2 = “arm”
// Output: “Not Anagram”

function anagram(str1, str2) {
  // if string lengths are not the same
  if (str1.length !== str2.length) return false;

  // lowercase everythings
  str1 = str1.toLowerCase();
  str2 = str2.toLowerCase();

  // frequency counters
  let objCounter1 = {};
  let objCounter2 = {};

  // object counters - initialize it to 0 or increment it by 1
  for (val of str1) objCounter1[val] = (objCounter1[val] || 0) + 1;
  // console.log(objCounter1);
  for (val of str2) objCounter2[val] = (objCounter2[val] || 0) + 1;
  // console.log(objCounter2);

  for (key in objCounter1) {
    if (objCounter1[key] !== objCounter2[key]) return false;
  }

  return true;
}

console.log(anagram("", "")); // true
console.log(anagram("aaz", "zza")); // false
console.log(anagram("anagram", "nagaram")); // true
console.log(anagram("awesome", "awesom")); // false
console.log(anagram("ABC", "cba")); // true!
