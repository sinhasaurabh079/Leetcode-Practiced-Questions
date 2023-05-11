class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      // algorithm
      // - put inside set
      // - let x be element in set if x-1 does'nt exist it is potential start ele
      // - if true then find x+1,x+2,x+3....
      // - update cnt and longestStreak
      if(nums.size()==0)  return 0;
      unordered_set<int> s(nums.begin(),nums.end());
      int longestStreak=0;
      for(int i:s){
          if(s.count(i-1)!=1){ // if nums-1 doesnt exist, it's potential start
           int currentnum = i;
           int currentStreak = 1;
           while(s.count(currentnum+1)==1){
               currentStreak++;
               currentnum += 1;
           }
           longestStreak = max(longestStreak,currentStreak);
        }
      }
    return longestStreak; 
  }
};
/*
brute force tc - O(nlogn)
      int n=nums.size();
      if(n==0 || n==1)
        return n;    
      sort(nums.begin(),nums.end());
      
      int prev=nums[0];
      int cnt=1;
      int maxi = 0;
      for(int i=1;i<n;i++){
          if(nums[i]==prev+1)
            cnt++;
          else if(nums[i]!=prev)
            cnt=1;
          prev=nums[i];
          maxi = max(maxi,cnt);
      }
      return maxi;
*/       