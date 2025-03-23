#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 
 * @param nums Array of integers
 * @param numsSize Size of the nums array
 * @param target Target sum to find
 * @param returnSize Pointer to store the size of returned array
 * @return int* Array containing two indices that sum to target
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for result
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    // Create a hash table to store number->index mapping
    // We'll use a simple array for demonstration
    // In real scenarios, you might want to use a more sophisticated hash table
    int hash_size = 20001; // Size for numbers in range [-10000, 10000]
    int* hash = (int*)malloc(hash_size * sizeof(int));
    memset(hash, -1, hash_size * sizeof(int)); // Initialize with -1
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        // Check if complement exists in hash table
        // Note: This is a simplified hash function for demonstration
        // In practice, you'd want to handle negative numbers better
        int hash_index = (complement + 10000) % hash_size;
        if (hash[hash_index] != -1) {
            // Found a pair
            result[0] = hash[hash_index];
            result[1] = i;
            free(hash);
            return result;
        }
        
        // Store current number and its index
        hash_index = (nums[i] + 10000) % hash_size;
        hash[hash_index] = i;
    }
    
    // Clean up
    free(hash);
    
    // This should never happen given problem constraints
    result[0] = -1;
    result[1] = -1;
    return result;
} 