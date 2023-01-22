class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
      
        // define a comparator function to compare the score in the kth exam
        auto comparator = [&](vector<int>& a, vector<int>& b) {
            return a[k] > b[k];
        };
        // use the sort function with the comparator to sort the students by their score in the kth exam
        sort(score.begin(), score.end(), comparator);
        return score;
 
    }
};