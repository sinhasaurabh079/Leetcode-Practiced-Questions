class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        // till n becomes zero
        while(n>0){
          ans++;
          // getting nearest power of 2
          int x = log2(n);
          // finding nearest power of 2's difference for minimum operations
          int diff1 = (n - pow(2,x));
          int diff2 = (pow(2,x+1) - n);
          // jo chota diff hoga waha tk minimum step m pahuch skte h
          n = diff1 < diff2 ? diff1 : diff2;
        }
        return ans;
    }
};