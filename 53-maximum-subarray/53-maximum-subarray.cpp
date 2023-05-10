class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = 0;
        // int largest_sum = INT_MIN;
        // for(auto x : nums)
        // {
        //     sum += x;
        //     largest_sum = max(largest_sum,sum);

        //     if(sum < 0)
        //       sum = 0;
        // }
        // return largest_sum;
        int largestsum=nums[0];
        int sum=0;
        for(int x:nums){
            sum += x;
            largestsum = max(largestsum,sum);
            if(sum<0) sum=0;
        }
        return largestsum;
    }
};