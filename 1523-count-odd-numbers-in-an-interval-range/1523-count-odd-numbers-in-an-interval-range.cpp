class Solution {
public:
    int countOdds(int low, int high) {
      /*
      Approach
    Total odd number between 1 and low - 1 is low/2.
    Total odd number between 1 and high is (high + 1 ) / 2.
    For getting answer we will do
    Total odd number between 1 and high - Total odd number between 1 and low - 1
    i.e., n = (high+1)/2 - (low/2)

    *** why low-1?? because we want include our low value. ***
     */
      return (high+1)/2 - (low/2);
    }
};
/*
Algorithm
   1. Check if low is odd. This could be easily checked using % operator, but we used bit wise operator & as they are more efficient.
   2. If low is odd, increment it.
   3. Return (high - low) / 2 + 1. The important point here is to check that if low after incrementing became greater than high this will happen when low = high, and in that case, we should return 0.

class Solution {
public:
    int countOdds(int low, int high) {
        // If low is even, make it odd.
        if (!(low & 1)) {
            low++;
        }
  
        // low could become greater than high due to incrementation
        // if it is, the answer is 0; otherwise, use the formula.

        return low > high ? 0 : (high - low) / 2 + 1;
    }
};
*/