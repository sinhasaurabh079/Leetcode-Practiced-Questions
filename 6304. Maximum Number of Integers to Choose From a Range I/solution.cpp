class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        if(maxSum==1)
            return 0;
        int sum=0;
        sort(banned.begin(),banned.end());
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(binary_search(banned.begin(),banned.end(),i))
                continue;
            else
                sum += i;
            if(sum<=maxSum)
                count++;
        }
        return count;
    }
};
