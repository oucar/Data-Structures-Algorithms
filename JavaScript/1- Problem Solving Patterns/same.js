// FREQUENCY COUNTER PATTERN

// not the frequency pattern
function same(arr1, arr2){
    if(arr1.length !== arr2.length) return false;
    for(let i = 0; i < arr1.length; i++){
        let correctIndex = arr2.indexOf(arr1[i] ** 2);
        if (correctIndex === -1) return false;

        // remove it from the array using splice
        arr2.splice(correctIndex, 1);
    }

    return true;

}

console.log(same([1,2,3,4], [1, 4, 9, 16])); // true
console.log(same([1], [1])); // true
console.log(same([2,3,4], [2,3,4])); // false
console.log(same([1], [1, 2])); // false

// QUICK RECAP ABOUT THE OBJECTS
function object(){
    let obj = {1: 1, 2: 2, 10: 1, 45: 10};
    // returns 10
    console.log(obj[45]);
}

object();

// frequency pattern, refactored
function same2(arr1, arr2){
    if(arr1.length !== arr2.length) return false;
    
    let frequencyCounter1 = {};
    let frequencyCounter2 = {};

    // initialize it to zero, or increment it by one 
    for(let val of arr1){
        frequencyCounter1[val] = (frequencyCounter1[val] || 0) + 1;
    }

    for(let val of arr2){
        frequencyCounter2[val] = (frequencyCounter2[val] || 0) + 1;
    }

    for(let key in frequencyCounter1){
        if(!(key ** 2 in frequencyCounter2)) return false;
        if(frequencyCounter2[key ** 2] !== frequencyCounter1[key]) return false;
    }

    return true;

}

console.log(same2([1,2,3,4], [1, 4, 9, 16])); // true
console.log(same2([1], [1])); // true
console.log(same2([2,3,4], [2,3,4])); // false
console.log(same2([1], [1, 2])); // false

