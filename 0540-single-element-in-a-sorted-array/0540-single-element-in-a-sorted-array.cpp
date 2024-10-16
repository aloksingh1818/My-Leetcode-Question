class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i=i+2){
           if( (nums[i]^nums[i+1])!=0){
            return nums[i];
            //if (i == nums.size() - 1 || (nums[i] ^ nums[i + 1]) != 0) {
              //  return nums[i]; // Return the single element

           }
        
        }
       return nums[nums.size() - 1];

    }

};