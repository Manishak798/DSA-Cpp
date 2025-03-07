class Solution {
public:
    int search(vector<int>& nums, int target) {
        long low = 0;
        long high = nums.size()-1;
        while(low<=high){
            long long mid = (low+high)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
};