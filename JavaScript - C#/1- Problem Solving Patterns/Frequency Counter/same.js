// FREQUENCY COUNTER PATTERN
// QUICK RECAP ABOUT THE OBJECTS
function object() {
  let obj = { 1: 1, 2: 2, 10: 1, 45: 10 };
  // returns 10
  console.log(obj[45]);
}

object();

// "Write a function same2(arr1, arr2) in JavaScript that takes in two arrays of integers,
// arr1 and arr2. Determine whether the second array arr2 contains the same elements as the
// first array arr1, but squared, with the same frequency. Return true if the condition is met, otherwise return false."
// frequency pattern, refactored
function same2(arr1, arr2) {
  if (arr1.length !== arr2.length) return false;

  let frequencyCounter1 = {};
  let frequencyCounter2 = {};

  // initialize it to zero, or increment it by one
  for (let val of arr1)
    frequencyCounter1[val] = (frequencyCounter1[val] || 0) + 1;

  for (let val of arr2)
    frequencyCounter2[val] = (frequencyCounter2[val] || 0) + 1;

  for (let key in frequencyCounter1) {
    if (!(key ** 2 in frequencyCounter2)) return false;
    if (frequencyCounter2[key ** 2] !== frequencyCounter1[key]) return false;
  }

  return true;
}

console.log(same2([1, 2, 3, 4], [1, 4, 9, 16])); // true
console.log(same2([1], [1])); // true
console.log(same2([2, 3, 4], [2, 3, 4])); // false
console.log(same2([1], [1, 2])); // false
