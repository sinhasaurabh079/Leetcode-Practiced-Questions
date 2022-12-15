class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);

        if(n == 0)
          return ans;
        
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)   // for even no
              ans[i] = ans[i/2];
            else
              ans[i] = ans[i-1] + 1;  
        }
        return ans;
    }
};
