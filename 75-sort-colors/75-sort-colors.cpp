class Solution {
public:
    void sortColors(vector<int>& nums) {
      // approaches: 1.sort -> tc-O(nlogn) , sc - O(1)
      //             2.cnt array -> tc O(n)+O(n), sc - O(1)
      //             3.dnf se tc-O(n), sc-O(1)
      //   map<int,int> m;
      //   for(int i:nums)
      //      m[i]++;
      //   int k=0;   
      //   for(auto i:m){
      //     int cnt=i.second;
      //      while(cnt > 0){
      //         nums[k++] = i.first;
      //         cnt--;
      //      }
      //   }
      // return;  
      // O(n) space but we need to do in constant space
      // ---------------------------------------------
      // Dutch national flag algortithm is used
       int low=0;
       int mid=0;
       int high=nums.size()-1;

       while(mid<=high){
          if(nums[mid]==0){
             swap(nums[low],nums[mid]);
             low++;
             mid++;
          }
          else if(nums[mid]==1)
            mid++;
          else { 
            swap(nums[mid],nums[high]);
            high--;
          }    
       }
       return;
    }
};