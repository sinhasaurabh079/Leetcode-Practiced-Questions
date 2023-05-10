class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
       int maxi=-1;
       int ans=0;
       for(int d:divisors){
         int cnt = 0;
         for(int j:nums){
            cnt += (j%d==0);
            if(maxi < cnt){
              maxi = cnt;
              ans = d;
            }
            else if(maxi == cnt)
              ans = min(ans,d);
         }
       }
      return ans; 
    }
};

/*
 // we can sort the divisors to get min 
      // sort(divisors.begin(),divisors.end());
      // without sorting in case of two values have same no of divisibilit count
      // we need to return min so
        int max_cnt=-1;
        int ans=0;
        for(int i=0;i<divisors.size();i++){
          int cnt=0;
          for(int j=0;j<nums.size();j++){
              if(nums[j]%divisors[i]==0)
                cnt++;
              if(max_cnt < cnt){ 
                max_cnt = cnt;
                ans = divisors[i];
              }
              else if(max_cnt == cnt){
                ans = min(ans,divisors[i]);
              }
          }
        }
      return ans;
*/      