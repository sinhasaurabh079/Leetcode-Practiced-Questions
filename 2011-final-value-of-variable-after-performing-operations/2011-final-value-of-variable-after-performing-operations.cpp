class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(auto x:operations)
        {
            if(x == "X++")
             ans++;
            else if(x=="X--")
             ans--;
            else if(x=="++X")
             ++ans;
            else
             --ans;     
        }
        return ans;
    }
};