/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

// two pointer method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      vector<int> index;                // to store required index
        int n=nums.size();
        for(int i=0;i<n-1;i++)          // kuki compare consecutive ho rha h (mtlb har 2 value compare hogi)
        {                               // 2nd last , last wale se compare hoga last step m 
            
           for(int j=i+1;j<n;j++)        
            {
                if(nums[i]+nums[j]==target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
//             if(index.size()==2)       // ignorable part
//                 break;                // agr index=2 hua mtlb two sum mil gya
        }
        return index;
        
    }
};
