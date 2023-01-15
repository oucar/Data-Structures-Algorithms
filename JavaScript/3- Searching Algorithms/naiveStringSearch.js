
function naiveStringSearch(longStr, shortStr) {
  let count = 0;
  let index = 0;

  for (let i = 0; i <= longStr.length; i++) {
    if(longStr[i] === shortStr[index]){
      index++;
      if(index === shortStr.length){
        index = 0;
        count++;
      }
    }
  }
  
  return count;

}

// MUST return 2
console.log(naiveStringSearch("wowomgzomg", "omg"));
// must return 4
console.log(naiveStringSearch("onuronuronuronuronmay", "onur"));
// must return 1
console.log(naiveStringSearch("anagranagram", "anagram"));
// must return 1
console.log(naiveStringSearch("ananakin", "anakin"));

