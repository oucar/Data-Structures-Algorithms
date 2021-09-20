function isSubsequence(str1, str2){

    let counter = 0;

    for(let val of str2)
        if(str1[counter] === val) counter++;
    

    if(counter === str1.length) return true;

    return false;

}

console.log(isSubsequence('hello', 'hellow world'));                    // true
console.log(isSubsequence('sing', 'sting'));                            // true
console.log(isSubsequence('abc', 'abracadabra'));                       // true
console.log(isSubsequence('abc', 'acb'));                               // false