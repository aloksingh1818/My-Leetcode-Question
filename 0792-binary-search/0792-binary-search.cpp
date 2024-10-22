class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int h=arr.size()-1;
        int mid=(l+h)/2;

        while(l<=h){
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                l=mid+1;
            }
            if(arr[mid]>target){
                h=mid-1;
            }
            mid=(l+h)/2;

        }
       return -1; 
    }
};



//--------------------using linear search ------------------------

/*



class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
*/