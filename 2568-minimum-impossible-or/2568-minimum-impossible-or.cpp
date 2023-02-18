class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        // ans could be 2^x , where x=0,1,2,3,...
        // Trick : We just need to check for the smallest 2's power, present or not in array
        // Use a map instead of an unordered_set to keep elements in sorted order.
        map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        int ans = 1;
        while (true) {
            // If ans is not in the map, we found the minimum non-zero integer that cannot be expressed as a bitwise OR of a subset of the input array.
            if (mp.find(ans) == mp.end()) { 
                return ans;
            }
            // Otherwise, double the current value of ans and continue checking.
            ans *= 2; 
        }
        return -1;
    }
};

// using unordered set
 class Solution{
 public:
        int minImpossibleOR(vector<int>& nums) {
           unordered_set<int> s(nums.begin(),nums.end());
           int ans = 1;
           while(s.find(ans) !=  s.end()){
               ans = ans*2;
           }
           return ans;
     }      
 };
 
 // using set
 class Solution{
 public:
        int minImpossibleOR(vector<int>& nums) {
          set<int> s(nums.begin(),nums.end());
           int ans = 1;
           while(1){
               if(s.find(ans)==s.end())
                   return ans;
               ans = ans*2;
           }
           return -1;
     }      
 };

