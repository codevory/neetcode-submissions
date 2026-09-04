class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.empty()) return 0;
     int streak=0,curr=nums[0],i=0,res=0,n=nums.size();
     sort(nums.begin(),nums.end());
     while(i < n){
        if(nums[i] != curr){
            curr = nums[i];
            streak = 0;
        }
        while(i<n && nums[i] == curr){
            i++;
        }
        streak++;
        curr++;
        res = max(res,streak);
     }
     return res;
    }
};
