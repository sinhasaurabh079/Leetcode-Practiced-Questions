class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int row = strs.size();
        int col = strs[0].size();

       // we need to check whether the character in column is
       // sorted or not (not in row)[column wise means vertically]
       // for each column'th row checking
       // whether colu elements are lexographically sorted or not

        for(int j=0;j<col;j++)
        {   
            // row-1 because to avoid index out of bound 
            // because we are checking two indices at a time 
            for(int i=0;i<row-1;i++)
            {
            // if in any column elements are not in order increase count 
            //and break the inner loop and check for next column 
            //as this column is not in required order
                if(strs[i][j] > strs[i+1][j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;

        
    }
};