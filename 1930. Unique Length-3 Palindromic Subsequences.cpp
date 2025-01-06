class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        vector<int> first(26, -1), last(26, -1);
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int ch = s[i] - 'a';
            if (first[ch] == -1) {
                first[ch] = i;
            }
            last[ch] = i;
        }

        int count = 0;

        
        for (int i = 0; i < 26; i++) {
            if (first[i] != -1 && last[i] - first[i] > 1) {
                unordered_set<char> uniqueChars;
                for (int j = first[i] + 1; j < last[i]; j++) {
                    uniqueChars.insert(s[j]);
                }
                count += uniqueChars.size();
            }
        }

        return count;
    }
};
