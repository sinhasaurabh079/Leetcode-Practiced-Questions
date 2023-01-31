class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
// pairing ages and scores
        vector<pair<int,int>> players;
// array to store ans of Longest Non-Decreasing Subsequence ending at given index
        vector<int> dp(n,0);
        int best=0;
        // making pairs and note age is first as we need to sort accg to ages
        // and during sorting first has more priority
        for(int i=0;i<n;i++)
           players.push_back({ages[i],scores[i]});

        sort(players.begin(),players.end());
        
        // from here we only need to focus on score as ages are sorted in
        // asceding order that means older players comes after younger one
        // only need to focus on condition
        // logic for LIS 
        for(int i=0;i<n;i++){
            dp[i] = players[i].second;
            for(int j=0;j<i;j++){
                if(players[i].second >= players[j].second)
                    dp[i] = max(dp[i], dp[j] + players[i].second);
            }
            best = max(best, dp[i]);
        }
        return best;   
    }
};