class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;

        int l = 0;
        int result = 0;

        for (int r = l; r < s.size(); r++) {
            while (chars.find(s[r]) != chars.end()) {
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[r]);
            result = max(result, r - l + 1);
        }
        return result;
    }
};
