class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int low = 0;
       int high = nums.size()-1;
        
       // boundary checks if element present on first two position or last two position or
       // single element is present 
       if(high==0){ 
         return nums[0];
       }
      else if(nums[0]!=nums[1]){
         return nums[0];
       }
      else if(nums[high]!=nums[high-1]){
         return nums[high];
      }
      // Algo
      // -> ek pattern follow ho rha h even and odd places pr for a pair
      //    pair ka first element even index pr hoga and second element odd index pr hoga
      // -> if mid index element is unique it is not equal to both of its left and right
      // -> if mid is even next pair is present on odd index and vice versa
      // -> pattern is present if :
      //     mid index is even and mid's element is same as next index or
      //     mid index is odd and mid's element is in pair with previous element
      // then unique element must present in [mid+1,high] as pattern followed
      // if pattern not followed search space is [low,mid-1] 
      while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid] != nums[mid-1])
           return nums[mid];
        else if(((mid%2)==0 && nums[mid]==nums[mid+1]) || ((mid%2)==1 && nums[mid]==nums[mid-1]) ) 
           low = mid+1;
        else
           high = mid-1;    
      } 
      return -1;
    }
};