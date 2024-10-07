class Solution {
public:
    //custom operator
    static string str;
    static bool compare(char char1,char char2){
        //thi swill return true if position of character 1 string in str string is   less than the position of the character2 in str string

        //when true is returned then char1 wilbe place before char2 in output string
        return (str.find(char1)<str.find(char2));
    }

    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
string Solution::str;