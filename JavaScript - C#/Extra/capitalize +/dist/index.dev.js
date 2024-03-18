"use strict";

// --- Directions
// Write a function that accepts a string.  The function should
// capitalize the first letter of each word in the string then
// return the capitalized string.
// --- Examples
//   capitalize('a short sentence') --> 'A Short Sentence'
//   capitalize('a lazy fox') --> 'A Lazy Fox'
//   capitalize('look, it is working!') --> 'Look, It Is Working!'
function capitalize(str) {
  var arr = str.split("");
  arr[0] = arr[0].toUpperCase();

  for (var i = 0; i < arr.length; i++) {
    if (arr[i] === " ") {
      if (arr[i + 1]) {
        var value = arr[i + 1].toString().toUpperCase(); // console.log(value);

        arr[i + 1] = value;
        console.log(arr);
      }
    }
  }

  console.log(arr);
  return arr.join("");
}

module.exports = capitalize;