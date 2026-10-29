class Solution {
    int countPalindrome(string s,int left,int right){
        int count = 0;
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }
public:
    int countSubstrings(string s) {
        if(s.length() == 1) return 1;
        int count = 0;

        for(int i = 0; i < s.length(); i++){
            count += countPalindrome(s,i,i);
            count += countPalindrome(s,i,i + 1);
        }
        return count;
    }
};
