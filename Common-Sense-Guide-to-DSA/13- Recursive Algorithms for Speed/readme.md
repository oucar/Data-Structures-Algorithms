### Recursive Algorithms for Speed
- Bubble sort, selection sort and insertion sort are not heavily used in real life as they're not efficient enough.
- Quicksort is the sorting algorithm that many programming languages use to sort an array. Quicksort uses partioning.
---
- **Partioning**: To partition an array is to take a random value from the array - which is then called the pivot - and make sure that every number that is less than the pivot ends up to the left of the pivot, and that every number greater than the pivot ends up to the right of the pivot.


- **Quick Sort**: is a combination of partitioning. and recursion. 
- The worst case scneario for Quicksort is one in which the pivot always ends up on one side of the subarray instead of in the middle. This can happen where the array is in perfect ascending or descending order.

```
quickSort(arr, beg, end)
  if (beg < end)
    pivotIndex = partition(arr,beg, end)
    quickSort(arr, beg, pivotIndex)
    quickSort(arr, pivotIndex + 1, end)

partition(arr, beg, end)
  set end as pivotIndex
  pIndex = beg - 1
  for i = beg to end-1
  if arr[i] < pivot
    swap arr[i] and arr[pIndex]
    pIndex++
  swap pivot and arr[pIndex+1]
return pIndex + 1
```

- Left pointer should be less than the pivot, if not stop.
- Right pointer should be greater than the pivot, if not stop.
- If both pointer stops, swaps the values that are on the pointers.
- When pointers meet, stop moving pointers.
