class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> newVector;
        for (int i = 0; i < nums.size(); i++) {
            int squared = nums[i] * nums[i];
            newVector.push_back(squared);
        }
        sort(newVector.begin(), newVector.end());
        return newVector;
    }
};