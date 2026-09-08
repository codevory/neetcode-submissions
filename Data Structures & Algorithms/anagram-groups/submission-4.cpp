class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;

        for(auto& val: strs){
          string sortedS = val;
          sort(sortedS.begin(),sortedS.end());
          mpp[sortedS].push_back(val);
        }

        vector<vector<string>> ans;
        for(auto& val: mpp){
          ans.push_back(val.second);
        }

        return ans;
    }
};
 