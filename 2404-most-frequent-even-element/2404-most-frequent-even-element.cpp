class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        int ans=-1;
        int max_cnt=-1;
        for(auto x:nums) mp[x]++;
        for(auto x:mp){
          if(x.first%2 ==0 && x.second > max_cnt){
             max_cnt = x.second;
             ans = x.first;
          }
        }
      return ans;
    }
};

/*
// brute force
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        int odd=0;
        for(int x:nums){
            if((x&1) == 0){
                mp[x]++;
            }
            else
               odd++;
        }
        if(odd != nums.size()){    
        int count = -1;
        int ans;
        for(auto x:mp){
            if(x.second > count){
              count = x.second;
              ans = x.first;
            }       
        }    
        return ans;
      }
      return -1;
    }
};
*/