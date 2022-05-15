function compressor(str){

    let objCounter = {};
    let compressedString = '';
    
    for(let val of str)
        objCounter[val] = (objCounter[val] || 0) + 1;

    for(let val in objCounter){
        compressedString += val;
        compressedString += objCounter[val];
    }

    if(compressedString.length < str.length) return compressedString;
    
    return str;

}



console.log(compressor("aaaaabbbbcccdddeee"));
console.log(compressor("onur"));
console.log(compressor("oonurrrrrrrr"));

