class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> output;

        for (auto& s: strs) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }

        for (auto p : mp) {
            output.push_back(p.second);
        }
        return output;
        
    }
};