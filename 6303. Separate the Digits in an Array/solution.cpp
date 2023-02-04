class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int digit=0;
        for(int x:nums)
        {
           vector<int> t;  
           while(x)
           {
               digit = x%10;
               t.push_back(digit);
               x/=10;
           }
            reverse(t.begin(),t.end());
            for(int x:t)
                ans.push_back(x);
        }
        return ans;
    }
};


// first approach
// int to string and string to int
  class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<char> t;
        int digit=0;
        for(int x:nums)
        {
           string s = to_string(x);
          // reverse(s.begin(),s.end());
           //x = stoi(s);
            int i=0;
           while(s[i]!='\0')
           {
               //digit = x%10;
               t.push_back(s[i]);
               i++;
           }
        }
        for(auto x:t)
        {
            int n = x-48;
            ans.push_back(n);
        }
        return ans;
    }
};
     
        
