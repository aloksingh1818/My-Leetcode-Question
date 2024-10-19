class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> maxSet;
        
        // Iterate over the array and add each number to the set
        for (int num : nums) {
            maxSet.insert(num);
            
            // If the size of the set exceeds 3, remove the smallest element
            if (maxSet.size() > 3) {
                maxSet.erase(maxSet.begin());
            }
        }
        
        // If there are exactly 3 distinct maximums, return the smallest one (3rd max)
        if (maxSet.size() == 3) {
            return *maxSet.begin();
        }
        
        // Otherwise, return the maximum element
        return *maxSet.rbegin();
    }
};