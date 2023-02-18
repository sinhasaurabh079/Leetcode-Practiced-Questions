class Solution {
public:
    int minMaxDifference(int num) {
        // Algo
        // kisi number ko maximum bna h toh usko pehle digit ko 9 se replace krdo
        // and minimum bnana h toh 0 se replace krdo
        // For maximum pehle digit agr 9 nhi h toh usko and uske occurence ko 9 se replace krdengey
        // ex - 11891 => 1 != 9, so 1 occurence replace to 9 --> 99891
        // For minimum pehle wala digit k saare occurences ko 0 se replace krdenge
        string s = to_string(num);
        string x = to_string(num);
        // first digit for max and min no generation
        char first_digit; 
      
        // finding first non-9 character for making maximum no (say first)
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='9')
            {
              first_digit = s[i];
              break;
            }
        }

        // replaing all occurences of first with 9
        for(int j=0;j<s.length();j++){
            if(s[j] == first_digit)
                 s[j] = '9';
        }         
        int num1 =  stoi(s);
        
        first_digit = x[0];
        // replacing all occurences of fi   
        for(int j=0;j<s.length();j++){
            if(x[j] == first_digit)
                 x[j] = '0';
        }        
        int num2 = stoi(x);

        return num1-num2;
    }
};