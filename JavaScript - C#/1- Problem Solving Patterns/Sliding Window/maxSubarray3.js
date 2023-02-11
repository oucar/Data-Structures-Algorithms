// Find the max sum subarray of a fixed sized K
// [4, 2, 1, 7, 8, 1, 2, 8, 1, 0]


// O(N)
function maxSubarraySum(arr, num){
    let maxSum = -Infinity;
    let tempSum = 0;

    if(arr.length < num) return null;

    for(let i = 0; i < arr.length; i++){
        // add the first numbers
        tempSum += arr[i];

        // if num is 3, you have 3 elements in the list.
        if(i >= num - 1){
            maxSum = Math.max(tempSum, maxSum);
            // slide the window! (substract 4, add 7, etc.)
            // substract the furthest left value.
            // 2 - (3-1) for the first window
            tempSum -= arr[i - (num-1)];
        }
    }

    return maxSum;

}



console.log(maxSubarraySum([1,2,5,2,8,1,5], 2));             // 10
console.log(maxSubarraySum([100,200,300,400], 2));           // 700
console.log(maxSubarraySum([2,3], 3));                       // null 
console.log(maxSubarraySum([3,-2,7,-4,1,-1,4,-2,1], 2));     // 5 
console.log(maxSubarraySum([2,3,1], 3));                     // 6  