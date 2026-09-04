class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
       unordered_set<int> store(nums.begin(),nums.end());
       int res = 0;
       for(int n : nums){
        int streak=0,curr=n;
        while(store.find(curr) != store.end()){
            streak++;
            curr++;
        }
        res = max(streak,res);
       }
       return res;
    }
};
