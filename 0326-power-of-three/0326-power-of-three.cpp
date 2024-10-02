#include<bits/stdc++.h>
class Solution {
public:
    bool isPowerOfThree(int n) {
        //best approach
        if(n==1){
            return true;

        }
        if(n<=0 || n%3!=0){
            return false;
        }
        double logvalue=log10(n)/log10(3);

        if(floor (logvalue) == ceil (logvalue)){
            return true;
        }
        //good approach
       // if(n==1){
        //    return true;
        //}
        //if (n<=0 || n%3!=0){
        //    return false;
       // }
        //return isPowerOfThree(n/3);
        
return false;
    }   
};