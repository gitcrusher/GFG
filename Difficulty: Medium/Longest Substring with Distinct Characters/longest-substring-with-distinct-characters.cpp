class Solution {
public:
    int longestUniqueSubstr(string &s) {
        unordered_map<char, int> mp;
        int r = 0, l = 0, ans = 0;

        while (r < s.size()) {
            mp[s[r]]++;

            while (mp.size() < (r - l + 1)) {
                mp[s[l]]--;

                if (mp[s[l]] == 0)
                    mp.erase(s[l]);

                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        return ans;
    }
};