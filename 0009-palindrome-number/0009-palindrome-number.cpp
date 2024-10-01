class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int original=x;
        int revNumber=0;
        while(x>0){
            int digit=x%10;
            if(revNumber > (INT_MAX - digit)/10){
            return false;
            }
            revNumber=revNumber*10+digit;
            x=x/10;
            
        }

        if(revNumber==original){
            return true;
        }
       
        else{
            return false;
        }
    }
};