class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
        int i=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[j-1])
            continue;
            else
            nums[i] = nums[j]; i++;
        }
        return i;
    }
};