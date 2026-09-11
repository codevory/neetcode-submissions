class Solution {
public:
    int findMin(vector<int> &nums) {
         int n = nums.size();
         int left = 0; int right = n -1;
         int res = INT_MAX;
         
         while(left <= right){
            int min_one = min(nums[left],nums[right]);
            res = min(res,min_one);
            left++;
            right--;
         }

         return res;
    }
};
