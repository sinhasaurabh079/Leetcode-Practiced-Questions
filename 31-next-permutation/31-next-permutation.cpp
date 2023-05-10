class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     // Algorithm
     // 1. find the first breakpoint or dip from back 
     // 2. if dip not found it is last permutaion reverse and return
     // 3. if dip exist, swap it with just greater value
     // 4. reverse the range [idx+1,n-1] to get desire permutation
     // in short piche se first chota find karo and phir uska just bada
     // piche se and do above operations
     
     int idx=-1;
     int n=nums.size();
     // finding dip
     for(int i=n-2;i>=0;i--){
        if(nums[i] < nums[i+1]){
           idx = i;
           break;
        }
     }

     // if last permutation => reverse and return
     if(idx==-1){
        reverse(nums.begin(),nums.end());
     }
     // swap it with just greater
     else{
        for(int i=n-1;i>=idx;i--){
           if(nums[i] > nums[idx]){
              swap(nums[i],nums[idx]);
              break;
           }
        }
        reverse(nums.begin()+idx+1,nums.end());
     }
     return;
    }
};


/*
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
*/            
