class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // approach is to map the char of pattern with word of string s
        // and also noting which string is mapped
        unordered_map<char,string> mp;
        unordered_map<string,bool> visited;

        vector<string> wordlist;

        stringstream str(s);
        string word;
        int count = 0;
        while(str >> word){
            wordlist.push_back(word);
             count++;
        }
        if(pattern.size()!=count)
           return false;
        else{
            for(int i=0;i<pattern.size();i++)
            {
                char c = pattern[i];
            //case1. if not visted for new letter eg: abba s[dog,dog,dog,dog] so dog is already assinged to 'a' so "dog" will be visited before it comes to the letter b. 
                if(mp[c]=="" && visited[wordlist[i]]==true)
                   return false;
            //case 2 .if not visited we will make it visited and assign value as v[i]
                else if(mp[c] == "")
                 {
                     mp[c]=wordlist[i];          // char mapped with word
                     visited[wordlist[i]]=true;  // for visited word
                 }  
                 else{
           //case 3. if value is already assigned so not equal to the v[i].
                     if(mp[c]!=wordlist[i])
                        return false;
                 } 
            }
        }  
        return true; 
    }
};