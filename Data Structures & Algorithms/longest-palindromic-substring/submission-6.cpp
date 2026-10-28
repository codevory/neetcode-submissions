class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        if(s.length() == 1){
         res += s[0];
         return res;
        } else if(s.length() == 2){
            if(s[0] != s[1]){
              res = s[0];
              return res;
            } else {
                return s;
            }
        }

      int resLen = -1,resIdx = -1;

      for(int i = 0; i < s.size(); i++){
        // odd length
        int l = i,r = i;
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            if(r - l + 1 > resLen){
                resIdx = l;
                resLen = r - l + 1;
            }
            l--;
            r++;
        }

        //even length 
        l = i,r = i + 1;
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            if(r - l + 1 > resLen){
                resIdx = l;
                resLen = r - l + 1;
            }
            l--;
            r++;
        }
      }
      return s.substr(resIdx, resLen);
    }
};
