class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      //    vector<vector<int>> res(2);
      //    map<int,bool> m1,m2;
      //    for(int x:nums1)
      //        m1[x] = true;
      //    for(int x:nums2)
      //        m2[x] = true;
      //    for(auto x:m1){
      //       if(m2.find(x.first) == m2.end())   // if nums1 not exist in nums2
      //         res[0].push_back(x.first);      
      //     }       
      //    for(auto x:m2){
      //        if(m1.find(x.first) == m1.end()) // if nums2 not exist in nums1
      //          res[1].push_back(x.first);
      //    }
      // return res;   

      // set<int> s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
      // vector<int> dist1,dist2;
      // for(int i:s1){
      //    if(s2.count(i)==0)
      //       dist1.push_back(i);
      // }
      // for(int i:s2){
      //    if(s1.count(i)==0)
      //      dist2.push_back(i);
      // }
      // return {dist1,dist2};

      //stl
       vector<int> v1,v2;
       set<int> s1(begin(nums1),end(nums1)), s2(begin(nums2),end(nums2));
       set_difference(begin(s1),end(s1),begin(s2),end(s2),back_inserter(v1));
       set_difference(begin(s2),end(s2),begin(s1),end(s1),back_inserter(v2));
       return {v1,v2};
    }
};