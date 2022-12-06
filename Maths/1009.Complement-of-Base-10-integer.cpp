/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

    For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.

Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.

*/

class Solution {
public:
    int bitwiseComplement(int n) {

        int m=n;
        int mask=0;
         if(n==0)
           return 1;
        while(m!=0)
        {
            mask = (mask << 1) | 1;  // to create mask 00...111
            m = m >> 1;   // to know last 1 position 
        }                 // ex:- x=5 00000..101 , the third 1
                          // doing so to update m and know no of 1's in mask
                          // mask allows us to avoid preceding 1's

         int ans = (~n) & mask;  // for 5 -> ans = 1111...010 & 0000...111 = 0000..010 
         return ans;                 
    }
    
};
