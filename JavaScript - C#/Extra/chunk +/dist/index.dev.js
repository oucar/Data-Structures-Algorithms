"use strict";

// --- Directions
// Given an array and chunk size, divide the array into many subarrays
// where each subarray is of length size
// --- Examples
// chunk([1, 2, 3, 4], 2) --> [[ 1, 2], [3, 4]]
// chunk([1, 2, 3, 4, 5], 2) --> [[ 1, 2], [3, 4], [5]]
// chunk([1, 2, 3, 4, 5, 6, 7, 8], 3) --> [[ 1, 2, 3], [4, 5, 6], [7, 8]]
// chunk([1, 2, 3, 4, 5], 4) --> [[ 1, 2, 3, 4], [5]]
// chunk([1, 2, 3, 4, 5], 10) --> [[ 1, 2, 3, 4, 5]]
//   const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
//   const arr = [1, 2, 3, 4, 5];  -- 3
function chunk(array, size) {
  var mainArray = [];
  var subArr = [];
  var _iteratorNormalCompletion = true;
  var _didIteratorError = false;
  var _iteratorError = undefined;

  try {
    for (var _iterator = array[Symbol.iterator](), _step; !(_iteratorNormalCompletion = (_step = _iterator.next()).done); _iteratorNormalCompletion = true) {
      var item = _step.value;

      // keep pushing until subArray size is less than given size
      if (subArr.length !== size) {
        subArr.push(item); // if with the recent push - subArr.length == size, then push to main array and reset the subArr

        if (subArr.length == size) {
          mainArray.push(subArr);
          subArr = []; // if we reached the last item before pushing the current subArr to mainArray - push whatever is left
        } else if (item == array[array.length - 1]) {
          mainArray.push(subArr);
        }
      }
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

  console.log(mainArray);
  return mainArray;
}

module.exports = chunk;