// ! MAP --> method creates a new array populated with the results of calling a provided function on every element in the calling array.
// ? example 1 
const array1 = [1, 4, 9, 16];
// pass a function to map
const map1 = array1.map(x => x * 2);
// expected output: Array [2, 8, 18, 32]
console.log(map1);

// ? example 2
const numbers = [1, 4, 9];
const roots = numbers.map((num) => Math.sqrt(num));
// roots is now     [1, 2, 3]
// numbers is still [1, 4, 9]


// ? example 3
const kvArray = [{ key: 1, value: 10 },
    { key: 2, value: 20 },
    { key: 3, value: 30 }];
const reformattedArray = kvArray.map(({ key, value}) => ({ [key]: value }));
// reformattedArray is now [{1: 10}, {2: 20}, {3: 30}],
// kvArray is still:
// [{key: 1, value: 10},
//  {key: 2, value: 20},
//  {key: 3, value: 30}]


// ! FIND --> returns the first element that satisfies the provided testing
// ? example 1
const array2 = [5, 12, 8, 130, 44];
const found = array1.find(element => element > 10);
console.log(found);
// expected output: 12

// ? example 2
const inventory = [
    {name: 'apples', quantity: 2},
    {name: 'bananas', quantity: 0},
    {name: 'cherries', quantity: 5}
  ];
const result = inventory.find( ({ name }) => name === 'cherries' );
console.log(result) // { name: 'cherries', quantity: 5 }

// ? example 3 (using find with a function)
function isPrime(element, index, array) {
    let start = 2;
    while (start <= Math.sqrt(element)) {
        if (element % start++ < 1) {
            return false;
        }
    }
    return element > 1;
}
console.log([4, 6, 8, 12].find(isPrime)); // undefined, not found
console.log([4, 5, 8, 12].find(isPrime)); // 5


// ! FINDINDEX -->  method returns the index of the first element in the array that satisfies the provided testing function.
// ? example 1
const array3 = [5, 12, 8, 130, 44];
const isLargeNumber = (element) => element > 13;
console.log(array3.findIndex(isLargeNumber));
// expected output: 3

// ? example 2
function isPrime(num) {
    for (let i = 2; num > i; i++) {
      if (num % i == 0) {
        return false;
      }
    }
    return num > 1;
  }
console.log([4, 6, 8, 9, 12].findIndex(isPrime)); // -1, not found
console.log([4, 6, 7, 9, 12].findIndex(isPrime)); // 2 (array[2] is 7)

// ? example 3
const fruits = ["apple", "banana", "cantaloupe", "blueberries", "grapefruit"];
const index = fruits.findIndex(fruit => fruit === "blueberries");
console.log(index); // 3
console.log(fruits[index]); // blueberries


// ! FILTER --> creates a new array with all elements that pass the test implemented by the provided function.
// ? example 1
const words = ['spray', 'limit', 'elite', 'exuberant', 'destruction', 'present'];
const result2 = words.filter(word => word.length > 6);
console.log(result2);
// expected output: Array ["exuberant", "destruction", "present"]

// ? example 2
const array4 = [-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
function isPrime(num) {
  for (let i = 2; num > i; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return num > 1;
}
console.log(array4.filter(isPrime)); // [2, 3, 5, 7, 11, 13]


// ! REDUCE -->  executes a user-supplied "reducer" callback function on each element of the array, in order, passing in the return value from the calculation on the preceding element. 
// ? example 1
const array5 = [1, 2, 3, 4];
const initialValue = 0;
const sumWithInitial = array1.reduce(
  (previousValue, currentValue) => previousValue + currentValue,
  initialValue
);
console.log(sumWithInitial);
// expected output: 10

// ? example 2, sum of values in an object array
let initialValue2 = 0
let sum = [{x: 1}, {x: 2}, {x: 3}].reduce(function (previousValue, currentValue) {
    return previousValue + currentValue.x
}, initialValue2)
console.log(sum) // logs 6

// ? example 3, sum all the values of an array
// 0 is the initial value here
let total = [ 0, 1, 2, 3 ].reduce(
    ( previousValue, currentValue ) => previousValue + currentValue, 0 )

// ! CONCAT 
// ? example 1
const num1 = [1, 2, 3];
const num2 = [4, 5, 6];
const num3 = [7, 8, 9];
const numbers2 = num1.concat(num2, num3);
// results in [1, 2, 3, 4, 5, 6, 7, 8, 9]
console.log(numbers2);

// ! SLICE
// ? example 1
const animals = ['ant', 'bison', 'camel', 'duck', 'elephant'];
console.log(animals.slice(2));
// expected output: Array ["camel", "duck", "elephant"]
console.log(animals.slice(2, 4));
// expected output: Array ["camel", "duck"]
console.log(animals.slice(1, 5));
// expected output: Array ["bison", "camel", "duck", "elephant"]
console.log(animals.slice(-2));
// expected output: Array ["duck", "elephant"]
console.log(animals.slice(2, -1));
// expected output: Array ["camel", "duck"]
console.log(animals.slice());
// expected output: Array ["ant", "bison", "camel", "duck", "elephant"]

// ! SPLICE --> changes the contents of an array by removing or replacing existing elements and/or adding new elements in place. 
// ? example 1
// ? splice(start, deleteCount, item1)
const months = ['Jan', 'March', 'April', 'June'];
months.splice(1, 0, 'Feb');
// inserts at index 1
console.log(months);
// expected output: Array ["Jan", "Feb", "March", "April", "June"]
months.splice(4, 1, 'May');
// replaces 1 element at index 4
console.log(months);
// expected output: Array ["Jan", "Feb", "March", "April", "May"]

// remove an item from an array
array.splice(index, 1);