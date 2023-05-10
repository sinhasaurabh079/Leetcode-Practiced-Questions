class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        for(int i:nums)
          cout<<i<<" ";
        if(n==1) return nums[0];
        if(nums[0]!=nums[1])  return nums[0];
        if(nums[n-2]!=nums[n-1]) return nums[n-1];
        for(int i=1;i<nums.size();i+=3){
            if(nums[i]==nums[i-1])
               continue;
            else
               return nums[i-1];   
        }
        return -1;
    }
};