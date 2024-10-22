class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Convert to set to remove duplicates and sort
        unique_nums = sorted(set(nums))
        
        # Update the original array with the sorted unique elements
        nums[:len(unique_nums)] = unique_nums
        
        # Return the length of the array after removing duplicates
        return len(unique_nums)
