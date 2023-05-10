class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      // best solution
      // change the value at numerical index of arr[i] to neg
      // while encountering there is two possibility
      // arr[i] th index is positive that means signle frequency
      // if arr[i]th index is negative that means some previous freq made that
      // index neg, so put that index in ans array, i.e ele with freq=2

      vector<int> ans;
      for(int i=0;i<nums.size();i++){
         if(nums[abs(nums[i])-1]<0)
            ans.push_back(abs(nums[i]));
        else
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            
      }
      return ans;
    }
};
/*
    // O(n)
     vector<int> ans;
       unordered_map<int,int> mp;
       for(int& i:nums)
         mp[i]++;
      //  for(auto i:mp){
      //    cout<<i.first<<" "<<i.second<<endl;
      //  }  
       for(auto i:mp){
          if(i.second==2){ 
            ans.push_back(i.first);
          }
       }
       return ans; 
   // ----------------------------
   // O(n*n) => tle
        if(nums.empty())
          return {};
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])
                   continue;
                else{
                   ans.push_back(nums[i]);
                   break;
                }   
           }
        }
      return ans; 
    // --------------------------------
    // O(n*logn)
       if(nums.empty())
          return {};
       vector<int> ans;
       sort(nums.begin(),nums.end());
       int s = nums[0];
       for(int i=1;i<nums.size();i++){
          if(!(s^nums[i])){ 
             ans.push_back(nums[i]);
             i++;
             if(i<nums.size())   s = nums[i];
             else  break;
          }
          else{ 
            s = nums[i];
          }
       }   
       return ans;     
*/       