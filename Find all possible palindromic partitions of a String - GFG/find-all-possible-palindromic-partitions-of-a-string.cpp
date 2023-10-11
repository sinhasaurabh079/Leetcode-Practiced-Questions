//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void solve(int ind, vector<string>& ds, string& s, vector<vector<string>>& ans){
        if(ind == s.length()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.length();i++){
            if(isPos(ind,i,s)){
                ds.push_back(s.substr(ind, i - ind + 1));
                solve(i+1,ds,s,ans);
                ds.pop_back();
            }
        }
        return;
    }
    bool isPos(int start, int end, string& s){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<vector<string>> ans;
        vector<string> ds;
        solve(0,ds,S,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends