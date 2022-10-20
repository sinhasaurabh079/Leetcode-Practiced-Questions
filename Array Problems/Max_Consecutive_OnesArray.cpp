class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)    // when 1 is present increment count
                count++;
            else
                count=0;     // if not then set count to 0 for the next window
          
            if(count>max)    // max will store the previous consecutive max_value 
                max=count;   // and if the current count greater than max assigned it the current                              //  value
        }
        return max;
    }
};
