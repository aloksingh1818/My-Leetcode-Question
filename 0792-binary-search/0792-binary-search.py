class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left=0
        right = len(nums) - 1
        
        while left <= right:
            mid = (left + right)// 2
            if nums[mid] == target:
                return mid  # Target found, return its index
            elif nums[mid] < target:
                left = mid + 1  # Move to the right half
            elif nums[mid]>target:
                right = mid - 1 # Move to the left half

        #  mid=(left+right)//2
        
        return -1  # Target not found