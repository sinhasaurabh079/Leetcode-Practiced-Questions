class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        int i = 0;
        int j = numbers.size()-1;
        while(i<j)
        {    int sum = numbers[i]+numbers[j];
            if(sum == target)
              {
                  index.push_back(i+1);
                  index.push_back(j+1);
                  break;
              }
            else if(sum > target)
               j--;
            else
               i++;  
        }
        return index;
    }
};