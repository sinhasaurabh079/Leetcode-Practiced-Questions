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