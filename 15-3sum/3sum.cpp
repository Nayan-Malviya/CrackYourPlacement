class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1])
            continue;
            int a = nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int b = nums[j];
                int c = nums[k];
                if((a+b+c)==0){
                    ans.push_back({a,b,c});
                    j++;
                    k--;
                    //skip the duplicates:
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if((a+b+c)>0)
                k--;
                else
                j++;
            }
        }
        return ans;
    }
};