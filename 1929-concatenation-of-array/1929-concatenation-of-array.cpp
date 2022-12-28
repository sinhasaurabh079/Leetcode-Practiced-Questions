class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n,0);
        int j=0;
        for(j=0;j<n;j++)
            ans[j] = nums[j];
        int i=0;
        while(j<2*n)
        {
            ans[j++] = nums[i++];  
        }
         return ans;   
    }
};