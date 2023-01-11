class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> res(n);
        int start=0,end=n-1;
        int index=n-1;
        while(start<=end)
        {
            int val1=nums[start]*nums[start];
            int val2=nums[end]*nums[end];
            
            if(val1>val2){
                res[index]=val1;
                start++;
            }
            else{
                res[index]=val2;
                end--;
            }
            index--;
        }
        return res;
    }
};