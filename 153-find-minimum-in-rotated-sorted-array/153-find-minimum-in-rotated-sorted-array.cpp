class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int lo = 0;
        int hi = nums.size()-1;

        if(nums[lo] <= nums[hi])
        { // array is sorted
            return nums[lo];  
        }

        // part 1 
        // its last ele has unique property i.e., it is larger than its right element
        // as other elements are smaller than its right element

        // part 2
        // its first ele has unique property that it is smaller than its left ele
        // while every ele of part-2 is greater than its left part

        // [4,5,6,7,0,1,2]
        // part 1 -> 4,5,6,7
        // part 2 -> 0,1,2 

        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            // in this condition nums[mid] is last element of part 1 and next element of it is min
            if(nums[mid] > nums[mid+1])
               return nums[mid+1];
            // in this condition nums[mid] is first element of part 2 and it is min
            else if(nums[mid] < nums[mid-1])
               return nums[mid];
            // lo to mid part is sorted and we need to check in mid+1 to hi that is unsorted
            else if(nums[lo] <= nums[mid])
               lo = mid+1; 
            else if(nums[mid] <= nums[hi])
               hi = mid-1;        
        }
        return -1;
        
    }
};