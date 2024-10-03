class Solution {
public:
    int fib(int n) {
        int t1=0,t2=1,nextterm=0;
        
            if(n==0){
                return 0;
            }
            if(n==1){
                return 1;
            }
            for(int i=2;i<=n;i++){

                nextterm=t1+t2;
                t1=t2;
                t2=nextterm;
            
            }
           return t2;
         } 
 
};