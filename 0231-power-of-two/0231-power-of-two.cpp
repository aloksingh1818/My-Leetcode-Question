class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0){
            return false;
        }
        if(floor(log2(n))== ceil(log2(n))){
            return true;
        }
        
        else{
            return false;
        }
          //if(n==1){
           // return true;
         // }
         // if(n<=0 || n%2 !=0){
           // return false;
         // }
         // return isPowerOfTwo(n/2);
    }
};