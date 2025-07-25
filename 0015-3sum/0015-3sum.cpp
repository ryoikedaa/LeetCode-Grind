class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2 ; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int right = nums.size() - 1;

            while (j < right) {
                int sum = nums[i] + nums[j] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[j], nums[right]});
                    j++;
                    right--;

        
                    while (j < right && nums[j] == nums[j - 1]) j++;
                    while (j < right && nums[right] == nums[right + 1]) right--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    right--;
                }
            }
        }

        return result;
    }
};
