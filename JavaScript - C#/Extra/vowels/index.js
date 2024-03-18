// --- Directions
// Write a function that returns the number of vowels
// used in a string.  Vowels are the characters 'a', 'e'
// 'i', 'o', and 'u'.
// --- Examples
//   vowels('Hi There!') --> 3
//   vowels('Why do you ask?') --> 4
//   vowels('Why?') --> 0

function vowels(str) {
  let vowelsArr = ["a", "e", "i", "o", "u"];
  let objCounter = {};
  let counter = 0;

  str = str.toLowerCase();

  for (let val of str) objCounter[val] = (objCounter[val] || 0) + 1;

  for (let val of vowelsArr) if (objCounter[val]) counter++;

  return counter;
}

module.exports = vowels;
