// 2^3 = 2*2*2
function power(base, exponent) {
  if (exponent === 0) return 1;
  return base * power(base, exponent - 1);
}

console.log(power(2, 3)); // 8
console.log(power(10, 2)); // 100
console.log(power(2, 0)); // 1
console.log(power(2, 2)); // 4
console.log(power(2, 4)); // 16
