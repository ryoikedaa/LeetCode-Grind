class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> newVector;

        for (int i = 0; i < nums.size(); i++) {
            newVector.push_back(nums[i] * nums[i]);
        }

        sort(newVector.begin(), newVector.end());
        return newVector;
    }
};