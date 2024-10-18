//----------------by using the sorting then returning the n/2 index  -------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Sort the array
        sort(nums.begin(), nums.end());
        // Return the middle element, which is guaranteed to be the majority
        return nums[nums.size() / 2];
    }
};

/*

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int i=0;
        
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count=count+1;
            }
        }
        if(count>=n/2){
             return nums[i];
            }

        return 0;
    }
};

*/