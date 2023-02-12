class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        int start=0,end=nums.size()-1;
        string ans="";
        long long res=0;
        while(start<=end){
           string fi = to_string(nums[start]);
           string se = to_string(nums[end]);
           if(start == nums.size()/2)
            ans = fi;
           else 
            ans = fi+se; 
           res = res + stoi(ans); 
            
          start++;
          end--;
        }
        return res;
    }
};