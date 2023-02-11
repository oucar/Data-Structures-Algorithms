// CHANGES AN array by removing or replacing
const numbers = [1, 2, 3, 4, 5];

// how many items you wanna remove starting from 2nd index
const deleted = numbers.splice(2, 3);
console.log(numbers);
console.log(deleted);

// remove 3 items starting from 2, and add 6 and 7 TO THE FIRST ARRAY!
// deleted numbers behave the same
const numbers2 = [1, 2, 3, 4, 5];
const deleted2 = numbers2.splice(2, 3, 6, 7);
console.log(numbers2);
console.log(deleted2);


// starting from the 2 index, push 31 and 32
// you can add more than 2 if you want 
const numbers3 = [1, 2, 3, 4, 5];
const add3 = numbers3.splice(2, 0, 31, 32);
console.log(numbers3);