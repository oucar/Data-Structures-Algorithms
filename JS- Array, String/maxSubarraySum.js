// SLIDING WINDOW, O(N^2)
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
console.log(maxSubarraySum([1,2,5,2,8,1,5], 2));             // 10