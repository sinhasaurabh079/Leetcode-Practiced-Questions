class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int cumMul=1;
        int mx=INT_MIN;

        // Approach : Apply two times Kadane's algorithm
        // 1st time to find the cumulative multiple from left to right
        // 2nd tie right to left
        // it is done so that we can ignore odd negative numbers
        // max of product of -> l to r and r to l is the answer
        for(int i=0;i<nums.size();i++){
            cumMul *= nums[i];
            mx = max(mx,cumMul);

            if(cumMul==0)
              cumMul=1;
        }
        cumMul=1;
        for(int i=nums.size()-1;i>=0;i--){
            cumMul *= nums[i];
            mx = max(mx,cumMul);

            if(cumMul==0)
               cumMul=1;
        }
        return mx;   
    }
};