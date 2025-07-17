class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int right = nums.size() - 1;

            while (j < right) {
                int sum = nums[i] + nums[j] + nums[right];
                
                if (sum == target) {
                    return sum;
                }
                if (abs(sum - target) < abs(result - target)) {
                    result = sum;
                }
                if (sum > target) {
                    right--;
                }
                else if (sum < target) {
                    j++;
                }

            }
        }
        return result;
    }
};