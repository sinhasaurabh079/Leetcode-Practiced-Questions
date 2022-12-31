class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        int mx=0;
        for(auto i:candies)
          mx = max(mx,i);

        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= mx)
              ans[i] = true;
        }  
        return ans;
     }
};