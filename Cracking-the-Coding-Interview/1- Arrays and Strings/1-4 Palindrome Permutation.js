// Palindrome is the word or phare that is the same forwards and backwards
// A palindrome string should have only one "odd" character count.

// ? EXAMPLES
// Don't nod.
// Evil olive.
// Amore, Roma.
// Yo, banana boy!
// Dammit, I'm mad!

function palindromePermutation(str) {
  let currentOdd = 0;
  // similar to hashmap, a frequency counter
  let objCounter = {};

  // remove whitespaces, special characters (, . ! - = ) while it's already a string
  // https://stackoverflow.com/questions/6555182/remove-all-special-characters-except-space-from-a-string-using-javascript
  str = str.replace(/[^a-zA-Z0-9]/g, "");

  // turn the string into an array
  let arr = [...str];

  // lowercase
  arr = arr.map((val) => val.toLowerCase());

  for (let val of arr) objCounter[val] = (objCounter[val] || 0) + 1;

  // check if only ONE character has an odd value
  for (let char in objCounter) if (objCounter[char] % 2 === 1) currentOdd++;

  if (currentOdd !== 1) return false;

  return true;
}

console.log(palindromePermutation("Don't nod. ")); // true
console.log(palindromePermutation("Dammit, I'm mad!")); // true
console.log(palindromePermutation("taco cat")); // true
console.log(palindromePermutation("0123210 ,!#!@##!@$")); // true
console.log(palindromePermutation("donttnod")); // false
console.log(palindromePermutation("abab")); // false
