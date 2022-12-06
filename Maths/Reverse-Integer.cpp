/* 
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned). 

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21
 
*/

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x)
        {
            int digit;
            digit = x % 10; 
            if( (ans > INT_MAX/10) || (ans < INT_MIN/10))   // to avoid checking in out of range we choose division
             {                                              // instead of multiplcn, so that the condition will remain in range of int
                 return 0;    // in case of out of range condition settting ans to 0
             }
            ans = ans*10 + digit;
            x /= 10;
        }
        return ans;
        
    }
};
