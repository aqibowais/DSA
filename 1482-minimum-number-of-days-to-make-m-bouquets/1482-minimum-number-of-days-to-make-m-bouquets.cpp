class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*1LL*k*1LL > bloomDay.size()) return -1;
        //determining the min and max in a vector
        int mini = INT_MIN;
        int maxi = INT_MAX;
        for(int i=0; i<bloomDay.size();i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
        long int low = mini;
        long int high = maxi;
        while(low<=high){
            int mid = (low + high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else low = mid + 1;
        }
        return low;
    }
    bool possible(vector<int>& bloomDay, int day , int m, int k){
        int count = 0;
        int bouq = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count ++;
            }else{
                bouq += (count / k);
                count = 0;
            }
        }
        bouq += (count / k);
        return bouq >= m;
    }
};