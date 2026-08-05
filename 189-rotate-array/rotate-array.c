#include <stdio.h>

void rotate(int* nums, int numsSize, int k){
    if (numsSize == 0)
        return;

    k = k % numsSize;

    int new_arr[numsSize];

    // Copy last k elements
    for (int i = 0; i < k; i++){
        new_arr[i] = nums[numsSize - k + i];
    }

    // Copy remaining elements
    for (int i = 0; i < numsSize - k; i++){
        new_arr[k + i] = nums[i];
    }

    // Copy back to original array
    for (int i = 0; i < numsSize; i++){
        nums[i] = new_arr[i];
    }
}
