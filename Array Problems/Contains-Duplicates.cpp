/*
Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

//using set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = s.find(nums[i]); 
            if(it == s.end())
                s.insert(nums[i]);
            else 
                return true;
        }
        return false;
    }
        
};

// using unordered set

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto num : nums) {
            if(set.count(num)) {
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};

// using sort functon 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])  // if any two consecutive elements are same then the array contains duplicate elements
                return true;
        }
        return false;
    }
        
};
