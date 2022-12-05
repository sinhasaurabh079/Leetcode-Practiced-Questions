/*
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/


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
