class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]==target){
                return i;
                }
            
            if(nums[i]>target){
                return i;
            }
            i=i+1;

            }
            
        
        return i;
      
    }
};