function collectOddValues(arr) {
  // we don't want to reset result array everytime
  let result = [];

  function findOdds(inputArr) {
    // base case
    if (inputArr.length === 0) return;

    if (inputArr[0] % 2 !== 0) result.push(inputArr[0]);

    // remove it and call the function again
    findOdds(inputArr.slice(1));
  }

  findOdds(arr);
  return result;
}

console.log(collectOddValues([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]));
