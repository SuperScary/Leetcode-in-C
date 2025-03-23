# 1. Two Sum

## Problem Description

Given an array of integers `nums` and an integer `target`, return indices of the two numbers in the array such that they add up to the target. You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

### Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

### Constraints:
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.

## Approach

### Method: Hash Table (Using Array as Simple Hash Table)
1. Since we need to find two numbers that sum to the target, we can use a hash table approach
2. For each number, we:
   - Calculate its complement (target - current number)
   - Check if we've seen the complement before
   - If yes, we've found our pair
   - If no, store the current number and its index
3. We use a simple array as a hash table for positive numbers to avoid complex hash table implementation

### Complexity Analysis
- Time Complexity: O(n) - we traverse the array once
- Space Complexity: O(n) - we store at most n elements in our hash table 