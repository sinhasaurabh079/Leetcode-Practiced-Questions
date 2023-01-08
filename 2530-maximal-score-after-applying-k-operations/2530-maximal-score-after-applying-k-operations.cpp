class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        long long score = 0;

        // we want to perform operation on maximum one on each round
        priority_queue<int> pq(nums.begin(),nums.end());

        // performing k operations 
        while(k--)
        {
            // get the max one
            long long t = pq.top();
            // pop it out
            pq.pop();
            // add to score the max one
            score += t;
            // add the ceil value
            // ceil(x/y) = (x + y - 1)/y
            // x=t,y-3 
            // ceil(t/3) = (t + 3 - 1)/3
           // pq.push((t+2)/3); 
             pq.push(ceil((double)t/3));   // gives error for float
        }
        return score;
        
    }
};
