class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector<int> ans;
        for(int val : nums){
            count[val]++;
        }
     vector<pair<int,int>> arr;
     for(auto val : count){
        arr.push_back({val.second,val.first});
     }
     sort(arr.rbegin(),arr.rend());
for(int i=0;i<k;++i){
    ans.push_back(arr[i].second);
}
return ans;
    }
};
