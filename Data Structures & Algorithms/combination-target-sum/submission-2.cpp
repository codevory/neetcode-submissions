class Solution {
   public:
    vector<vector<int>> res;
    void dfs(vector<int>& nums, int target, vector<int> curr, int total, int i) {
        if (total == target) {
            res.push_back(curr);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            if (total + nums[j] > target) {
                return;
            }

            curr.push_back(nums[j]);
            dfs(nums, target, curr, total + nums[j], j);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        dfs(nums, target, curr, 0, 0);
        return res;
    }
};
