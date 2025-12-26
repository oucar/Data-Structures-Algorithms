// [1,2,3,4,5] --> 1 * 2 * 3 * 4 * 5
function productOfArray(arr) {
  let result = 1;

  function helper(helperInput) {
    // base case
    if (helperInput.length === 0) return 1;

    result = result * helperInput[0];

    // remove the first index OVER HELPER INPUT and not the ARR!!
    helper(helperInput.slice(1));
  }

  helper(arr);

  return result;
}

console.log(productOfArray([1, 2, 3])); // 6
console.log(productOfArray([1, 2, 3, 10])); // 60
