function sameFrequency(num1, num2){

    // turn numbers into array objects
    let arr1 = Array.from(String(num1), Number);
    let arr2 = Array.from(String(num2), Number);

    if(arr1.length !== arr2.length) return false;

    let objTracker1 = {};
    let objTracker2 = {};

    // fill in the objects using arrays created above
    for(let val of arr1)
        objTracker1[val] ? objTracker1[val]++ : objTracker1[val] = 1;

    for(let val of arr2)
        objTracker2[val] ? objTracker2[val]++ : objTracker2[val] = 1;

    // console.log(objTracker1);
    // console.log(objTracker2);

    for(let key in objTracker1){
        if(objTracker1[key] !== objTracker2[key]) return false;
    } // end for
    return true;
}




console.log(sameFrequency(182,281));                                // true
console.log(sameFrequency(34,14));                                  // false
console.log(sameFrequency(3589578,5879385));                        // true
console.log(sameFrequency(22,222));                                 // false