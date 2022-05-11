function areThereDuplicates(...args){

    // spread the arguments into an array
    let arr = [...args];

    let objCounter = {};

    for(let val of arr)
        objCounter[val] ? objCounter[val]++ : objCounter[val] = 1;
    
    for(let key in objCounter)
        if(objCounter[key] > 1) return true;

    return false;

}

console.log(areThereDuplicates(1,2,3));                          // false       
console.log(areThereDuplicates(1,2,3,4,5,6,7,2));                // true
console.log(areThereDuplicates('a', 'b', 'c', 'd', 'a'));        // true
