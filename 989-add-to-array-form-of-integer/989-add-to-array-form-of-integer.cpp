class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int K) {
        /*
       Algo
        * piche se addition krengey
        * sum ka unit place wale ko current position pr dalengey
          and bache hue part of sum ko carry m bhejengey
        * if array get exhausted while the carry not
          add that carry at the front   
      */
         for (int i = num.size() - 1; i >= 0 && K > 0; --i) {
            num[i] += K;
            K = num[i] / 10;
            num[i] %= 10;
        }
        while (K > 0)
        {
            num.insert(num.begin(), K % 10);
            K /= 10;
        }
        return num;
        
    }
};
