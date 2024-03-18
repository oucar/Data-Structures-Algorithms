// --- Directions
// Check to see if two provided strings are anagrams of eachother.
// One string is an anagram of another if it uses the same characters
// in the same quantity. Only consider characters, not spaces
// or punctuation.  Consider capital letters to be the same as lower case
// --- Examples
//   anagrams('rail safety', 'fairy tales') --> True
//   anagrams('RAIL! SAFETY!', 'fairy tales') --> True
//   anagrams('Hi there', 'Bye there') --> False

function anagrams(stringA, stringB) {
  // make lowercase use regex to remove spaces and punctations
  stringA.replace(/[^\w\s]/g, "").toLowerCase();
  stringB.replace(/[^\w\s]/g, "").toLowerCase();

  // r: 0 --> 1
  // a: 0 --> 1 --> 2
  let objCounterA = {};
  let objCounterB = {};

  // iterate thru the array of characters (of strings)
  for (key of stringA) objCounterA[key] = (objCounterA[key] || 0) + 1;
  for (key of stringB) objCounterB[key] = (objCounterB[key] || 0) + 1;


    console.log(objCounterA);
    console.log(objCounterB);

  for (key in objCounterA) {
    if (objCounterA[key] !== objCounterB[key]) return false;
  }

  return true;
}

module.exports = anagrams;
