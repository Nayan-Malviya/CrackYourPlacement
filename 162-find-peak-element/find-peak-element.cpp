class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        if(nums.size()==1)
        return 0;

        while(s<=e){
            int mid = s + (e-s)/2;

            if((mid != nums.size()-1 && nums[mid]>nums[mid+1]) && (mid != 0 && nums[mid]>nums[mid-1])){
                return mid;
            }

            else if(mid != nums.size()-1 && nums[mid]<nums[mid+1])
            s = mid + 1;

            else
            e = mid -1;
        }

        if(nums[0]>nums[1])
        return 0;

        if(nums[nums.size()-1]>nums[nums.size()-2])
        return nums.size()-1;

        return -1;
    }
};