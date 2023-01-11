class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);  // 2d vector of numRows sized
        for(int i=0;i<numRows;i++)
        {
            v[i].resize(i+1); //size of each row 
            v[i][0]=v[i][i]=1; // setting first column and same row & col to 1
       // performing sum of last rows element to get the next row element
            for(int j=1;j<i;j++)
            {
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
        }
        return v;
    }
};
