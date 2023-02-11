// creates a new array by removing stuff (the ones that returns a falsy value) with the help of callback function
// original array will not be modified similar to map
const numbers = [1, 2, 3, 4, 5, 6];

// with only even numbers
// value, index, array
const even = numbers.filter((value) => {
    return value % 2 === 0;
})
console.log(even);

// Exercise with array of objects
const people = [{
        name: 'Florin',
        age: 25
    },
    {
        name: 'Ivan',
        age: 14
    },
    {
        name: 'Onur',
        age: 40
    }
]
// get the adults
const adults = people.filter((person) => {
    return person.age >= 18;
});
console.log(adults);

// Remove the duplicates (nonsense)
const dups = [1, 2, 3, 4, 4, 4, 4, 5, 6, 7, 7, 7, 8, 8, 9, 9, 9, 0, 0, 0, 0];
const noDupsLol = dups.filter((value, index, arr) => {
    return arr.indexOf(value) === index;
})

console.log(noDupsLol);