class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       map<int,int>mp;
       int count=0;
       for(auto i:tasks)
         mp[i]++;
       
       for(auto i:mp)
          if(i.second==1)
              return -1;

       for(auto i:mp)
       {
          // for batch of task 2 and 3 we did them in one go
           if(i.second==2 || i.second==3)
              count++;  
          // for batch of task mul of 3 we require k operation (3*k)
           else if(i.second%3==0)
              count += i.second/3;
         // for other batch of task (3k+1 or 3k+2) => k+1
           else
              count += i.second/3 + 1;  
       }
       return count;
    }
};