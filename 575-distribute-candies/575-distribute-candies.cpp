class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> types(candyType.begin(),candyType.end());
        int diffType = types.size();
        int totalCandies = candyType.size();
        // kam kha skte ho pr jyada nhi
        if(totalCandies/2 <= diffType)
           return totalCandies/2;
        return diffType;    
    }
};