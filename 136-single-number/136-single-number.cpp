// using map
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> a;
       for(auto x:nums)
         a[x]++; 
       for(auto x:a)
       {
           if(x.second == 1)
             return x.first;  
       }    
       return -1;
    }
};


// using xor operation
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        /*
    A^A=0
    A^B^A=B
    (A^A^B) = (B^A^A) = (A^B^A) = B This shows that position doesn't matter.
    Similarly , if we see , a^a^a......... (even times)=0 and a^a^a........(odd times)=a
       */
        int ans = 0;
        for(auto x:nums)
           ans = ans^x;
        return ans;   
    }
};
