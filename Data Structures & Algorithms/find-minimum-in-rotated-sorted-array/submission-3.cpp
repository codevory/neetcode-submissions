class Solution {
public:
    int findMin(vector<int> &nums) {
         int n = nums.size();
         int left = 0; int right = n -1;
         int res = INT_MAX;
         
         while(left <= right){
            int mid = left + (right - left) / 2;
            res = min(res,nums[mid]);
            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else{
                right = mid -1;
            }
         }

         return res;
    }
};
