// Rotate the image (NxN) by 90 degrees

function rotate(arr) {
  let i;
  let j;
  let m;
  let k = arr.length - 1;

  let rotatedArr = [];

  // for(i = 0, k; i < arr.length; i++){
  //     for(j = 0; j < arr[i].length; j++){
  //         rotatedArr.push();
  //         console.log(k, j)
  //     }
  // }

  for (i = arr.length - 1, m = 0; i >= 0; i--, m++) {
    for (let j = 0; j < arr[i].length; j++) {
      // console.log(i, j);
      // console.log(arr[i][j])
      // rotatedArr.push([arr[j][m]])
    }
    rotatedArr.push([1, 2, 3]);
  }
  console.log(rotatedArr);
  return true;
}

// console.log(rotate([[1,2], [3,4]]));
console.log(
  rotate([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
  ]),
);
