class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         // int n = nums.size();
          // if(n<=2)
          //   return nums;
        //   multiset<int> set;
        //   for(int i:nums){
        //      auto it = set.find(i);
        //      if(it != set.end())
        //         set.erase(i);
        //      else
        //         set.insert(i);   
        //   }
        // return {*set.begin(),*next(set.begin(),1)};
        // t.c - O(n) , s.c - O(n) but not good as it given to do in s.c - O(1)
        // let a and b is distinct
        // we derive a & b from xor of array
        // unique property :
        // - xor(arr) rightmost set bit is important for us and say rmsb
        // - xor(arr) has zero bits when even times 1 or 0 occur, 1 when odd times
        // - rmsb will divide arr in two sets that will give a & b 
        // - since rmsb of a & b is different
        // - set1 -> elements whose rmsb is 1
        // - set2 -> elements whose rmsb is 0
        // - set1 gives a and set2 gives b
      
        long axorb = 0;
        for(int x:nums)
           axorb ^= x;
           
        int a=0;
        int b=0;
        // rightmost significant bit
        long rmsb = axorb & -(axorb);  // a & ~(a-1) also works , short form a &= -a
        for(int x:nums){
           // set1 gives a
            if((rmsb&x)==0)
                a ^= x;
           // set2 gives b     
            else
                b ^= x;
        }
        return {a,b};
    }
};