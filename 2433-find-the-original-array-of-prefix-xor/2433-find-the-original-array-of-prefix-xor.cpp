class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        
         ans[0] = pref[0];
         // putting first element of pref to ans
         // other elements are xor of pref[i] and pref[i-1]
        for(int i=1;i<pref.size();i++)
        {
            ans[i] = pref[i]^pref[i-1];   
        }
        return ans;
    }
};
/*
    vector<int> findArray(vector<int>& A) {
        for (int i = A.size() - 1; i > 0; --i)
            A[i] ^= A[i - 1];
        return A;
    }
 */   