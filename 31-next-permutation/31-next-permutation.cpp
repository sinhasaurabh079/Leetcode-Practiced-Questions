class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int curr = -1;
        int i = nums.size() - 1;
        while (i > 0) {
            if (nums[i - 1] < nums[i]) {
                curr = i - 1;
                break;
            }
            i--;
        }
        if (curr == -1) {
            sort(nums.begin(), nums.end());
        } else {
            int m = curr + 1;
            while (i < nums.size()) {
                if (nums[i] > nums[curr] && nums[i] < nums[m]) {
                    m = i;
                }
                i++;
            }
            int temp = nums[m];
            nums[m] = nums[curr];
            nums[curr] = temp;
            sort(nums.begin() + curr + 1, nums.end());
        }
    }
};

