class Solution {
public:
    int addDigits(int num) {
      // digRoot(d) properties
      // d(n) = 0,   if n=0
      // d(n) = 9,   if n=9*k
      // d(n) = n%9, if n is not multiple of 9
      if(num==0)
         return 0;
      else if(num%9==0)
         return 9;
      else
         return num%9;
      //return (num ? ((num%9==0)?9:num%9): 0); 
//       int digitalRoot=0;
//       while(num > 9){
//          digitalRoot += num%10;
//          num /= 10;
         
//          if(num==0 && digitalRoot > 9){
//             num = digitalRoot;
//             digitalRoot = 0;
//          }
//       }
//       return digitalRoot;        
    }
};
/*
// O(n) => TLE
      // jb tk num=0 na ho jaye digitalRoot find krte raho
      //  jaise hi num=0 ho and dR>=9 tb next round kro with 
      // updating num=dR and dR=0
      int digitalRoot = 0;
      while(num > 0){
         digitalRoot += num%10;
         num /= 10;
         
         if(num==0 && digitalRoot > 9){
            num = digitalRoot;
            digitalRoot = 0;
         }
      }
      return digitalRoot;
*/      