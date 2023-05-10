class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posidx=0,negidx=1;
        for(int i:nums){
           if(i>0){
              ans[posidx] = i;
              posidx += 2;
           }
           else{
              ans[negidx] = i;
              negidx += 2;
           }
        }
      return ans;  
    }
};
/*
 int n=nums.size();
        vector<int> pos, neg;
        for(int i:nums){
            if(i<0)
              neg.push_back(i);
            else
              pos.push_back(i);  
        }
        int psz=pos.size();
        int nsz=neg.size();
        int i=0,j=0,k=0;
        while(i<psz && j<nsz){
           nums[k++] = pos[i++];
           nums[k++] = neg[j++];
        }
        while(i<psz)
           nums[k++] = pos[i++];
        while(j<nsz)
           nums[k++] = neg[j++];  
      return nums;     
 */     