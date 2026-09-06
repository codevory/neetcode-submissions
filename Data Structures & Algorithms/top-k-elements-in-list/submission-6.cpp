class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n = nums.size();
       if(n == 1) return nums;
       unordered_map<int,int>mpp;

        for(int val: nums){
        mpp[val]++;
       }

       vector<pair<int,int>> bucket;
       for(auto& [val,freq]: mpp){
         bucket.push_back({freq,val});
       }

       sort(bucket.rbegin(),bucket.rend());

       vector<int> ans;
       for(int i = 0; i < k; i++){
        ans.push_back(bucket[i].second);
       }
     
     return ans;
    }
};
