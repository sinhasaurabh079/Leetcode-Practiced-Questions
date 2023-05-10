class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       // basically hum prefix sum ka concept laga rhe h
       // k = 2 arr={1,-1,2,3,1,-1,1}
       // idx    0  1  2 | 3  4|  5  6  7  8  9  10
       // ele    3  9 -2 | 4  1| -7  2  6 -5  8  -3  
       // sum  0 3 12 10 |12 15|  8 10 16 11 19  16
       // freq 1 1  1 1 1|1   1|  1  2  1  1  1  2
       //       y-k      |  k  | so first subarray mil gya
       // 0 -> 1 because if 
       // y-k + k = y
       // ex- sum = 15 , sum-k = 15-5 = 10 exist mtlb 5 bhi exist kr rha h
       // (y-k)arr = {3,9,0,-2}, (k)arr = {4,1}
       // we focus on k during calcn of prefix sum if (sum-k) exist i.e (y-k)
       // then k will also exist 
       // used map for this and if subarray found put sum-k freq in cnt
        unordered_map<int,int> m;
        m.insert({0,1});
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            if(m.find(sum-k)!=m.end())
                cnt += m[sum-k];
            m[sum]++;    
        }
        return cnt;
    }
};
/*
 // int count=0;
        // for(int i=0;i<nums.size();i++){
        //   int sum=0;
        //    for(int j=i;j<nums.size();j++){
        //       sum += nums[j];
        //       if(sum==k)
        //         count++;
        //    }
        // } // O(n2) tle
        // return count;
*/        