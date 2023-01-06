class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;

        // pehle hum 2 sorted region pata kr rhein h
        // and unn 2 part m target ko dhundenge
        // ya toh target part 1 hoga ya part 2
        
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;

            if(nums[mid] == target){
                  return mid;
                }  

            // if lo to mid part is sorted
            // and target lo se mid ka bich h

               // tb hi ko mid-1 pr set krenge taki region chota ho jaye
               // and searching "lo se hi(=mid-1)" k bich perform hogi
            else if(nums[lo] <= nums[mid]){

                if(nums[lo] <= target && target < nums[mid]){
                    hi = mid-1;
                }

                // agr lo se mid k bich target nhi h tb toh
                //     nums[mid+1] < target <= nums[hi]  iss range m hoga

                   // iskeliye lo ko mid+1 pr set krenge
                   // and searching ab "lo(=mid+1) se hi" k bich perform krenge
                else{
                    lo = mid+1;
                }
            }
            // mid to hi  part is sorted
            // agr target "mid+1 and hi" k bich ho tb
            
               // lo =mid+1 pr set krenge 
               // and lo to hi k bich search krenge
            else if(nums[mid] <= nums[hi]){
               
                if(nums[mid] < target && target <= nums[hi]){
                    lo = mid+1;
                }
               // wrna wo "lo to mid-1" range  hi hoga
                else{
                    hi = mid-1;
                }
            }
        }
        return -1;
    }
};