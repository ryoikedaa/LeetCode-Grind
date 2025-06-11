class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> hashmap;

        for (char c : s) {
            if (hashmap.count(c)) {
                return c;
            }
            hashmap.insert(c);
        }
        return 0;
    }
};