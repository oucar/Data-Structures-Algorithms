// NOT SLIDING WINDOW, O(N^2)
function maxSubarraySum(arr, num){

    let maxSum = -Infinity;

    if(arr.length < num) return null;

    for(let i = 0; i < arr.length - num; i++){
        // console.log(arr[i]);
        let temp = 0;
        for(let j = 0; j < num; j++){
            temp += arr[i+j];
        }
        if(temp > maxSum){
            maxSum = temp;
        } // end if 
    } // end for

    return maxSum;
}
 
// SLIDING WINDOW, REFACTORED --> O(N)
function maxSubarraySum2(arr, num){

    let maxSum = 0;
    let tempSum = 0;

    if(arr.length < num) return NULL;

    // first sum
    for(let i = 0; i < num; i++) maxSum += arr[i];

    tempSum = maxSum;
    
    for(let i = num; i < arr.length; i++){
        tempSum = tempSum - arr[i - num] + arr[i];
        maxSum = Math.max(maxSum, tempSum);
    }

    return maxSum;


}

console.log(maxSubarraySum([1,2,5,2,8,1,5], 2));             // 10
console.log(maxSubarraySum2([1,2,5,2,8,1,5], 2));             // 10