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
// t.c = O(nlogn)

// using map
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map <int, int> m;
        for(int i : banned)
            m[i] = 1;
        int ans = 0, sum = 0;
        for(int i = 1; i <= n; ++i){
            if(sum + i <= maxSum && m[i] == 0)
                sum += i, ans++;
        }
        return ans;
    }
};
// t.c = O(n)
