class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();  // Start with n, the number of elements in the array
        
        for (int i = 0; i < nums.size(); ++i) {
            // XOR the index and the number at that index
            missing ^= i ^ nums[i];
        }
        
        return missing;
    }
};
