//-----------------------BEST APPROACH OPTIMAL SOLUTION --------------------------

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqTable[256] = {0};  // Initialize frequency table for all ASCII characters
        
        // Count frequencies of characters in the first string
        for (int i = 0; i < s.size(); i++) {
            freqTable[s[i]]++;
        }
        
        // Decrease frequencies for characters in the second string
        for (int i = 0; i < t.size(); i++) {
            freqTable[t[i]]--;
        }
        
        // Check if all frequencies are zero
        for (int i = 0; i < 256; i++) {
            if (freqTable[i] != 0) {
                return false;  // If any character count is not zero, not an anagram
            }
        }
        
        return true;  // If all character counts are zero, it's an anagram
    }
};




//------------------BRUTE FORCE USING THE SORTING ------------------------
/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        else{
            return false;
        }
    } 
};
*/