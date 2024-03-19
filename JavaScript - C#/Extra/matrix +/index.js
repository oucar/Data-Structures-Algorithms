// --- Directions
// Write a function that accepts an integer N
// and returns a NxN spiral matrix.
// --- Examples
//   matrix(2)
//     [[1, 2],
//     [4, 3]]
//   matrix(3)
//     [[1, 2, 3],
//     [8, 9, 4],
//     [7, 6, 5]]
//  matrix(4)
//     [[1,   2,  3, 4],
//     [12, 13, 14, 5],
//     [11, 16, 15, 6],
//     [10,  9,  8, 7]]

function matrix(n) {
  let totalArrows = 2 * n - 1;
  let currX = 0;
  let currY = 0;
  let number = 1;

  // creating an empty nxn matrix
  let matrix = [];
  for (let i = 0; i < n; i++) {
    matrix.push(new Array(n).fill(0));
  }

  // always starting by drawing the right arrow
  let arrows = ["right", "down", "left", "up"];
  let arrowIndex = 0;

  for(let i = 0; i < totalArrows; i++){

    if(arrows[arrowIndex] === "right"){
      while(currY < n && matrix[currX][currY] === 0){
        matrix[currX][currY++] = number++;      
      }
      // we were moving Y up, so it went out of bounds and we need to move it back
      currX++; 
      currY--;

    }

    else if(arrows[arrowIndex] === "down"){
      while(currX < n && matrix[currX][currY] === 0){
        matrix[currX++][currY] = number++;
      }
      // we were moving X down, so it went out of bounds and we need to move it back
      currX--; 
      currY--; 
    }

    else if(arrows[arrowIndex] === "left"){
      while(currY >= 0 && matrix[currX][currY] === 0){
        matrix[currX][currY--] = number++;
      }
      // we were moving Y left, so it went out of bounds and we need to move it back
      // ++ in this situation since we're trying to make -1 to 0
      currY++; 
      currX--; 
    }

    else if(arrows[arrowIndex] === "up"){
      while(currX >= 0 && matrix[currX][currY] === 0){
        matrix[currX--][currY] = number++;
      }
      // we were moving X up, so it went out of bounds and we need to move it back
      // ++ in this situation since we're trying to make -1 to 0
      currX++; 
      currY++; 
    }

    // moving to the next arrow (right, down, left, up)
    arrowIndex = (arrowIndex + 1) % 4; 
  }

  // console.log(matrix)
  return matrix;
}

module.exports = matrix;
