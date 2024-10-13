class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // Loop through each character in the first string
    for (int i = 0; i < strs[0].size(); ++i) {
        char c = strs[0][i];  // Character to compare

        // Check the current character against all other strings
        for (int j = 1; j < strs.size(); ++j) {
            // If the current string is shorter or the character doesn't match
            if (i == strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }

    // If no mismatch is found, the entire first string is the prefix
    return strs[0];
}
};