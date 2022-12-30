class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j[256] = {0};
        int cnt=0;
        
        for(char c:jewels)
             j[c]++;
        
        for(char c: stones)
             cnt += j[c];
        
        return cnt; 
        // T.C. = O(j+s)  instead of O(js)
    }
};