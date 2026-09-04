class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int k = 0;
        int rp = nums.size() -1;
        int lp = 0;
        bool res = false;
     while(rp > lp){
        if(nums[lp] == nums[rp] || nums[lp] == nums[lp+1] || nums[rp] == nums[rp-1]){
            k++;
        }
        if(nums[lp] < nums[rp]) lp++;
        else{
            rp--;
        }
     }
       if(k >= 1) res = true;
       else{res = false;
       }
        return res;
    }
};