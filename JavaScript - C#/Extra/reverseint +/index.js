// --- Directions
// Given an integer, return an integer that is the reverse
// ordering of numbers.
// --- Examples
//   reverseInt(15) === 51
//   reverseInt(981) === 189
//   reverseInt(500) === 5
//   reverseInt(-15) === -51
//   reverseInt(-90) === -9

// My solution
function reverseInt(n) {
  let arr = n.toString().split("");
  let isNegative = false;

  if (arr[0] === "-") isNegative = true;

  // if negative remove the sign
  if (isNegative) {
    arr.shift();
  }

  // if ends with multiple zeros, remove them
  while (arr[arr.length - 1] === 0) {
    arr.pop();
  }

  let reversedArr = arr.reverse();

  // if negative, add the sign back
  if (isNegative) {
    arr.unshift("-");
  }

  return parseInt(reversedArr.join(""));
}

module.exports = reverseInt;
