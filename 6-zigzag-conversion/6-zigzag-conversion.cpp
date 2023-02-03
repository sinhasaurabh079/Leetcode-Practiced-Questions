class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows==s.length())
          return s;
        // creating bucket
        vector<string> bucket(numRows);
        // index helps to oscillate in zig zag manner in numRows(say n) bucket
        int index=0;
        // step is 1 untill we reach nth row (bucket) 
        // after that it becomes -1 to come back to 0th row (bucket)
        int step=1;
        for(int i=0;i<s.length();i++){
            bucket[index] += s[i];
            if(index == 0)
               step = 1;
            else if(index == numRows-1)
               step = -1;
            index += step;
        }
        // making string fro the bucket 
        string ans="";
        for(auto &x:bucket) 
          ans += x;

        return ans;  
    }
};