// FREQUENCY PATTERN

function anagram(str1, str2){
    if(str1.length !== str2.length) return false;

    str1 = str1.toLowerCase();
    str2 = str2.toLowerCase();

    let objTracker1 = {};
    let objTracker2 = {};

    for(let val of str1)
        objTracker1[val] ? objTracker1[val]++ : objTracker1[val] = 1;

    for(let val of str2)
        objTracker2[val] ? objTracker2[val]++ : objTracker2[val] = 1;

    // TESTING
    // console.log(objTracker1);
    // console.log(objTracker2);

    for(let key in objTracker1)
        if(objTracker1[key] !== objTracker2[key]) return false;

    return true;
}

console.log(anagram('', ''))                            // true
console.log(anagram('aaz', 'zza'));                     // false
console.log(anagram('anagram', 'nagaram'));             // true
console.log(anagram('awesome', 'awesom'));              // false
console.log(anagram('ABC', 'cba'));                     // true!