class Solution {
    vector<int>cache;

    int dfs(vector<int>& nums,int i){
        if(i >= nums.size()) return 0;

        if(cache[i] != -1){
            return cache[i];
        }
        cache[i] = max(dfs(nums,i + 1),nums[i] + dfs(nums,i + 2));
        return cache[i];
    }
public:
    int rob(vector<int>& nums) {
       cache.resize(nums.size(),-1);
       return dfs(nums,0);
    }
};
