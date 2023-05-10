class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
            prefix[i]=s.size();
        }
        s.clear();
        for(int i=n-1;i>=0;i--){
            s.insert(nums[i]);
            suffix[i]=s.size();
        }
        // for(int i:prefix)
        //     cout<<i<<" ";
        // cout<<endl;
        // for(int i:suffix)
        //     cout<<i<<" ";
        for(int i=0;i<n;i++){
            if(i==n-1)
               ans[i] = prefix[i];
            else
               ans[i] = prefix[i]-suffix[i+1];
        }
       return ans; 
    }
};