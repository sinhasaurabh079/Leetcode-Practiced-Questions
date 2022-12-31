class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int mx=0;
        int count;
        for(int i=0;i<sentences.size();i++)
        {    count =0;  
            for(int j=0;j<sentences[i].length();j++)
            {
                 if(sentences[i][j] == ' ')
                    count++;
            }
            count++;     // incrementing one for the last word
            mx = max(mx,count);
        }
        return mx;
    }
};