/*
 ------------------------------------ SQUARES OF SORTED ARRAY --------------------------------------
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Note: Given aray is sorted means elements are in increasing order.

Concept:  Both elements present at most right and left can give max element
          if right -ve element gives max element store it in the last index of the RES array and increment the start
          if left +ve element gives max element store it in the last index of th RES array and decrement the end
 
 Contributed By: Saurabh Sinha
 Date: 22/10/2022 
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> res(n);           // res is an array of same size like nums array to store squares
        int start=0,end=n-1;          // start & end are the indexes of the array "nums"  
        int index=n-1;                //  to put the max element at the last index of the res array 
       
      /* start moves forward and end moves backward 
         if end crosses start terminate the loop*/
      while(start<=end)              
        {
            int val1 = nums[start]*nums[start];     // storing squares in val1 i.e. is the square of left elemnet 
            int val2 = nums[end]*nums[end];         // storing squares in val2 i.e. is the square of right element
           
            if(val1 > val2){
                res[index] = val1;                
                start++;
            }
            else{
                res[index] = val2;
                end--;
            }
            index--;                              // decrementing value of index, to reach 0th index
        }
        return res;
    }
};
