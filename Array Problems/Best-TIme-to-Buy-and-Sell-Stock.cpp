class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int curr_min = nums[0];  // iss din manlo kharida
        int profit=0;            // initially profit toh zero h
      for(int i=1;i<nums.size();i++)
      {
         int diff = nums[i]-curr_min;  // har agle din ka profit nikal liya 
          profit = max(profit,diff);   // max profit dhundliya
          curr_min = min(curr_min,nums[i]);  // to find the current minimum during traversing
      }
        return profit;
        
    }
};
