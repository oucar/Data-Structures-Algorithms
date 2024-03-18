"use strict";

// --- Directions
// Write a program that console logs the numbers
// from 1 to n. But for multiples of three print
// “fizz” instead of the number and for the multiples
// of five print “buzz”. For numbers which are multiples
// of both three and five print “fizzbuzz”.
// --- Example
//   fizzBuzz(5);
//   1
//   2
//   fizz
//   4
//   buzz
// My solution
function fizzBuzz(n) {
  var i = 1;

  while (i <= n) {
    var isFizz = i % 3 === 0;
    var isBuzz = i % 5 === 0;
    var isFizzBuzz = isFizz & isBuzz; // console.log(`${i}, ${n}, ${isFizz}, ${isBuzz}, ${isFizzBuzz}`)

    if (isFizzBuzz) {
      console.log("fizzbuzz");
    } else if (isFizz) {
      console.log("fizz");
    } else if (isBuzz) {
      console.log("buzz");
    } else {
      console.log(i);
    }

    i++;
  }
}

module.exports = fizzBuzz;