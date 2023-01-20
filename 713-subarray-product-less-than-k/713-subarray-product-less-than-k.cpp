class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,j;
        int pdt=1;
        int count=0;

        for(i=0,j=0;j<nums.size();j++){
            pdt *= nums[j];
            
            while(pdt >= k && i < nums.size()){
                pdt = pdt/nums[i];
                i++;
            }
            if(pdt < k)
              count += j-i+1;
            //cout<<pdt<<" "<<j<<" "<<i<<" "<<count<<endl;  
        }
        return count;    
        // t.c = O(kn)
        // s.c = O(1)
    }
};
/**
 * The idea is always keep an max-product-window less than K;
 * Every time add a new number on the right(j), reduce numbers on the left(i),
  until the subarray product fit less than k again, (subarray could be empty);
 * Each step introduces x new subarrays, where x is the size of the current window (j + 1 - i);
 * example:
 * for window (5, 2, 6), when 6 is introduced, it add 3 new subarray:
 *       (6)
 *    (2, 6)
 * (5, 2, 6)
 */
