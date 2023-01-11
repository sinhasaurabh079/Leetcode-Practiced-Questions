class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int arr[26]={0};
        if(ransomNote.size() > magazine.size())
        return false;
        
        for(auto ch : ransomNote)
          arr[ch - 'a']++;
        for(auto ch : magazine)
          arr[ch - 'a']--;
        bool possible =true;
        for(int i=0;i<26;i++)
         {
             if(arr[i] > 0)
             {
                possible =false;
                break;
             } 

         } 
        return possible;
        
    }
};