class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int ans=0;
        // j for releasing zeroes from left when 0's greater than
        // permisible k is considered as 1 for max consecutive ones
        // count here counts curr_max ones consecutive subarray
        // ans has maximum consecutive ones subarray
        //    1 1 0 1 0 0 1 1 0 1 1
        //  ^
        //  j=-1 points here and i traverse array
        int j=-1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
              count++;
            // when 0's gr than k is considered we need to release 0's
            // from left untill count of zeroes becomes < k
            while(count>k){
                // j++ zeroes tk pahuchayega jisko humne consideer kiya tha 
                // pehle ab hatana h
                j++;

                // jb j 0 ko point krega tb hme uss 0 ko hatayengey taki aage
                // ke 0 ko consider kr sake to find max
                if(nums[j]==0)
                   count--;
            } 
            // jb hum release krengey tb, jis 0 ko hatayengey usse pehle k 1 bhi hat jayengey
            // i rightmost 1 ko point krega and j leftmost 1 ko and
            // inka diff uss subarray ki length dega 
            int len = i-j;
            // agr curr length hmara kabhi bhi prev maximum se bada hoga tb answer k update krdenge
            if(len > ans)
               ans = len; 
        }
        return ans;   
    }
};