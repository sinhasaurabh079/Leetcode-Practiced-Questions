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


// using for loop
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

// using set
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        unordered_set<char> setj(jewels.begin(),jewels.end());
        
        for(char c: stones)
          if(setj.count(c))   // agar wo character set m present ho tb
            cnt++;
        return cnt;
    }
};
