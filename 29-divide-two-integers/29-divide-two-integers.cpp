class Solution {
public:
    int divide(int dividend, int divisor) {
      
   // since INT_MIN can't be negated, we need to handle this special case
       if(dividend == INT_MIN && divisor == -1)
           return INT_MAX;

       int sign = ((dividend<0)^(divisor<0)) ? -1 : 1;
       // for safe division
       long long dvd = labs(dividend);
       long long dvs = labs(divisor);
       long long res=0;
       while(dvd >= dvs){
           long long temp = dvs, multiple = 1;
          // increase the multiple of the divisor until it's greater than the dividend
           while(dvd >= (temp << 1)){
              temp <<= 1;
              multiple <<= 1;
           }
           // subtracting the current multiple divisor from dividend
           // and adding multiple to the answer
           dvd -= temp;
           res += multiple;
       }
      return (sign == 1) ? res : -res;  
    }
};