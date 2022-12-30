class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int mx=0;
        for(auto x:accounts)
        {
            mx = max(mx,accumulate(x.begin(),x.end(),sum));
        }
        return mx;
    }
};