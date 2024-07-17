class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,index=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[index],nums[i]);
                index++;
            }
            i++;
        }
    }
};