function urlify(str, trueSize) {
  // trim the whitespace at the end
  str = str.trim();

  // turn string into array
  let arr = [...str];

  // replace " "'s with %20.
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === " ") {
      arr[i] = "%20";
    }
  }

  // turn the array into string again
  let result = arr.join("");
  return result;
}

// trueSize is not important for javascript solutions
console.log(urlify("Mr John Smith       ", 13));
console.log(urlify("Onur Ucar Com", 20));
