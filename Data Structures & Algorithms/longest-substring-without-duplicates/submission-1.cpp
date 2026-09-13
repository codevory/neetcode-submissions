class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 1) return 0;
        if(s.length() == 1) return 1;
        int n = s.length();
        int l = 0;

        int max_length = 0;

        unordered_set<char>charset;
        for(int r = 0; r < n; r++){
            while(charset.find(s[r]) != charset.end()){
                charset.erase(s[l]);
                l += 1;
            }
            charset.insert(s[r]);
            max_length = max(max_length,r - l + 1);
        }
        return max_length;
    }
};
