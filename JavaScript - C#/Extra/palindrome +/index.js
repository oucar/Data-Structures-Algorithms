// --- Directions
// Given a string, return true if the string is a palindrome
// or false if it is not.  Palindromes are strings that
// form the same word if it is reversed. *Do* include spaces
// and punctuation in determining if the string is a palindrome.
// --- Examples:
//   palindrome("abba") === true
//   palindrome("abcdefg") === false

// My solution
function palindrome(str) {
  let arr = str.split("");

  // <= or < doesn't matter because technically
  // abXba is a palindrome no matter what X is - but <= is a better practice still
  for (let i = 0, j = arr.length - 1; i <= j; i++, j--) {
    if (arr[i] !== arr[j]) return false;
  }

  return true;
}

// Easier solution - not really good imo
function palindrome2(str) {
  let reversed = str.split("").reverse().join("");
  if (reversed === str) return true;
}

module.exports = palindrome;
