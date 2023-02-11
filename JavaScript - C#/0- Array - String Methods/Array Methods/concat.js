const a = [1, 2, 3, 4, 5];
const b = [6, 7, 8, 9, 0]
const c = [99];

// a, b, c not changed
const d = a.concat(b, c);
console.log(d);