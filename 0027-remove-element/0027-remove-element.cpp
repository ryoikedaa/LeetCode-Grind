class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int numVal = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[numVal] = nums[i];
                numVal++;
            }
        }
        return numVal;
    }
};