function sameFrequency(num1, num2){

    // turn digits into strings
    let str1 = num1.toString();
    let str2 = num2.toString();

    // not the same length
    if (str1.length !== str2.length) return false; 

    // frequency counters
    let objCounter1 = {};
    let objCounter2 = {};

    // initialize it to 0 or increase it by 1
    for(let val of str1) objCounter1[val] = (objCounter1[val] || 0) + 1;
    for(let val of str2) objCounter2[val] = (objCounter2[val] || 0) + 1;

    for(let key in objCounter1){
        // key is in object2, and frequencies are the same
        if(key in objCounter2 && objCounter1[key] === objCounter2[key]) return true;
        // key does not exist in object 2
        else if(!(key in objCounter2)) return false;
    }

    // for the edge cases we can't think of right now
    return false;
}




console.log(sameFrequency(182,281));                                // true
console.log(sameFrequency(34,14));                                  // false
console.log(sameFrequency(3589578,5879385));                        // true
console.log(sameFrequency(22,222));                                 // false