class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
   unordered_map<string,vector<string>>mpp;

   for(const auto& val: strs){
    string sortedS = val;
    sort(sortedS.begin(),sortedS.end());
    mpp[sortedS].push_back(val);
   }

   vector<vector<string>> ans;
   for(auto& pair: mpp){
    ans.push_back(pair.second);
   }

   return ans;
    }
};
