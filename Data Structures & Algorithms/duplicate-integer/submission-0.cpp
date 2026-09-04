class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int k = 0;
        bool res = false;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
            if(nums[i] == nums[j]){
               k++;
            }
           }
        }
               if(k >= 1) res = true;
               else{
                res = false;
               }
        return res;
    }
};