class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
          return false;
        while(n%2==0)
              n = n/2;
              // as 2^x : 1,2,4,8,.... 
              return (n==1); 
        return false;

    }
};