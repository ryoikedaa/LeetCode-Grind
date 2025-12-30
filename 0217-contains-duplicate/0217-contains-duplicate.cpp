class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //input
        unordered_set<int>megaSet;
        //What DS/Algo
        for (int i = 0; i < nums.size(); i++) {
            if (megaSet.count(nums[i])) {
                return true;
            }
            else {
                megaSet.insert(nums[i]);
            }
        }
        //What to do with thte data
        return false;
        //Output

        //Returns true if an element appears twice. 
    }
};