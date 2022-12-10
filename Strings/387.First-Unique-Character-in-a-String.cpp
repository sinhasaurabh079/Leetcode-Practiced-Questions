/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0

Example 2:

Input: s = "loveleetcode"
Output: 2

Example 3:

Input: s = "aabb"
Output: -1

*/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;

        for(int i=0;i<s.length();i++)
        // storing how many times a character appears in order
        // leetcode -> l e t c o d
        //             1 3 1 1 1 1
        // first time unique character apeared is -> l in string
          m[s[i]]++;

        // m[s[0]] -> s[0] = l and m[s[0]] =1
        // m[s[1]] -> s[1] = l and m[s[1]] =3
        // m[s[2]] -> s[2] = l and m[s[2]] =1
        // and so on
        for(int i=0;i<s.length();i++)
          {
              if(m[s[i]]==1)     
                return i;
          }
          return -1;   
    }
};
