class Solution {
public:
    void createMapping(string& str) {
        // Creating mapping
        // This function will normalize the pattern and words
        // in a similar format so that we can compare them
        char start = 'a';
        char mapping[300] = {0};

        // Assign a mapping for each unique character
        for (auto ch : str) {
            if (mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        // Update the string based on the mapping
        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        // Normalize the pattern
        createMapping(pattern);

        // Check each word
        for (string s : words) {
            string tempString = s;
            
            // Normalize tempString
            createMapping(tempString);

            if (tempString == pattern) {
                // If normalized tempString matches the pattern, add to the answer
                ans.push_back(s);
            }
        }

        return ans;
    }
};
