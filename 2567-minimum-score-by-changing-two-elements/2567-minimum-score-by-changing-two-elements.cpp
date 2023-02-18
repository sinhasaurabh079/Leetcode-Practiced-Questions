class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        // Algorithm 
        // sort kro and consider the array ele as on number line
        // low = abs min diff
        // high = abs max diff
        // score = high + low , low toh zero ho jayega
        // i.e score ~ high

        // hmein score ko minize krna h toh hme high ko minimize krne pr focus krna h
        // places -> 0 1 ...... n-2 n-1
        // 3 cases bnengey jismein 2 no ka hatane se high min hoga and baki m min nhi hoga
        // Hum two small values ko OR two greates values ko OR ek small and ek greatest ko hata skte h
        // Case 1: 0th and 1th place ko hataya (two small)
        // no line: 2 3 ....... n-2 n-1 
        //         tb high = nums[n-1] - nums[2] hoga
        // Case 2: n-2th and n-1th place ko hataya (two largest)
        // no line: 0 1 ....... n-4 n-3
        //         tb high = nums[n-3] - nums[0] hoga
        // Case 3: 0th and n-1th place ko hataya (ek smallest and ek largest)
        // no line: 1 2 3 ....... n-2 
        //         tb high = nums[n-2] - nums[1] hoga

        int n = nums.size();
        sort(begin(nums),end(nums));

        // removed two smallest
        int case1 = abs(nums[n-1] - nums[2]);
        // removed two largest
        int case2 = abs(nums[n-3] - nums[0]);
        // removed smallest and largest
        int case3 = abs(nums[n-2] - nums[1]);

        // int ans = min(case1,case2);
        // ans = min(ans,case3); 
        int ans = min({case1,case2,case3});
       
        return ans;
    }
};
/*
// in short
class Solution {
public:
    int minimizeSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n = nums.size();
      int ans = min({ nums[n-1] - nums[2], nums[n-3] - nums[0], nums[n-2] - nums[1] });
      return ans;
  }
};
*/      
