class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1;
        if(digits[i] != 9)
        {
            digits[i] += 1;
        }
        else
        {
            while(i >= 0 && digits[i] == 9)
            {
                digits[i] = 0;
                i--;
            }
            // ex - a[] = 9 -> 9+1 = 10 => [1,0]
            // in this case n=1 and i becomes -1
            if(i == -1)    
               digits.insert(digits.begin(),1);  // setting first index element 1
               // in case of two, three,... digits
               // adding 1 at second last index
            else
               digits[i] += 1;   
        }
        return digits;
    }
};