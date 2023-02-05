// Combination of two things --> merging and sorting
// Divide and conquer algorithm --> breaks down the big single problem into same but smaller sub-problems

// function responsible for merging two sorted arrays
function mergeArrays(arr1, arr2) {
  let result = [];

  // one pointer for each array
  let i = 0;
  let j = 0;

  while (i < arr1.length && j < arr2.length) {
    if (arr2[j] >= arr1[i]) {
      result.push(arr1[i]);
      i++;
    } else {
      result.push(arr2[j]);
      j++;
    }
  }

  // add the remaining elements
  while (i < arr1.length) {
    result.push(arr1[i]);
    i++;
  }

  while (j < arr2.length) {
    result.push(arr2[j]);
    j++;
  }

  return result;
}

console.log(mergeArrays([3, 10, 54, 90], [5, 26, 30, 70]));
console.log(mergeArrays([3, 5, 10, 20], [10, 11, 14]));
// console.log(mergeSort([37, 45, 29, 8]));
// console.log(
//   mergeSort([
//     3128, 1655, 2863, 3242, 3706, 178, 414, 1996, 4396, 3483, 431, 4399, 1077,
//     4645, 3196, 823, 3415, 883, 244, 4762, 610, 66, 618, 1000, 3863, 3653, 1207,
//     747, 3112, 2614, 2371, 1631, 2973, 2947, 3421, 1683, 3310, 4061, 2332, 2840,
//     2164, 1235, 4566, 4499, 4497, 1292, 2351, 2850, 1280, 3530, 4408, 2129,
//     3504, 35, 1855, 3092, 3031, 3311, 1448, 298, 3180, 4042, 1799, 2243, 1658,
//     4126, 438, 2122, 1471, 3718, 805, 3639, 1616, 1974, 2385, 4743, 3204, 3382,
//     1370, 4968, 1461, 4633, 4537, 4103, 2106, 3772, 2041, 682, 1875, 1660, 632,
//     3854, 435, 2427, 945, 766, 2057, 4113, 4959, 1568, 585, 4119, 4757, 2854,
//     3156, 1921, 4919, 1784, 3129, 4764, 211, 4206, 4205, 2780, 535, 1191, 3968,
//     4307, 3040, 3326, 4695, 1492, 1924, 4382, 3424, 151, 102, 2940, 1451, 1613,
//     2052, 2649, 1384, 769, 2689, 701, 2472, 4938, 1478, 2634, 342, 2477, 4725,
//     3349, 1586, 2080, 3613, 2033, 361, 1369, 1341,
//   ])
// );
