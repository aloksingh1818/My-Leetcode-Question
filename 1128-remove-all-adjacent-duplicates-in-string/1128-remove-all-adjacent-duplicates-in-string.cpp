class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        int index =0;
        while(index<s.length()){
            //same
            //if ans ka rightmost character aur string ka current character toh ans se  pop back  
            if(ans.length()>0  && ans[ans.length()-1]==s[index]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[index]);
            }
            index++;

        }
      return ans;  
    } 
};