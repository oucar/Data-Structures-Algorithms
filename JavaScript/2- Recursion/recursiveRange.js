// 5 --> 1 + 2 + 3 + 4 + 5
function recursiveRange(num) {
  let result = 0;

  // helper function
  function addRecursive(inputNum) {
    if (inputNum === 0) return;
    result = result + inputNum;
    addRecursive(inputNum - 1);
  }

  addRecursive(num);

  return result;
}

console.log(recursiveRange(6)); // 21
console.log(recursiveRange(10)); // 55
