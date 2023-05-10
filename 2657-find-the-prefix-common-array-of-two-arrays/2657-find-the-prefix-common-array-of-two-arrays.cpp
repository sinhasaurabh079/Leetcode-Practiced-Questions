class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
      // since a and b are permutation of each other
      // max freq of each ele is 2
      // jb freq 2 hogi kisi element ki tb prefix common milega
      // and tb common ko inc krenge
        int n = a.size();
        vector<int> ans(n, 0); // initialize prefix common array with 0s
        vector<int> freq(n+1,0);
        int common=0;
        for(int i=0;i<n;i++){
          // for a array
            freq[a[i]]++;
            if(freq[a[i]]==2)  // prefix common tb 
               common++;
          // for b array
            freq[b[i]]++;
            if(freq[b[i]]==2)
               common++;
          // update ans array
            ans[i] = common;      
        }
      return ans;       
    }
};
/*
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n, 0); // initialize prefix common array with 0s
        
        // iterate over the array elements
        for (int i = 0; i < n; i++) {
            // count the number of elements in A and B that are present before or at index i
            int count = 0;
            for (int j = 0; j <= i; j++) {
                if (find(A.begin(), A.begin() + i + 1, B[j]) != A.begin() + i + 1) {
                    count++;
                }
            }
              C[i] = count; // store the count in prefix common array
        }
        
        return C;
    }
};
*/
