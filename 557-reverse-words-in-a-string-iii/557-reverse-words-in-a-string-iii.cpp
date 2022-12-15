class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {  // ex - hackers so
               // space dikhega uske baad hum hackers ko reverse krdenge
               // as s.begin()+i gives points first character and s.begin()+j points last character of word before space 
                reverse(s.begin()+i,s.begin()+j);
                i = j+1;    // setting the i pointer to point the first character of another word
            }
        }
        /*
  Input-> s ="Let's take LeetCode contest"
  Output->  ="s'teL ekat edoCteeL contest"
 Expected-> ="s'teL ekat edoCteeL tsetnoc" 
till now->  ="s'teL ekat edoCteeL contest""
                                  ^^^^^^^ 
              the contest has not reversed as
              we '\0' encountered while loop terminates and i is pointing to the first character of the last word
        */
        // to reverse the last word
        reverse(s.begin() + i, s.end());
        return s;
    }
};