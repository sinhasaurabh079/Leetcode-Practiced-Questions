class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(),costs.end());

        int count=0;
        long long sum=0;

        for(int x:costs)
        {
            if( (sum+=x) <= coins)
              {
                  count++;
                  if(sum==coins)
                    break;
              } 
        }
     return count;
        
    }
};


/* 17 test case passed
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        int count=0;
        long long sum=0;
        for(int x:costs)
        {
            sum += x;
            if(sum <= coins)
            {
                count++;
                if(sum == coins)
                  break;
            }
            else
               sum -= x;
        }

     return count;
        
    }
};
*/