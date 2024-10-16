class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i=i+2){
            if (i == nums.size() - 1 || (nums[i] ^ nums[i + 1]) != 0) {
                return nums[i]; // Return the single element

           }
        
        }
       return -1;
    }

};