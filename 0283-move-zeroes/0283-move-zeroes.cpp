//---------------------BETTER SOLUTION USING ONE TEMP ARRAY -----------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;  // Temporary array to store non-zero elements
        int n = nums.size();  // Size of the input array
        
        // Copy non-zero elements from the original array to the temp array
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Number of non-zero elements
        int nz = temp.size();

        // Copy elements from the temp array back to the original array
        for (int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }

        // Fill the rest of the elements in the original array with zeroes
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }
};




//-------------------BRUTE FORCE USING TWO VECTOR ------------------------
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero_count = 0;
        vector<int> non_zero_array(nums.size());
        vector<int> zero_array(nums.size());
        int n=nums.size();
        // Traverse the array and store non-zero and zero elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                non_zero_array[non_zero_count++] = nums[i];//current non zero elemet from nums array is stored in non-zero-array at the position non zero count and non zero count count is increased by 1
            //OR non_zero_array[non_zero_count] = nums[i];  Store the non-zero element
                    //non_zero_count++;                     Then, increment non_zero_count

            
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

*/

