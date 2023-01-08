class Solution {
public:
    bool isItPossible(string word1, string word2) {
        map<char,int>m1,m2;
        
        for(char c:word1)
            m1[c]++;
        for(char c:word2)
            m2[c]++;
        // as all are lowercase
        // checking combination of each char in word1,word2 shuffling

        for(char ch1='a';ch1<='z';ch1++){
            for(char ch2='a';ch2<='z';ch2++){
                if(m1[ch1]>0 && m2[ch2]>0){
                    // pehle ch1 character ko word1 se hataya and word2 dala
                    m1[ch1]--;
                    m2[ch1]++;
                    // phir ch2 character ko word2 se hataya and word1  dala
                    m2[ch2]--;
                    m1[ch2]++;
                    int unique1=0,unique2=0;
                    for(char temp='a';temp<='z';temp++){
                        if(m1[temp] > 0)
                          unique1++;
                         if(m2[temp] > 0)
                          unique2++;  
                    }
                    if(unique1==unique2)
                       return true;
                    // jo jaisa tha usko waisa krdiya (means phir se original word1,word2 bna diya)
                    // ch2 ko pehle m1 m dala tha, ab usko m1 se hataya m2 m wapis dal diya
                    m1[ch2]--;
                    m2[ch2]++;
                    // ch1 ko pehle m2 m dala tha ab, usko phir se m1 dala diya
                    m2[ch1]--;
                    m1[ch1]++;  
                }
            } 
        }
        // Otherwise, return false
        return false;
    }
};
