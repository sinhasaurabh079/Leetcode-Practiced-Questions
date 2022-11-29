/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // using 2 pointer method
        // i,j dono initially 0 se start honge
        // jaha par nums[j]!=nums[i] waha par
        // i jis value ko point kr rha h usey (j+1) position 
        // par dalenge kuki first position par pehla element h
        // array ko cover krke first positions par unique eleent dalenge
        // j+1 ko return krenge kuki jth position tak unique elements h and (j+1) size of that unique portion h
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                nums[++j]=nums[i];
            }
        }
        return j+1;
        
    }
};
