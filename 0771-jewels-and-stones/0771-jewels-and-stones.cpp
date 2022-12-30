class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        if(jewels.length() > stones.length())
            swap(jewels,stones);
        
        int cnt=0;
        for(char c:jewels)
        {
            for(char k:stones)
            {
                if(c==k)
                    cnt++;
            }
        }
        return cnt;
        
    }
};