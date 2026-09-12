class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1 && nums[0] != target) return -1;
        int n = nums.size();

        for(int val = 0; val < n; val++){
            if(nums[val] == target) return val;
        }

        return -1;
    }
};
