//-------------------------------------BRUTE FORCE APPROACH RECURSIVE APPROACH-------------------

/*
class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        
        return(tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3));
    }
};
*/


//-----------------OPTIMAL SOLUTION---------------------------------

class Solution {
public:
    int tribonacci(int n) {
        int t1=0,t2=1,t3=1,nextterm=0;
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        for(int i=3;i<=n;i++){
            nextterm=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=nextterm;
        }
        return t3;
        

    }
};