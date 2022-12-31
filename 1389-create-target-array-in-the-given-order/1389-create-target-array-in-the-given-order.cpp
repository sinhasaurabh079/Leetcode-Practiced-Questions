class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n= nums.size();
        vector<int> ans;
        for(int i = 0 ; i <n ;i++){
            // we need to insert nums element accg to index position given by index array
            // fill the ans array with nums element given by index array
            // if not shift the other elements right and put that element in the index given by index 
            ans.insert(ans.begin()+index[i] ,nums[i]);
        }
        return ans;
    }  
};