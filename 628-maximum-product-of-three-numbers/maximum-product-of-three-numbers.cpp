class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int product;
        int j=nums.size()-1;

        return max(nums[j]*nums[j-1]*nums[j-2] , nums[0]*nums[1]*nums[j]);
    }
};