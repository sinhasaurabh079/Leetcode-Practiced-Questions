class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> check(n+1,0);
      
        //  check array len is n+1 becoz first positive number
        //   lies between 1 to len+1 (both inclusive)
        //   First positive worst case m len+1 wala number hoga
        
        // if number is (>0) and (<= n) then it is positive and possible first positve
        for(int i=0;i<n;i++)
            if(nums[i] > 0 && nums[i] <= n)
                check[nums[i]]++;

        // Jis index pr pehla zero milega wahi first positive h uske baad wala second positive h and so on 
        for(int i=1;i<=n;i++)
           if(check[i]==0)
              return i;
        // in worst case the missing number is n+1 
        return n+1;      
    }
};