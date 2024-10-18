//----------------by using the sorting then returning the n/2 index  -------------------
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Sort the array
        sort(nums.begin(), nums.end());
        // Return the middle element, which is guaranteed to be the majority
        return nums[nums.size() / 2];
    }
};



//------------------------by using the  Boyer-Moore Voting Algorithm---------------------
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1; // Start with 1 since the first element is counted
        int candidate = nums[0]; // Assume the first element is the majority candidate
        
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            if(nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
            
            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
        
        return candidate;
    }
};
