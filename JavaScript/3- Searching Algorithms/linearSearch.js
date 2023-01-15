// Best -> O(1)
// Average -> O(n)
// Worst -> O(n)

function linearSearch(arr, val) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === val) return i;
  }

  return -1;
}

let arr = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];

console.log(linearSearch(arr, 20));
console.log(linearSearch(arr, 100));
console.log(linearSearch(arr, 10));
console.log(linearSearch(arr, 31));
