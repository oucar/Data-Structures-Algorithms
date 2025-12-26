// FREQUENCY PATTERN
// Accepts two arrays, Function should return true
// if every value in the array has it's corresponding value squared in the
// second array. The frequency of values must be the same.

function same(arr1, arr2) {
  if (arr1.length !== arr2.length) return false;

  // keep track of number of integers in each array
  let objTracker1 = {};
  let objTracker2 = {};

  for (let val of arr1)
    objTracker1[val] ? objTracker1[val]++ : (objTracker1[val] = 1);

  for (let val of arr2)
    objTracker2[val] ? objTracker2[val]++ : (objTracker2[val] = 1);

  for (let key in objTracker1) {
    // if the squared integer doesn't appear in the second array
    if (!(key ** 2 in objTracker2)) return false;

    // doesn't appear the same amount of time
    if (objTracker2[key ** 2] !== objTracker1[key]) return false;
  } // end for

  return true;
}

console.log(same([1, 2, 3], [4, 1, 9])); // true
console.log(same([1, 2, 3], [1, 9])); // false
console.log(same([1, 2, 1], [4, 4, 1])); // false
