function smallestSum(arr, targetSum){
    let currentWindowSum = 0;
    let windowStart = 0;
    let minWindowSize = Infinity;

    for(let i = 0; i < arr.length; i++){
        currentWindowSum += arr[i];

        while(currentWindowSum >= targetSum){
            minWindowSize = Math.min(minWindowSize, i - windowStart + 1);
            currentWindowSum -= arr[windowStart];
            windowStart++;
        }
    }

    return minWindowSize;

}


console.log(smallestSum([1,2,5,2,8,1,5,6], 6));
console.log(smallestSum([4,2,2,7,8,1,2,8,10], 8));
console.log(smallestSum([1,2,3,4,5,6,7,8], 10));