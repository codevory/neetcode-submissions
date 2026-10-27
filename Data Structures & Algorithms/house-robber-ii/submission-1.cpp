class Solution {
    int dfs(vector<int>& nums){
      int rob1 = 0, rob2 = 0;
      for(int val : nums){
        int temp = max(val + rob1,rob2);
        rob1 = rob2;
        rob2 = temp;
      }

      return rob2;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() ==1) return nums[0];
        
        vector<int> num1(nums.begin() + 1,nums.end());
        vector<int> num2(nums.begin(),nums.end() -1);

        return max(nums[0],max(dfs(num1),dfs(num2)));
    }
};
