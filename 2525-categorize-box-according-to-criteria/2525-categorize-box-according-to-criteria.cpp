class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool a = (length >= 10000 || width >=10000 || height >=10000 || mass >=10000 || (long long int) length*width*height >= 1000000000 );
        
        bool b =(mass >=100);

        if(a&&b)
             return "Both";
        else if(a)
            return "Bulky";
        else if(b)
            return "Heavy";
        else
             return "Neither";
        
    }
};