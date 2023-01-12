class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> res={-1,-1};
        int s=0;
        int e=nums.size()-1;
        int m=0;
        
        // first occurence in left part
        while(s<=e)
        {
            m=(s+e)/2;
            cout<<m<<endl;
           if(nums[m]==target)
            {
                res[0]=m;
                e=m-1;
            }   
           else if(nums[m] < target)
                s=m+1;
           else
                e=m-1;     
        }

        // last occurence in right
        s=0;
        e=nums.size()-1;
        while(s<=e)
        {
            m=(s+e)/2;
            if(nums[m]==target)
             {
                 res[1]=m;
                 s=m+1;
             }
            else if(nums[m] < target)
                 s=m+1;
            else
                 e=m-1;      
        }
        return res;
    }
};