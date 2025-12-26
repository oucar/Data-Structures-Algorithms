// reverse method changes to original array
const numbers = [1, 2, 3, 4, 5];

// but you can create a shallow copy of the original array using concat
const reversed = numbers.concat().reverse();
console.log(numbers, reversed);

// or you can use spread operator
const reversed2 = [...numbers].reverse();
console.log(numbers, reversed2);

const str = "onur";
const res = str.split("").reverse().join("");
console.log(res);
