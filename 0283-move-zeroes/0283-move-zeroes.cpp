class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero_count = 0;
        vector<int> non_zero_array(nums.size());
        vector<int> zero_array(nums.size());
        
        // Traverse the array and store non-zero and zero elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                non_zero_array[non_zero_count++] = nums[i];
            }
        }
        
        // Combine non-zero and zero elements back into the original array
        for (int i = 0; i < non_zero_count; i++) {
            nums[i] = non_zero_array[i];
        }
        
        // Fill the remaining positions with zeroes
        for (int i = non_zero_count; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
