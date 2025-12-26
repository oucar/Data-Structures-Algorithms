//  Write a recursive function called reverse which accepts a string and returns a new string in reverse.

function reverse(str) {
  let i = 0;
  let j = str.length - 1;
  let temp = -1;

  let tempArr = str.split("");

  while (i < j) {
    temp = tempArr[i];
    tempArr[i] = tempArr[j];
    i++;
    tempArr[j] = temp;
    j--;
  }

  return tempArr.join("");
}

console.log(reverse("awesome"));
console.log(reverse("onur ucar"));
