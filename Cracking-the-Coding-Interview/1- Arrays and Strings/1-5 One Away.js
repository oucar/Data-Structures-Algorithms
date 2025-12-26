// Insert a character -> check if varies by one length && others are the same
// Remove a character -> check if varies by one length && others are the same
// Replace a character -> check if varies by one character

function oneAway(str1, str2) {
  let objCounter1 = {};
  let objCounter2 = {};
  let differsByInLength = 0;
  let differsByInCharacters = 0;

  for (let val of str1) objCounter1[val] = (objCounter1[val] || 0) + 1;

  for (let val of str2) objCounter2[val] = (objCounter2[val] || 0) + 1;

  for (let key in objCounter1) {
    if (objCounter1[key] !== objCounter2[key]) differsByInCharacters++;
  }

  differsByInLength += Math.abs(
    Object.keys(objCounter1).length - Object.keys(objCounter2).length,
  );

  // ! character inserted or removed
  if (differsByInLength === 1)
    return isInsertedOrRemoved(objCounter1, objCounter2);
  // ! character replaced
  else if (
    differsByInCharacters === 1 &&
    Object.keys(objCounter1).length === Object.keys(objCounter2).length
  )
    return true;

  return false;
}

function isInsertedOrRemoved(obj1, obj2) {
  // check if inserted
  if (Object.keys(obj1).length === Object.keys(obj2).length - 1) return true;

  // check if removed
  if (Object.keys(obj1).length === Object.keys(obj2).length + 1) return true;
}

// inserted, removed
console.log(oneAway("pale", "ple")); // t
console.log(oneAway("pales", "pale")); // t
console.log(oneAway("pale", "pales")); // t

// replaced
console.log(oneAway("pale", "bale")); // t
console.log(oneAway("pale", "bake")); // false

// nothing
console.log(oneAway("pale", "pale")); // false
