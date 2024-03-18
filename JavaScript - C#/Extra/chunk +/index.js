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
  let mainArray = [];
  let subArr = [];

  for (let item of array) {
    // keep pushing until subArray size is less than given size
    if (subArr.length !== size) {
      subArr.push(item);

      // if with the recent push - subArr.length == size, then push to main array and reset the subArr
      if (subArr.length == size) {
        mainArray.push(subArr);
        subArr = [];

      // if we reached the last item before pushing the current subArr to mainArray - push whatever is left
      } else if (item == array[array.length - 1]) {
        mainArray.push(subArr);
      }
    }
  }

  console.log(mainArray);
  return mainArray;
}

module.exports = chunk;
