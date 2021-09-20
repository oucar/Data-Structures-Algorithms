function averagePair(arr, average){
    
    let i = 0;
    let j = arr.length -1;
    let temp = 0;

    while (i < j){

        temp = (arr[i] + arr[j])/2;

        if (temp === average) return true;
        else if (temp < average) i++;
        else j--;

    } // end while 

    return false;

}

console.log(averagePair([1,2,3], 2.5));                             // true
console.log(averagePair([1,3,3,5,6,10,12,19], 8));                  // true
console.log(averagePair([-1,0,3,4,5,6], 4.1));                      // false
console.log(averagePair([], 4));                                    // false