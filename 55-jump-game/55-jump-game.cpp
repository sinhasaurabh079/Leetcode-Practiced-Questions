class Solution {
public:
    bool canJump(vector<int>& nums) {

        int reachable_index=0;
        for(int index=0;index<nums.size();index++){
            // agr reachable_index jis index pr jaana h usse chota hua toh 
            // toh mtlb 0 aaya h bich mein
            if(reachable_index < index )
               return false;
            // if    
            if( nums[index]+index > reachable_index)
               reachable_index = nums[index]+index;   
        }
        return true;
        
    }
};