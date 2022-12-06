// brute force
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

// efficient approach using Remainder and Divident
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
          return false;
        while(n%2==0)
          n = n/2;
       // as 2^x : 1,2,4,8,.... 
          return (n==1);    
    }
};

//using bit manipulation
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
          return false;
        
        // as every 2^x has only onw true bit 
        // anding operation with its previous integer gives alway 0
        // 8 -> 1000 , 7 -> 0111 => 8 & 7 = 0
          return ((n & n-1) == 0)

    }
};
