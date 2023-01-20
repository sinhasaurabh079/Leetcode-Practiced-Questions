class Solution {
public:
     Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    void solve(vector<int>&nums,int index,vector<int>&output,set<vector<int>>&ans)
    {
        if(index >= nums.size()){
            if(output.size()>1)
              ans.insert(output);
           return;   
        }

        if(output.size()==0 || nums[index] >= output.back()){
            // If output is empty or current element is 
            // greater than or equal to the last element in output
            output.push_back(nums[index]);
            solve(nums,index+1,output,ans);
            output.pop_back();
        }

        solve(nums,index+1,output,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        // output for array and set is used to remove duplicates vector
        vector<int> output;
        set<vector<int>> ans;

        solve(nums,0,output,ans);

        return vector(ans.begin(),ans.end());
    }
};