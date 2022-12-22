class Solution {
public:
    string intToRoman(int num) {
        string roman="";
        // For Thousand's place Roman Numeral
        //              1000 2000 3000
        string M[] = {"","M","MM","MMM"};
        // For Hundred's place Roman Numeral
        //              100  200  300  400 500  600   700   800   900
       string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
       // For Ten's place Roman Numeral
       //               10   20   30   40   50   60   70    80    90
       string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
       // For One's place Roman Numeral
       //                1   2    3     4   5   6     7     8      9
       string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
       
       roman = M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
       return roman;
    }
};