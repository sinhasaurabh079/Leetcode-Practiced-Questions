class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
  /*
    Inverse of Xor is Xor itself
     eg:- 7 ^ 6 = 1
     now,1 ^ 6 = 7
     &, 1 ^ 7 =6
  */
        vector<int> ans;
 // inserting first as it is the first element of the original array (not changed)
        ans.push_back(first);
        
     for(int i=0;i<encoded.size();i++)
       {
          int x;
          x =  ans[i]^encoded[i];  
          ans.push_back(x); 
        // 1^1 = 0, 0^2 = 2, 2^3 = 1 gives [1,0,2,1]       
       }
     return ans;
    }
};