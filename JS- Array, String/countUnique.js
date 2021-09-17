function countUniqueValues(arr){

    let objTracker = {};
    let total = 0;

    for(let val of arr)
        objTracker[val] ? objTracker[val]++ : objTracker[val] = 1;

    // console.log(objTracker);

    for(let key in objTracker)
        total++;

    return total;
}

countUniqueValues([1,1,1,1,1,2]);                       //2
countUniqueValues([1,2,3,4,4,4,7,7,12,12,13]);          //7
countUniqueValues([]);                                  //0
countUniqueValues([-2,-1,-1,0,1]);                      //4