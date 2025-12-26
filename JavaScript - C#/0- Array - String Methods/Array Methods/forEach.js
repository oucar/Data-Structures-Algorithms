// executes a given function for every element in an array

const numbers = [1, 2, 3, 4, 5];
// (item, index)
numbers.forEach((item, index) => {
  console.log(`arr[${index}] = ${item}`);
});

console.log("----");

// (item, index, arr)
numbers.forEach((item, index, arr) => {
  console.log(`arr[${arr[index] - 1}] = ${item}`);
});

console.log("----");

// calculating sum
let sum = 0;
numbers.forEach((item) => {
  sum += item;
});
console.log(sum);

console.log("----");

// how many times a letter appears in an array (extra-object counter method)
const letters = ["a", "b", "c", "a", "o", "d", "e"];
let obj = {};
for (let val of letters) obj[val] = (obj[val] || 0) + 1;

console.log(obj);
