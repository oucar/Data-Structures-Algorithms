"use strict";

// --- Directions
// Given a string, return the character that is most
// commonly used in the string.
// --- Examples
// maxChar("abcccccccd") === "c"
// maxChar("apple 1231111") === "1"
// This is the frequency counter pattern!
// let objCounter = {
//     'a': 2,
//     'b': 3,
//     'c': 1
// };
// key --> a,b,c
// objCounter[key] --> 2, 3, 1
function maxChar(str) {
  var objCounter = {};
  var max = -1;
  var result = '';
  var _iteratorNormalCompletion = true;
  var _didIteratorError = false;
  var _iteratorError = undefined;

  try {
    for (var _iterator = str[Symbol.iterator](), _step; !(_iteratorNormalCompletion = (_step = _iterator.next()).done); _iteratorNormalCompletion = true) {
      val = _step.value;
      objCounter[val] = (objCounter[val] || 0) + 1;
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

  for (var key in objCounter) {
    if (objCounter[key] > max) {
      max = objCounter[key];
      result = key;
    }
  }

  return result;
}

module.exports = maxChar;