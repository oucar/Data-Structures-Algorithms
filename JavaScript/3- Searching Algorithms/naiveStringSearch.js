// TODO: DO WITH SLIDING WINDOW PATTERN OR SOMETHING! BE CREATIVE

function naiveStringSearch(longStr, shortStr) {
  let count = 0;
  let index = 0;

  for (let i = 0; i <= longStr.length; i++) {
    if (longStr[i] === shortStr[index]) {
      index++;

      if (index === shortStr.length) {
        count++;
        index = 0;
      }
    } else if (longStr[i] === shortStr[0]) {
      index = 1;
    } else {
      index = 0;
    }
  }
  
  return count;

}

// MUST return 2
console.log(naiveStringSearch("wowomgzomg", "omg"));
