class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // By Moore Voting Algorithm
      // -> focuses on choosing candidate for mamjority 
      // agr same aadmi ko bar bar vote mil rha h toh uski majority h wrna nhi
      // jb same element encounter hoga toh count ko badhayengey otherwise ghatayengey
      // jb count = 0 ho jayega tb next candidate choose krengey for majority
      // at last jo majority m hoga wo majority variable m hoga
        int count =0;
        int majority;
        for(int x:nums){
          if(count==0)
             majority = x;
          if(x==majority)
             count++;
          else
             count--;      
        }
        return majority;
    }
};

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int countMajority = nums.size()/2;
        for(int x:nums)
           mp[x]++;
        for(auto x:mp){
           if(x.second > countMajority)
             return x.first;
        }   
        return -1;
    }
};

// sorter version of above
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
          if(++mp[x] > nums.size()/2)
            return x;
        }
        return -1;
        // tc = O(n)
        // sc = O(n)
    }
};

*/