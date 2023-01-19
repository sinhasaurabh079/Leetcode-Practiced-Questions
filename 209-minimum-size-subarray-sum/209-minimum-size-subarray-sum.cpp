class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int cur_size=0,min_size=n,sum=0;
        bool flag = false;

        for(i=0,j=0;sum >= target || j<n; ){
            // expansion to reach target
            if(sum < target){
                sum += nums[j++];
                cur_size++;
            }
            // shrinkng when sum becomes greater than or equal to target
            // then we try to find min size window with sum >= target
            else{
                if(min_size > cur_size)
                     min_size = cur_size;

                flag = true;   
                // picha se hataya   
                sum -= nums[i++];
                // kuki current window ki size shrink huyi h
                cur_size--;   
            }
        }
        return flag ? min_size : 0;     
    }  
};

/*
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int cur_size=0,min_size=n,sum=0;
        
        for(i=0;i<n;i++)
          sum += nums[i];

        if(sum < target)  
          return 0;

        sum = 0;
        for(i=0,j=0;sum >= target || j<n; ){
            // expansion
            if(sum < target){
                sum += nums[j++];
                cur_size++;
            }
            // shrinkng when sum becomes greater than or equal to target
            // then we try to find min size window with sum >= target
            else{
                if(min_size > cur_size)
                   min_size = cur_size;
                // picha se hataya   
                sum -= nums[i++];
                // kuki current window ki size shrink huyi h
                cur_size--;   
            }
        }
        return min_size;  
    }
};
*/