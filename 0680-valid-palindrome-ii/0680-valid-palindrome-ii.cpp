class Solution {
public:
    bool checkPalindrome(string s ,int i ,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }

        }
        return true;
    }
    bool validPalindrome(string s) {
       int i=0;
       int j=s.length()-1;
       while(i<j){
        //when s[i]==s[j]
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            //when s[i]!=s[j]
           // 1 removal allowed
           // check pelindrome validity
            //for remaining string 
           // when ith character removed 
            bool ans1 = checkPalindrome(s,i+1,j);
            //when jth character removed 
            bool ans2 = checkPalindrome(s,i,j-1);
            //if anyone ans 1 and and 2 gives true then return true 
            return ans1 || ans2;
        }
       }

       return true;

    }
};