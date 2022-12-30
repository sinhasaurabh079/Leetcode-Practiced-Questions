class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        if(jewels.length() > stones.length())
            swap(jewels,stones);
        
        int cnt=0;
        for(int i=0;i<jewels.length();i++)
        {
            for(int j=0;j<stones.length();j++)
            {
                if(jewels[i] == stones[j])
                    cnt++;
            }
        }
        return cnt;
        
    }
};