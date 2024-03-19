"use strict";

// --- Directions
// Print out the n-th entry in the fibonacci series.
// The fibonacci series is an ordering of numbers where
// each number is the sum of the preceeding two.
// For example, the sequence
//  [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
// forms the first ten entries of the fibonacci series.
// Example:
//   fib(4) === 3
// Big O: O(2^n)
function regularFib(n) {
  if (n < 2) return n;
  return regularFib(n - 1) + regularFib(n - 2);
} // Big O: O(n)


function fibIterative(n) {
  var result = [0, 1];

  for (var i = 2; i <= n; i++) {
    result.push(result[i - 1] + result[i - 2]);
  } // reuslt[n] --> 


  return result[n];
} // With memoization 
// Big O: O(n)


function fib(n) {
  if (n <= 1) return n;
  var fibArray = new Array(n);
  fibArray[0] = 0;
  fibArray[1] = 1;

  function fibMemo(k) {
    if (fibArray[k] !== undefined) return fibArray[k];
    fibArray[k] = fibMemo(k - 1) + fibMemo(k - 2);
    return fibArray[k];
  }

  return fibMemo(n - 1) + fibMemo(n - 2);
}

module.exports = fib;