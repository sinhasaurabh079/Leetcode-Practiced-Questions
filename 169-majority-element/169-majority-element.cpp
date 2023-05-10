class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // By Moore Voting Algorithm
      // -> focuses on choosing candidate for majority 
      // agr same aadmi ko bar bar vote mil rha h toh uski majority h wrna nhi
      // jb same element encounter hoga toh count ko badhayengey otherwise ghatayengey
      // jb count = 0 ho jayega tb next candidate choose krengey for majority
      // at last jo majority m hoga wo majority variable m hoga
      // jitni bar leader dikhega use vote milega agr koi dusra
        int vote=0;
        int leader;
        for(int i=0;i<nums.size();i++){
           if(vote==0){                 // new leader choosen having one vote
              leader = nums[i];
              vote=1; 
           }
           else if(leader == nums[i])    // vote usi leader ko mil rhe h
              vote++;
           else                        // voter changed their leader and give vote them
              vote--;   
        }
        return leader;
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