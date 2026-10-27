class Solution {
    vector<vector<int>>cache;

    int dfs(int i,int flag,vector<int>& nums){
        if(i >= nums.size() || (flag == 1 && i == nums.size() -1)) return 0;

        if(cache[i][flag] != -1){
            return cache[i][flag];
        }

        cache[i][flag] = max(dfs(i + 1,flag,nums),nums[i] + dfs(i + 2,flag,nums));
        return cache[i][flag];
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() ==1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);

        cache.resize(nums.size(),vector<int>(2,-1));
        return max(dfs(0,1,nums),dfs(1,0,nums));
    }
};
