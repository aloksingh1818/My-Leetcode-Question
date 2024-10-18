class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        
        while left <= right:
            mid = left + (right - left) // 2
            
            if nums[mid] == target:
                return mid  # Target found, return its index
            elif nums[mid] < target:
                left = mid + 1  # Move to the right half
            else:
                right = mid - 1  # Move to the left half
        
        return -1  # Target not found