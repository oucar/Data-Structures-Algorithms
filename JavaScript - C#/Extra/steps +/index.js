// --- Directions
// Write a function that accepts a positive number N.
// The function should console log a step shape
// with N levels using the # character.  Make sure the
// step has spaces on the right hand side!
// --- Examples
//   steps(2)
//       '# '
//       '##'
//   steps(3)
//       '#  '
//       '## '
//       '###'
//   steps(4)
//       '#   '
//       '##  '
//       '### '
//       '####'

// My solution
function steps(n) {

    let spaceAmount = 0;
    let textToPrint = '';

    for(let i = 1; i <= n; i ++){
        spaceAmount = n - i;
        textToPrint = "#".repeat(i) + ' '.repeat(spaceAmount);
        console.log(textToPrint);
    }

}

module.exports = steps;
