class Solution {
public:
    int trap(vector<int>& height) {
        int lMax = 0;
        int rMax = 0;
        int total = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            if(height[left] <= height[right]){
                if(lMax > height[left]){
                    total += lMax-height[left];
                }else{
                    lMax = height[left];
                }
                left = left+1;
            }
            else{
                if(rMax > height[right]){
                    total += rMax - height[right];
                }else{
                    rMax = height[right];
                }
            right = right - 1;
            }
        }
        return total;
    }
};
