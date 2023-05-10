class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        // for(int i=0;i<mat.size();i++){
        //   // agr odd element hoga tb single ele intersection pr milega
        //   if(n%2==1){ 
        //      if(i==n/2){
        //        sum += mat[n/2][n/2];
        //      }
        //      else
        //         sum += (mat[i][i] + mat[i][n-i-1]);
        //   }
        //   // in case of even no collision
        //   else{
        //      sum += (mat[i][i] + mat[i][n-i-1]);
        //   }
        // }
        for(int i=0;i<n;i++){
          // principal diagonal sum
             sum += mat[i][i];
          // non-principal diagonal sum
             sum += mat[i][n-1-i];   
        }
        if(n&1)
           sum -= mat[n/2][n/2];
      return sum;  
    }
};
