class Solution {
public:
     int maxSubarraySumCircular(vector<int>& A) {
        int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        for (int& a : A) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};

// 2nd approach

class Solution {
public:
    /*
    Approach : 
             1. First find max subarray sum assuming it as noncircular (smax).
             2. Find min subarray sum, here we inverted the element to find the min from same kadanes algorithm (smin).
             3. Find the totalsum (T)
             4. Circular Subarray sum,
                                cir_s = T - smin;
               but here we did  cir_s = T + smin;
             as we find smin through kadane after inverting that give positive sum.
             5. maximum of smax and cir_s is the answer, if circularsum is 0 than max sum is smax.
    */                   
    int kadane(vector<int>& a)
    {
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum += a[i];
            mx = max(mx,sum);
            if(sum<0)
              sum = 0;
        }
        return mx;
    }
    int maxSubarraySumCircular(vector<int>& nums) { 
        int nonCircularSum = kadane(nums);

        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum += nums[i];
      // inverting to calculate smin
            nums[i] = -nums[i];
        }

        int circularsum = totalsum + kadane(nums);

        if(circularsum == 0)
           return nonCircularSum;
        else
           return max(circularsum,nonCircularSum);   
    }
};
