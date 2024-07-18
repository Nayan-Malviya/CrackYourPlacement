class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]);

            if (nums[idx] < 0)
                return idx;

            nums[idx] = -nums[idx];
        }
        return -1;
    }
};