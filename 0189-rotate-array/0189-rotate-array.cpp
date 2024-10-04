//-------------------------BRUTE FORCE APPROAC-----------------------------------
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
        return ;
        k=k%n;
        if(k>n){
            return;
        }
        vector<int> temp(k);
        
        for(int i=n-k;i<n;i++){
            temp[i-n+k]=nums[i];

        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        
    }
};

*/

//---------------------OPTIMAL APPROACH----------------------------------------------

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0){
            return ;
        }
        k=k%n;
        // Reverse first n-k elements
        //Reverse(arr, 0, n - k - 1);
        reverse(nums.begin(),nums.begin() +(n-k));

        // Reverse last k elements
        //Reverse(arr, n - k, n - 1);
        reverse(nums.begin() +(n-k),nums.end());
        
        // Reverse whole array
        //Reverse(arr, 0, n - 1);
        reverse(nums.begin(),nums.end());
    }
};   
