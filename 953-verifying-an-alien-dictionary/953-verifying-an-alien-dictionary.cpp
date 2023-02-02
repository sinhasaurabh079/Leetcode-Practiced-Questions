class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int mp[26];
        // creating a new a-z sequence according to the given order
        // ex- for making hlabc as tradtional abcde
        for(int i=0;i<26;i++)
           mp[order[i]-'a']=i;

        // Approach :
        //  1. Checking letter of curr and next word are they in newly contructed order or not
        //  2. Since we are checking two words smallestt of them is considered for inner loop
           
        for(int i=0;i<words.size()-1;i++){
             string curr = words[i];
             string next = words[i+1];

             int len = min(curr.length(),next.length());
            // True only two cases m hoga
            // -> curr and next correct new order follow kre
            // -> whole curr string substring ho next string k
            // False cases
            // -> If any character do not follow order
            // -> If whole next string is substring of curr string
            if(len != curr.length() && len == next.length() && curr.substr(0,len) == next)
                  return false;

            // if order maintained for each character than returning true 
            // otherwise false      
             for(int l=0;l<len;l++){
                 if(mp[curr[l]-'a'] > mp[next[l]-'a'])
                     return false;

                 if(mp[curr[l]-'a'] < mp[next[l]-'a'])
                    break;    
             }     
        }
        return true;           
    }
};
/*
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int mp[26];

        for(int i=0;i<26;i++)
           mp[order[i]-'a']=i;

        for(string &w:words){ 
           for(char &c:w){ 
             c = mp[c-'a'];
           } 
        }     
        return is_sorted(words.begin(),words.end());        
    }
};
*/