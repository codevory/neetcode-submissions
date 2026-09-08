class Solution {
    bool isAlphaNum(char c){
        return ( 
            c >= 'A' && c <= 'Z' || 
            c >= 'a' && c <= 'z' || 
            c >= '0' && c <= '9');
    }
public:
    bool isPalindrome(string s) {
        string newStr = "";
        int lp = 0;
        int rp = s.length() -1;

        while(lp <= rp){
           while(lp < rp && !isAlphaNum(s[lp])){
            lp++;
           }

           while(rp > lp && !isAlphaNum(s[rp])){
            rp--;
           }

           if(tolower(s[lp]) != tolower(s[rp])){
            return false;
           }

           lp++; rp--;
        }
        return true;
    }
};
