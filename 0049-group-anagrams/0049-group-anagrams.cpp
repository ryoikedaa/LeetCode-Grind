class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s: strs) {
            string partofstring = s;
            sort(partofstring.begin(), partofstring.end());
            mp[partofstring].push_back(s);
        }
        vector<vector<string>> anagrams;

        for (auto p: mp) {
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
};