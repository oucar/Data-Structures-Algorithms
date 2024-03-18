"use strict";

// --- Directions
// Write a function that accepts a positive number N.
// The function should console log a pyramid shape
// with N levels using the # character.  Make sure the
// pyramid has spaces on both the left *and* right hand sides
// --- Examples
//   pyramid(1)
//       '#'
//   pyramid(2)
//       ' # '
//       '###'
//   pyramid(3)
//       '  #  '
//       ' ### '
//       '#####'
//   pyramid(4)
//      '   #   '
//      '  ###  '
//      ' ##### '
//      '#######'
// my solution
// 1 -> 1 block  6 spaces --> 3S 1B 3S 
// 2 -> 3 blocks 4 spaces --> 2S 3B 2S 
// 3 -> 5 blocks 2 spaces --> 1S 5B 1S
// 4 -> 7 blocks 0 space -->  0S 7B 0S
function pyramid(n) {
  var totalSpaceAmount = 0;
  var blockAmount = 1;
  var textToPrint = ""; // max amount of blocks that is on the last level is always 2*n - 1
  // max amount of spaces and blocks combined

  var maxAmount = n * 2 - 1;

  for (var i = 1; i <= n; i++) {
    if (i !== 1) blockAmount += 2;
    totalSpaceAmount = maxAmount - blockAmount; // amount of spaces is always even
    // half of it should be at the beginning, and the other half should be at the end

    var spaceAmount = totalSpaceAmount / 2;
    textToPrint = " ".repeat(spaceAmount) + "#".repeat(blockAmount) + " ".repeat(spaceAmount);
    console.log(textToPrint);
  }
}

module.exports = pyramid;