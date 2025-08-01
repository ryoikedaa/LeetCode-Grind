class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
           vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicate j

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        answer.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;

                        while (left < right && nums[left] == nums[left - 1]) left++;   // skip duplicate left
                        while (left < right && nums[right] == nums[right + 1]) right--; // skip duplicate right
                    } 
                    else if (sum < target) {
                        left++;
                    } 
                    else {
                        right--;
                    }
                }
            }
        }

        return answer;
    }
};