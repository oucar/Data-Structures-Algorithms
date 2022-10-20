// The every() method tests whether all elements in the array pass the test implemented by the provided function. It returns a Boolean value.
// the some() method tests whether at least one element in the array passes the test implemented by the provided function. It returns true if,
// in the array, it finds an element for which the provided function returns true; otherwise it returns false. It doesn't modify the array.
const names = ["Onur", "Sophia", "Linus", "Torvalds"];

const resSome = names.some((item) => {
    return item.length > 6;
})

console.log(resSome);


const everySome = names.every((item) => {
    return item.length > 5;
})

console.log(everySome);

