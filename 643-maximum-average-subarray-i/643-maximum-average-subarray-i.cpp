class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int st,end;
        double mx=INT_MIN,sum=0;
        for(int i=0;i<k;i++)
            sum += nums[i];
          mx = max(mx,sum);
        
        // max avg sum nikalna h kisi subarray ka
        for(st=0,end=k;end<nums.size();st++,end++){
            sum += nums[end] - nums[st];
             mx = max(mx,sum);
        }    
        return mx/k;
    }
};