//--------------------------------------without sorting -------------------------------------------

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
            
        }
        return ans;

    }
};




//------------------------------using sorting --------------------------------------

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i=i+2){
            int ans = nums[i]^nums[i+1];
            if(ans!=0){
                return nums[i];
            };
        }
        return nums[nums.size()-1];

    }
};
*/