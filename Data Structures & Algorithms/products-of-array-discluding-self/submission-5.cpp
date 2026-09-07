class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n,1);

    int lp = 1;
    for(int i = 0; i <= n -1; i++){
    result[i] = lp;
    lp *= nums[i];
    }

    int rp = 1;
    for(int j = n -1; j >= 0; j--){
      result[j] *= rp;
      rp *= nums[j];
    }

    return result;
    }
};
