class Solution {
public:
    char freq[26] = {0}; //zero initializer in C idk if it works in c++ too
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) return false;
        }

        return true;
    }
};
