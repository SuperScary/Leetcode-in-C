#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Include the solution header
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

// Helper function to check if two arrays are equal
int arraysEqual(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) return 0;
    }
    return 1;
}

// Helper function to sort a 2-element array
void sortArray(int* arr) {
    if (arr[0] > arr[1]) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}

int main() {
    // Test case 1: Basic case
    {
        int nums[] = {2, 7, 11, 15};
        int target = 9;
        int returnSize;
        int* result = twoSum(nums, 4, target, &returnSize);
        
        // Sort both arrays to handle different order of indices
        int expected[] = {0, 1};
        sortArray(result);
        sortArray(expected);
        
        assert(returnSize == 2);
        assert(arraysEqual(result, expected, 2));
        free(result);
        printf("Test case 1 passed!\n");
    }
    
    // Test case 2: Numbers in middle of array
    {
        int nums[] = {3, 2, 4};
        int target = 6;
        int returnSize;
        int* result = twoSum(nums, 3, target, &returnSize);
        
        int expected[] = {1, 2};
        sortArray(result);
        sortArray(expected);
        
        assert(returnSize == 2);
        assert(arraysEqual(result, expected, 2));
        free(result);
        printf("Test case 2 passed!\n");
    }
    
    // Test case 3: Same numbers
    {
        int nums[] = {3, 3};
        int target = 6;
        int returnSize;
        int* result = twoSum(nums, 2, target, &returnSize);
        
        int expected[] = {0, 1};
        sortArray(result);
        sortArray(expected);
        
        assert(returnSize == 2);
        assert(arraysEqual(result, expected, 2));
        free(result);
        printf("Test case 3 passed!\n");
    }
    
    printf("All test cases passed!\n");
    return 0;
} 