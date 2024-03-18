// --- Directions
// Given a string, return a new string with the reversed
// order of characters
// --- Examples
//   reverse('apple') === 'leppa'
//   reverse('hello') === 'olleh'
//   reverse('Greetings!') === '!sgniteerG'

// My solution
function reverse(str) {
  // strings in js are immutable
  let arr = str.split("");
  for (let i = 0, j = arr.length - 1; i < j; i++, j--) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  return arr.join("");
}

// Another solution could be:
// str.split('').reverse().join('');

// Another solution by creating an empty array
function reverse2(str) {
  let reversed = "";

  // o + ''
  // n + o
  // u + n + o
  // r + u + n + o
  for (let char of str) {
    reversed = char + reversed;
  }

  return reversed;
}

module.exports = reverse;
