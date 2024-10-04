//-------------COUNTING APPROACH---------------------------------
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zerocount++;
            }
            else if(nums[i]==1){
                onecount++;
            }
            else{
                twocount++;
            }
            int index=0;
            for(int i=0;i<zerocount;i++){
                nums[index++]=0;
            }
            for(int i=0;i<onecount;i++){
                nums[index++]=1;
            }
            for(int i=0;i<twocount;i++){
                nums[index++]=2;
            }
        }

        //sort(nums.begin(),nums.end());

    }
};
*/

//-----------------------SORTING APPROACH------------------------------
//sort(nums.begin(),nums.end());


//-----------------------3POINTER OR INPLACE APPROACH----------------------------------------

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0;
        int medium=0;
        int high=nums.size()-1;
        while(medium<=high){
            if(nums[medium]==0){
                swap(nums[low],nums[medium]);
                low++,medium++;
            }
            else if(nums[medium]==1){
                medium++;
            }
            else{
                swap(nums[medium],nums[high]);
                high--;
            }
        }
  
    } 
};  