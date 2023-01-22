class Solution {
public:
    Solution(){ 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    }
    int alternateDigitSum(int n) {
        vector<long long> ans;
        int digit=0,x=0;
        long long sum=0,count=0;
      
        x=n;
        while(n)
        {
            digit = n%10;
            //ans.push_back(digit);
            count++;
            n=n/10;
            
        }
        count--;
        while(x && count>=0)
        {
            digit = x%10;
            if(count%2==0)
                 sum += digit;
            else
                 sum -= digit;
            x/=10;
            count--;
        }    
            
         // memoery limit exceeded for this   
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(i%2==0)
        //         sum += ans[i];
        //     else
        //         sum -= ans[i];
        // }
        return sum;
    }
};

class Solution {
public:
    Solution(){ 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    }
    int alternateDigitSum(int n) {
        int sum=0;
        int sign=1;
        while(n)
        {
            sign *= -1;
            sum += n%10 *sign;
            n/=10;
        }
        return sum*sign;
    }
};
