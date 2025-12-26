// permutation means they will have same characters in different orders.
// but abc is permutation of itself, abc.
function isPermutation(str1, str2) {
  // turn strings into arrays
  let arr1 = [...str1];
  let arr2 = [...str2];

  // make everything lowercase
  arr1 = arr1.map((val) => val.toLowerCase());
  arr2 = arr2.map((val) => val.toLowerCase());

  let objCounter1 = {};
  let objCounter2 = {};

  // lengths are not the same
  if (arr1.length !== arr2.length) return false;

  for (let val of arr1) objCounter1[val] = (objCounter1[val] || 0) + 1;

  for (let val of arr2) objCounter2[val] = (objCounter2[val] || 0) + 1;

  for (let key in objCounter1) {
    if (!(key in objCounter2)) return false;
    if (objCounter1[key] !== objCounter2[key]) return false;
  }

  return true;
}

console.log(isPermutation("abc", "cba")); // true
console.log(isPermutation("dog", "god")); // true
console.log(isPermutation("Abc", "CBA")); // true
console.log(isPermutation("abc", "cb")); // false
console.log(isPermutation("train", "niart")); // true
console.log(isPermutation("123ab", "abcde")); // false
