/*
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

// without stl reverse func
class Solution {
public:
    void reverse(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            swap(nums[start++],nums[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverse(nums,0,n-1);   
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};




// with stl
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size(); // jb hme itne bar rotate krna jitne size ho array tb same array hi ayega 
            
        reverse(nums.begin(),nums.end());  // reversing the array
        reverse(nums.begin(),nums.begin()+k);  // 0 to k-1 as nums.begin()+k = 0 + k - 1 = k-1, as begin() comes at end  
        reverse(nums.begin()+k,nums.end());  // k to n-1 reversing
        
    }
};

// TLE bruteforce approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int temp,i;
        k= k%n;
        while(k--)
        {
            temp = nums[n-1];
            for(i=n-1;i>0;i--)
            {
                nums[i]=nums[i-1];
            }
            nums[i]=temp;
        }
        
    }
};
