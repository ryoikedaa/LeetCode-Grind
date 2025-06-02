class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for (const string& word : strs) {
            string sorted_word = word;

            sort(sorted_word.begin(), sorted_word.end());
            hashmap[sorted_word].push_back(word);
            }
            vector<vector<string>> result;
            for (auto& pair :hashmap) {
                result.push_back(pair.second);
            }
            return result;
        }
};