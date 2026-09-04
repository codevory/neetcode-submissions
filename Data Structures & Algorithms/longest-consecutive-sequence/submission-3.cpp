class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.empty()) return 0;
     int longest = 0;
     unordered_set<int> arr(nums.begin(),nums.end());

     for(int n : nums){
        if(arr.find(n-1) == arr.end()){
           int len = 1;
            while(arr.find(n + len) != arr.end()){
             len++;
            }
            longest = max(longest,len);
        }
     }
     return longest;
    }
};
