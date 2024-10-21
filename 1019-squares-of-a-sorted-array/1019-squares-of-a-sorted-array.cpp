class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vect;
        for(int i=0;i<nums.size();i++){
            int square=nums[i]*nums[i];
            vect.push_back(square);

        }
        sort(vect.begin(),vect.end());
        return vect;

    }
};