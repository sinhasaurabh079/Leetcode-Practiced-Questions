class Solution {
public:
    double average(vector<int>& salary) {
        // int max = *max_element(salary.begin(),salary.end());
        // int min = *min_element(salary.begin(),salary.end());
        // int sum=0;
        // for(int i:salary)
        //    sum += i;
        // return (double)(sum-max-min)/(double)(salary.size()-2);   

        int _max=INT_MIN;
        int _min=INT_MAX;
        int sum=0;
        for(int i:salary){
            sum += i;
            _min = min(_min,i);
            _max = max(_max,i);
        }
        return (double) (sum - _min -_max)/ (double)(salary.size()-2);
    }
};