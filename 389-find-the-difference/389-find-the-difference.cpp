class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(auto c : t)  // summing ascii value of larger string
         sum += c;       // sum = sum + c; 
        for(auto c : s)
         sum -= c;       // sum = sum - c;

        // now sum will contain the ascii value of different character 
        return (char)sum;  //explicitly converting ascii value to character 
    }
};

// for large sum
    char findTheDifference(string s, string t) {
        int sum = 0;
        for (auto &c: t)
        {
            sum = sum + c;
            sum = sum % 256;
        }
        for (auto &c: s)
        {
             sum = sum - c;
            sum = sum % 256;
        }
        return (char)sum;
    }

// using sorting
    char findTheDifference(string s, string t) {
        int n = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++) if(s[i]!=t[i]) return t[i];
        return t[n];
    }
//
