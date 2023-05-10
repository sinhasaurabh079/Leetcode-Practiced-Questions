class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int m = word1.size();
        int n = word2.size();
        // single pointer 
        // i ek baar m dono words k character ko dalega
        for(int i=0;i<m || i<n; i++){
            if(i<m)
              res += word1[i];
            if(i<n)
              res += word2[i];  
        }
        return res;
    }
};
/*
 //  brute force
        string res = "";
        int m = word1.size();
        int n = word2.size();
        int j=0,k=0;
        for(int i=0;i<2*min(m,n);i++){
           if(i%2==0)
             res += word1[j++];
           else
             res += word2[k++];  
        }
         //cout<<j<<" "<<k<<endl;
        if(j<m){
          for(int i=j;i<m;i++)
            res += word1[i];
        }
        if(k<n){
          for(int i=k;i<n;i++)
            res += word2[i];
        }
        return res;
  // ----------------------------
  // two pointer
      string res = "";
        int m = word1.size();
        int n = word2.size();
        int i=0,j=0;
        // Note: i aur j odd, even way m update ho rhe h 
        // pehle i=0 hoga toh pehla character phir, i=1 ho jayega
        // tb j=0 se char lekr res m dalengey 
        // two pointer
        while(i<m || j<n){
            if(i<m)
              res += word1[i++];
            if(j<n)  
              res += word2[j++];
        } 
        return res;
  // ----------------------------      
      
*/