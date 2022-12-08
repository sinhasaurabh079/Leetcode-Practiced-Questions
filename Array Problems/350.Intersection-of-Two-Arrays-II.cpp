/*
 Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
 
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.

In this question we have to return interrsection of 2 array such that duplicates element if found,
will also be present in the array(intersection)

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;     // we use map to store the element of first array as Key and its duplicacy as Value
        vector<int> ans;    // to store the intersected array elements
      
      // agr pehla array chota hua toh, bde wale array se swap krdenge taki operation perform kr sake
         if(nums1.size()<nums2.size())
          swap(nums1,nums2);
      
     // 1:1 2:2 ... first key hogi and second is its count
        for(int i=0;i<nums1.size();i++)   
         {
             m[nums1[i]]++;
         }
      
     // ab dusre array ka elements ko check krenge map m 
     // agr milta h toh count decrease krenge 
       for(int i=0;i<nums2.size();i++)
         {
             auto it = m.find(nums2[i]);        // nums2 ko scan krenge map m
             if(it!=m.end() && it->second > 0)  // aur it ( lets say 2th key) as index se scan krenge further map ko  
             {
                 ans.push_back(nums2[i]);      // elemnts ko array m daldiya
                 it->second--;                 // count of individual element of num1 ko decrease krdiya, as utne hi duplicates element present thein
             }
         } 
        return ans;
    }
};

// using stl
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int> ans;

        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(ans));
        return ans;
    }
};

// using two pointer
    int n1=nums1.size();
  int n2=nums2.size();
  sort(nums1.begin(),nums1.end());
  sort(nums2.begin(),nums2.end());
  int i=0,j=0;
  vector<int> res;
  while(i<n1 && j<n2){
      if(nums1[i]==nums2[j]){
          res.push_back(nums1[i]);
          i++;
          j++;
      }
      else if(nums1[i]<nums2[j]){
          i++;
      }
      else{
          j++;
      }
  }
  return res;
