class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int no_of_even_digitsElement=0,no_of_digits=0;
        // for traversing the array 
       for(int i=0;i<nums.size();i++)    
       { 
           no_of_digits=0;
        // for counting no of digits of current element of array
          while(nums[i])                 
          { 
            nums[i]/=10;
            no_of_digits++;
          } 
           // if even no of digits present, increment no_of_even_digitsElement by 1
           if(no_of_digits%2==0)       
               no_of_even_digitsElement++;   
       }
        return no_of_even_digitsElement;
        
    }
};