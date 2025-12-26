// executes a function and returns a new array

const numbers = [1, 2, 3, 4, 5];

// val, index, arr
// return the double
const doubleArray = numbers.map((val) => val * 2);
console.log(doubleArray);

// return value times index
const valueTimesIndexArray = numbers.map((val, index) => {
  return val * index;
});
console.log(valueTimesIndexArray);

// example with array of objects
// calculate the total worth of all items
const inv = [
  {
    name: "laptop",
    price: 100,
    count: 5,
  },
  {
    name: "steam deck",
    price: 500,
    count: 1,
  },
  {
    name: "iphone",
    price: 1000,
    count: 500,
  },
  {
    name: "nintendo switch",
    price: 300,
    count: 20000,
  },
];

const totalProductsValue = inv.map((item) => {
  // item is an object
  return { name: item.name, totalValue: item.price * item.count };
});
console.log(totalProductsValue);
