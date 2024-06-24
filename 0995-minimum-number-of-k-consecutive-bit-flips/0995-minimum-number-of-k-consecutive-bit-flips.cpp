class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        int flip = 0, res = 0;
        for(int i=0; i<nums.size();i++){
            if(i>=k && nums[i-k]==-1){
                flip--;
            }
            if(flip%2==nums[i]){
                if(i+k>nums.size()) return -1;
                nums[i] = -1;
                flip ++ , res++;
            }
        }
        return res;
    }
};