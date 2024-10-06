class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            //if inside loops it means that part exist in a string 
            s.erase(s.find(part),part.length());
        } 
      return s;         
    }
};