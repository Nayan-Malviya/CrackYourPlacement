class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i]) && (i!=mp[target-nums[i]])){
                return {i,mp[target-nums[i]]};
            }
        }
        return {};
    }
};