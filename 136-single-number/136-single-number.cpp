class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> a;
       for(auto x:nums)
         a[x]++; 
       for(auto x:a)
       {
           if(x.second == 1)
             return x.first;  
       }    
       return -1;
    }
};

