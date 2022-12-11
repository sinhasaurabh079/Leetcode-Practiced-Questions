/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true

*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

      // ransome note wo word jo kese string se bnaye ja sake
        int arr[26]={0};
        if(ransomNote.size() > magazine.size())     // agr magazine m character kaam ho toh ransom note bn nhi payega
        return false;
        
        for(auto ch : ransomNote)       // ransome note k liye character count krliye
          arr[ch - 'a']++;
      
        for(auto ch : magazine)        // magazine n ransom m jo same h uska count decrease krdiya
          arr[ch - 'a']--;
        bool possible =true;
        for(int i=0;i<26;i++)
         {
             if(arr[i] > 0)         // agr ransome note ki demand magazine fulfill na kr paye t return false, otherwise true
             {                      // ransome -> aab => a-2 b-1
                                    // magazine -> aaab => a-1,0,-1 (3) , b-0 (1) demand fulfilled
                                    // magazine -> aa => a-1,0 (a's demand fulfilled), b-1 (no updation) demand not fulfilled
               possible =false;
                break;
             } 

         } 
        return possible;
        
    }
};

// another way 

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int magazineCount[26] = {0};
        for(auto ch : magazine)
           magazineCount[ch - 'a']++;

        for(auto ch : ransomNote)
          if(magazineCount[ch - 'a']-- <= 0)
            return false;
        return true;       
    }
};

// using map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map1;
        for(int i=0;i<ransomNote.size();i++){
            map1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            map1[magazine[i]]--;
            if(map1[magazine[i]]<=0)
                map1.erase(magazine[i]);
        }
        if(map1.size()==0)
            return true;
        return false;
    }
};
