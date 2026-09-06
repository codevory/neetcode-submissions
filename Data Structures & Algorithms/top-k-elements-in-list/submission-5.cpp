class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n = nums.size();
       if(n == 1) return nums;

       int count = k;
       unordered_map<int,int>mpp;
       vector<vector<int>> bucket(n+1);
       vector<int> ans;       

        for(int val: nums){
        mpp[val]++;
       }

       for(auto& [val,freq]: mpp){
         bucket[freq].push_back(val);
       }

       for(int i = n; i > 0; i--){
        for(int val: bucket[i]){
            ans.push_back(val);
            if(ans.size() == k) return ans;
        }
       }
     
     return ans;
    }
};
