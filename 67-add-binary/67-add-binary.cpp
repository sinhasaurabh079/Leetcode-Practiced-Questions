class Solution {
public:
    string addBinary(string a, string b) {
      /* Approach
        1. pehle string to store ans
        2. last se addition start kr rhe h
        3. jb tk dono m se koi string kht nhi ho jaati ya last carry 0 nhi ho jaata tb tk loop
        4. ans string m either 0 or 1 hi store ho skta h isliye mod kr rhe h
           humara sum = {0,1,2} hi ho skta h
           jb sum 0,1 hoya toh "0" or "1" ans m jayega & carry = 0 hoga
           and jb sum 2 hoga tb "0" ans m jayega & carry = 1 hoga 
        5. string ko reverse krdene pr required string ml jayegi 
        ex - a = 11
             b = 01
         sum = 1+1 = (sum = 2 , ans = "0", carry = 1) &  initial carry is 0
             = (1+0+(1)) = (sum = 2, ans="00", carry = 1) & carry = 1
             = ((1)+ nothing) = (sum = 1, ans="001", carry = 0) & carry = 0 
              both string ended and carry is also 0 loop terminated
      */  
     string ans=""; 
     int i=a.length()-1;
     int j=b.length()-1;
     int carry=0; 
     while(i>=0 || j>=0 || carry==1){
       if(i>=0){
         carry += a[i--] - '0';
       }
       if(j>=0){
         carry += b[j--] - '0';
       }
       ans += carry%2 + '0';
       carry /= 2;
     }
       reverse(begin(ans),end(ans));
       return ans; 
       // tc = O(max(a,b));
       // sc = O(max(a,b)); 
  }   
};