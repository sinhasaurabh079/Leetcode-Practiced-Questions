class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0;i<=30;i++)  // going to 2^30 only as last is 2^31-1 which can be ignored
        {
            int ans = pow(2,i);
            if(ans == n)
             return true;
        }
        return false;
        
    }
};
