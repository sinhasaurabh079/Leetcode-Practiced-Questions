class Solution {
public:
    bool detectCapitalUse(string word) {

       int count=0;
       // ek charcater woh small ho ya capital both are valid
       if(word.size() == 1)   
          return true;

       for(int i=0;i<word.size();i++)
          if(isupper(word[i]))
               count++;

      // if first character is capital and others are small 
        if(count == 1 && isupper(word[0]))   
           return true;
      // if all characters are small or capital both are valid     
        if(count == 0 || count == word.size())
           return true;
           
     // other than this are false
        return false;       
    }
};