"use strict";

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
  var arr = str.split("");

  for (var i = 0, j = arr.length - 1; i < j; i++, j--) {
    var temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  return arr.join("");
} // Another solution could be:
// str.split('').reverse().join('');
// Another solution by creating an empty array


function reverse2(str) {
  var reversed = ""; // o + ''
  // n + o
  // u + n + o
  // r + u + n + o

  var _iteratorNormalCompletion = true;
  var _didIteratorError = false;
  var _iteratorError = undefined;

  try {
    for (var _iterator = str[Symbol.iterator](), _step; !(_iteratorNormalCompletion = (_step = _iterator.next()).done); _iteratorNormalCompletion = true) {
      var _char = _step.value;
      reversed = _char + reversed;
    }
  } catch (err) {
    _didIteratorError = true;
    _iteratorError = err;
  } finally {
    try {
      if (!_iteratorNormalCompletion && _iterator["return"] != null) {
        _iterator["return"]();
      }
    } finally {
      if (_didIteratorError) {
        throw _iteratorError;
      }
    }
  }

  return reversed;
}

module.exports = reverse;