class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int> arr;

for(int i=0;i<nums.size();i++){
  int remain = target - nums[i];
  if(arr.find(remain) != arr.end()){
    return {arr[remain],i};
  }
  arr[nums[i]] = i;
}
return {};
    }
};
