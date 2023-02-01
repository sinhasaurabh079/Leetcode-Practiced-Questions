class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       // Euclidean gcd string
       // Check if they have non-zero GCD string
       if(str1+str2 != str2+str1)
          return "";

       // getting the divisor substring whose length is the gcd of
       // length of str1 and str2

       int gcdLength = gcd(str1.size(),str2.size());
       // gives the requires string divisor
       return str1.substr(0,gcdLength);   
        
        // t.c = O(m+n)
        // s.c = O(m+n)
    }
};

/* Brute force
class Solution {
public:
    bool valid(string str1, string str2, int k){
     int len1 = str1.length();
     int len2 = str2.length();
        if(len1%k > 0 || len2%k > 0)
           return false;
        else{
            string base = str1.substr(0,k);
            int n1 = len1/k , n2 = len2/k;

            return str1==joinwords(base,n1) && str2==joinwords(base,n2);
        }    
    }

    string joinwords(string str, int k)
    {
        string ans = "";
        for(int i=0;i<k;i++)
           ans += str;
        return ans;   
    }
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        for(int i = min(len1,len2);i>=1;i--){
            if(valid(str1,str2,i))
               return str1.substr(0,i);
        }
       return "";
    }
};
*/
