// --- Directions
// Given a string, return the character that is most
// commonly used in the string.
// --- Examples
// maxChar("abcccccccd") === "c"
// maxChar("apple 1231111") === "1"

// This is the frequency counter pattern!
// let objCounter = {
//     'a': 2,
//     'b': 3,
//     'c': 1
// };
// key --> a,b,c
// objCounter[key] --> 2, 3, 1
function maxChar(str) {
    let objCounter = {};
    let max = -1;
    let result = '';

    for (val of str){
        objCounter[val] = (objCounter[val] || 0) + 1;
    }

    for (let key in objCounter){
        if(objCounter[key] > max){
            max = objCounter[key];
            result = key;
        }
    }

    return result;
}

module.exports = maxChar;
