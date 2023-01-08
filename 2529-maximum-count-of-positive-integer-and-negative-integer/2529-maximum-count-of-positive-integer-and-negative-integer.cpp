class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int cnt=0;
        int cnt2=0;
        
        for(auto x:nums)
        {
            if(x<0)
                cnt++;
            else if(x>0)
                cnt2++;         
        }
        if(cnt>cnt2)
            return cnt;
        else
            return cnt2;
        return -1;       
    }
};