function isUnique(str){

    let objCounter = {};

    // turn string into an array
    arr = [...str];

    // make everything lowercase
    arr = arr.map( value => value.toLowerCase());

    for(let val of arr)
        objCounter[val] = (objCounter[val] || 0) +1;
    

    for(let key in objCounter){
        if(objCounter[key] > 1) return false;
    }

    return true;

}


console.log(isUnique("abcdefgh"));              // true
console.log(isUnique("abcdefghA"));             // false
console.log(isUnique("onur"));                  // true
console.log(isUnique("1234"));                  // true
console.log(isUnique("1234 "));                 // true
console.log(isUnique(" "));                     // true
console.log(isUnique("ASDGLKASDg"));            // false