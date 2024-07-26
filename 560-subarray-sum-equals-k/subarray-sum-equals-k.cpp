class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, sum = 0;
        map<int, int> map;
        map[0] = 1;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
            if (map.count(sum - k))
                count = count + map[sum - k];
            map[sum]++;
        }
        return count;
    }
};