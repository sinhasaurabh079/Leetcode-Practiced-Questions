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
