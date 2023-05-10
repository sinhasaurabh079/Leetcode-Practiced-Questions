class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pdt = 1;

        while(n){
           int d = n%10;
           sum += d;
           pdt *= d;
           n /= 10;
        }
        return pdt-sum;
    }
};