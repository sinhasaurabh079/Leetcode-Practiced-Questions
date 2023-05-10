class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans = "";
      for(int i=0;i<strs[0].length();i++){
         char ch = strs[0][i];
         bool match = true;
         // har row m character same h ki nhi
         for(int j=1;j<strs.size();j++){
            if(ch != strs[j][i]){
               match = false;
               break;
            }
         }
         if(match == false)
             break;
         else
             ans += ch;    
      } 
      return ans; 
    }
};