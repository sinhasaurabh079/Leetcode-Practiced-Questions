class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        // i for start, j for end, c for centre
        int i,j,c;  
        vector<int> res(n,-1);
        long long int sum=0;  

        if(n < 2*k+1)
            return res;
        if(k==0)
            return nums;    

        for(int i=0;i<2*k+1;i++)  
           sum += nums[i];    

        // finding average, as avg = sum / total no of elements
        // here 2k+1 elements are taken for finding avg at centre
        res[k] = (int)(sum/(2*k+1));     
            
        for(i=0,j=2*k+1,c=k+1;j<n;i++,j++,c++){
            sum = sum + nums[j] - nums[i];
            res[c] = (sum/(2*k+1));
        }    
       return res;
    }
};