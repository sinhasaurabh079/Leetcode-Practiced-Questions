class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
            // if(index.size()==2)
            //     break;  // agr index=2 hua mtlb two sum mil gya
        }
        return index;
        
    }
};