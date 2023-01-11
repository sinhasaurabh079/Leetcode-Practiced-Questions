class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,lsum=0;
        for(int x:nums)
            sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            if(lsum==sum-lsum-nums[i])
                return i;
            lsum+=nums[i];
        }
        return -1;
    }
};