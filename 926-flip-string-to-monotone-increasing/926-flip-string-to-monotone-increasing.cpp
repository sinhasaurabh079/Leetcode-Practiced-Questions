class Solution {
public:
    int minFlipsMonoIncr(string s) {

        int no_of_ones=0;
        int toFlip=0;

        // min of no of 1's or 0's is the answer
        // as we need to flip whichever is the min
        // for making s monotone
        for(auto x:s)
        {
            if(x=='1')
               no_of_ones++;
            else{
                toFlip++;
                toFlip = min(toFlip,no_of_ones);
            }   
        }
        return toFlip;    
    }
};
