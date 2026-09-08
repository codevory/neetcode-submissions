class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;

        for(auto& s: strs){
           string key(26,0);
           for(char c: s){
              key[c - 'a']++;
           }

           mpp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& val: mpp){
          ans.push_back(val.second);
        }

        return ans;
    }
};
 