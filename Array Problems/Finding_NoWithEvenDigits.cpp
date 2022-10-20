class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int no_of_even_digitsElement=0,no_of_digits=0;
       for(int i=0;i<nums.size();i++)    // for traversing the array 
       { no_of_digits=0;
          while(nums[i])                 // for counting no of digits of current element of array
          { 
            nums[i]/=10;
            no_of_digits++;
          } 
           
           if(no_of_digits%2==0)       // if even no of digits present, increment no_of_even_digitsElement by 1
               no_of_even_digitsElement++;   
       }
        return no_of_even_digitsElement;
        
    }
};
