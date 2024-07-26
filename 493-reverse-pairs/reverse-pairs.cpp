class Solution {
public:

    void merge(vector<int> &nums,int s,int mid,int e){
        int i= s;
        int j = mid+1;
        vector<int> v;

        while(i<=mid && j<=e){
            if(nums[i]>nums[j]){
                v.push_back(nums[j]);
                j++;
            }
            else{
                v.push_back(nums[i]);
                i++;
            }
        }

        while(i<=mid){
            v.push_back(nums[i]);
            i++;
        }
        while(j<=e){
            v.push_back(nums[j]);
            j++;
        }

    for (int k = s; k <= e; k++) {
        nums[k] = v[k-s];
    }
    }

    int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        
        while (right <= high && arr[i] > 2L * arr[right]) 
        right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

    int mergeSort(vector<int> &nums,int s,int e){
        int count = 0;
        if(s>=e){
            return count;
        }
        int mid = (s + e)/2;
        count+= mergeSort(nums,s,mid);
        count+= mergeSort(nums,mid+1,e);
        count+= countPairs(nums,s,mid,e);
        merge(nums,s,mid,e);
        return count;
    }

    int reversePairs(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        return mergeSort(nums,s,e);
    }
};