class Solution {
private:
    int findMaxElement(vector<int>& nums){
        int maxi = 1;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }
    int sumOfDiv(vector<int>& nums, int threshold){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil((double) nums[i] / (double) threshold);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = findMaxElement(nums);
        while(low<=high){
            int mid = (low+high)/2;
            if(sumOfDiv(nums,mid) <= threshold){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};