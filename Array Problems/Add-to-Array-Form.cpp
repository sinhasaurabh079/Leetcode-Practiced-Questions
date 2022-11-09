/**
   The array-form of an integer num is an array representing its digits in left to right order.
For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

Example 1:

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
Example 2:

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
**/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int K) {
         for (int i = num.size() - 1; i >= 0 && K > 0; --i) {
            num[i] += K;
            K = num[i] / 10;
            num[i] %= 10;
        }
        while (K > 0) {
            num.insert(num.begin(), K % 10);
            K /= 10;
        }
        return num;
        
    }
};
