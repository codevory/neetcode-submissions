class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(),streak=0,curr=nums[0],i=0,res=0;
        if(nums.empty()) return 0;
      sort(nums.begin(),nums.end());

      while(i<n){
        if(curr != nums[i]){
            curr = nums[i];
            streak = 0;
        }

        while(i < n && nums[i] == curr){
            i++;
        }
        streak++;
        curr++;
        res = max(res,streak);
      }
     return res;
    }
};
