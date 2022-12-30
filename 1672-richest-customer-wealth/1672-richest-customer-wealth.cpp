class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int mx=0;
        for(int i=0;i<m;i++)
        {   
            int sum=0;
            int n = accounts[i].size();
            for(int j=0;j<n;j++)
            {
               sum += accounts[i][j]; 
            }
            mx = max(mx,sum);
        }
        return mx;
    }
};