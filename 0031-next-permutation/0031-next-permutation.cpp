class Solution {
private:
    void reverse(vector<int>& nums, int left, int right){
        while(left<right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();
        if (n < 2) return;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        // If no such index is found, reverse the entire array (it's the last   permutation)
        if (index == -1) {
            reverse(nums, 0, n - 1);
            return;
        }
        for(int i=n-1; i>=index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums, index+1, n-1);
    }
};