class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int digits=0;
        int count=0;
        while(x)
        {
            digits = x%10;
            if(num%digits == 0)
                 count++;
            x /= 10;
        }
        return count;
    }
};