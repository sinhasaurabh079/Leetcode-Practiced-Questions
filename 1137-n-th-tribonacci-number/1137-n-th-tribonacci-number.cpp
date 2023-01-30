class Solution {
public:
    int tribonacci(int n) {
        int t0=0,t1=1,t2=1;

        if(n==0)
          return t0;
        if(n==1)
          return t1;    
        if(n==2)
          return t2;
        int i=3;
        int ans=0;  
        while(i<=n) 
        {
            ans=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=ans;
            i++;
        }
        return ans;    
    }
};