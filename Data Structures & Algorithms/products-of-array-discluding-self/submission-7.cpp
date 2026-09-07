class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n,0);
    int zero_cnt = 0;

    for(int i = 0; i < n; i++){
     if(nums[i] == 0){
      zero_cnt += 1;
     }
     if(zero_cnt > 1) return result;
    }

    int total_prod = 1;
    for(int i = 0; i < n; i++){
      if(nums[i] != 0){
        total_prod *= nums[i];
      }
    }

    if(zero_cnt == 1){
      for(int k = 0; k < n; k++){
        if(nums[k] == 0){
          result[k] = total_prod;
          return result;
        }
      }
    }

    else{
      for(int l = 0; l < n; l++){
        result[l] = total_prod / nums[l];
      }
    }

    return result;
    }
};
