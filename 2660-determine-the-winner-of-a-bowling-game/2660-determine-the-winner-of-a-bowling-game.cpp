class Solution {
public:
    int isWinner(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int score1=0;
        int score2=0;
        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i-1] == 10) {
                score1 += 2*a[i];
            } else if (i > 1 && a[i-2] == 10) {
                score1 += 2*a[i];
            } else {
                score1 += a[i];
            }
            
            if (i > 0 && b[i-1] == 10) {
                score2 += 2*b[i];
            } else if (i > 1 && b[i-2] == 10) {
                score2 += 2*b[i];
            } else {
                score2 += b[i];
            }
        }
        return score1>score2? 1 : (score1==score2) ? 0:2;
    }
};
