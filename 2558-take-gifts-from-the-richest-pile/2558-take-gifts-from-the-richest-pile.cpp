class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int x:gifts)
          pq.push(x);
        long long sum = 0;  
        while(k--){
           pq.push(sqrt(pq.top()));
           pq.pop();
        }
        while(!pq.empty()){
           sum += pq.top();
           pq.pop();
        }
       return sum;
    }
};
/*
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        vector<int> ans(gifts.size());
        ans = gifts;
        while(k--)
        {
            sort(gifts.begin(),gifts.end(),greater<int>());
            int res = sqrt(gifts[0]);
            gifts[0]=res;
        }
   
          // for(int &x:gifts)
          //  cout<<x<< " ";
        long long sum=0; 
        for(int i=0;i<gifts.size();i++)
           sum += gifts[i];
        return sum;
    }
};
*/