class Solution {
public:
    void nextPermutation(vector<int>& nums) {

      // Algorithm :
      // 1. Find index of element i.e. to be swapped from right to left
      // 2. Then find the just maximum value to this element, which should be lesser than element at swapping+1 
      // 3. Perform swap Operation
      // 4. Reverese the array from swapping index + 1 to last
        int swapping_index=-1;
        
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                swapping_index=i-1;
                break;
            }
        }    

            if(swapping_index==-1){
                sort(nums.begin(),nums.end());
            }
            else{
                int max_index = swapping_index + 1;

                for(int i=swapping_index+2;i<nums.size();i++){
                    if(nums[i] > nums[swapping_index] && nums[i] < nums[max_index])
                         max_index=i;
                }
                swap(nums[swapping_index],nums[max_index]);
            
                int k=swapping_index+1;
                sort(nums.begin()+k,nums.end());
            }          
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int curr=-1;
        
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i] > nums[i-1])
            {
                curr=i-1;
                break;
            }
        }    

            if(curr==-1)
            {
                sort(nums.begin(),nums.end());
            }
            else
            {
                int m = curr + 1;

                for(int i=curr+2;i<nums.size();i++){

                    if(nums[i] > nums[curr] && nums[i] < nums[m])
                         m=i;
                }
                swap(nums[curr],nums[m]);
                sort(nums.begin()+curr+1,nums.end());
            }           
    }
};
