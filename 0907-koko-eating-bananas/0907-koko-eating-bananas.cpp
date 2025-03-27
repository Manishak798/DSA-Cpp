class Solution {
private:
    long long totalHrs(vector<int>& piles, int h){
        long long totalHours = 0;
        for(int i=0; i<piles.size(); i++){
            totalHours+= ceil((double)piles[i]/(double)h);
        }
        return totalHours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low =1;
        long long high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            long long mid = (low+high)/2;
            long long totalHrss = totalHrs(piles, mid);
            if(totalHrss<=h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};