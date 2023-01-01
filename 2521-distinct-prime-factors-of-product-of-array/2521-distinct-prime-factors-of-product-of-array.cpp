class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> st;
        /*
        Approach : Add the factor of the nums element in the set as [2,4,3,7,10,6]  , then set will contain [2,3,5,7] ans the set will contain prime factor 
        and the size of set is the ans.
        */
        
        for(int x:nums)
          {
              int divisor = 2;
              long long ans = 0;
              while(x > 1)
              {
                  if(x%divisor == 0)  // is n is prime
                  {
                      st.insert(divisor);  // adding prime factor
                      x = x / divisor;
                  }
                  else
                      divisor++;
              }
          }
          return st.size();
    }
};